#include<iostream>
using namespace std;
class Dollars
{
      private:
              int dollars;
              int cents;
      public:
             Dollars():dollars(0), cents(0)
             {}
             Dollars(int dol, int cen):dollars(dol), cents(cen)
             {}
             void get()
             {
                  cout<<"Enter Dollars"; cin>>dollars;
                  cout<<"Enter Cents"; cin>>cents;
                  if(cents>=100)
                  {
                                dollars+=1;
                                cents-=100;
                                }
                                }
             Dollars operator +(Dollars d1)
             {
                     Dollars temp;
                     temp.dollars= d1.dollars+dollars;
                     temp.cents=d1.cents+cents;
                     if(cents>=100)
                  {
                                dollars+=1;
                                cents-=100;
                                }
                  return temp;
                  }
                  void show()
                  {
                       cout<<dollars<<"."<<cents<<" $"<<endl;
                       }
                       };
int main()
{
    Dollars dol1,  dol3;
    Dollars dol2(12, 12);
      dol1.show();
    dol2.show();
    dol3.show();
    dol1.get();

    dol3=dol1+dol2;
    dol1.show();
    dol2.show();
    dol3.show();

    return 0;
}
