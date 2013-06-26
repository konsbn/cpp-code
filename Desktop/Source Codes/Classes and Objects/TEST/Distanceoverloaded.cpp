#include<iostream>
using namespace std;
class Distance
{
      private:
              int cm;
              int m;
      public:
             Distance():cm(0), m(0)
             {}
             Distance(int c, int mt):cm(c), m(mt)
             {}
             void get()
             {
                  cout<<"ENTER CM"; cin>>cm;
                  if(cm>=100)
                  {
                             m=m+1;
                             cm=cm%100;
                             }
                  cout<<"Enter Metres"; cin>>m;
                  }
             Distance operator +(Distance D)
             {
                      int mtr=0; int cmr=0;
                      cmr=cm+D.cm;
                       if(cmr>=100)
                       {
                             mtr=mtr+1;
                             cmr=cmr%100;
                             }
                       mtr=m+D.m;
                       return Distance(cmr, mtr);
                       }
             void disp()
             {
                  cout<<m<<"m"<<cm<<"cm"<<endl;
                  }
};
int main()
{
    Distance d1, d2, d3;
    d1.get();
    d2.get();
    d3= d1+d2;
    d1.disp();
    d2.disp();
    d3.disp();
    system("pause");
    return 0;
}
                      
