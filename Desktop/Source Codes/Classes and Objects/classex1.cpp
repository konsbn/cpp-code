#include<iostream>

using namespace std;
class smallobj
{
      private:
              int somedata;
      public:
             void setdata(int d)
             {somedata=d;}
             void showdata()
             {
                  cout<<"Data is"<< somedata<<endl;
                  }
                  };
int main()
{
    smallobj s1, s2;
    s1.setdata(123);
    s2.setdata(345);
    
    s1.showdata();
    s2.showdata();
    system("pause");
    return 0;
}
    
