#include<iostream>
using namespace std;
class marks
{
      protected:
                int mt1;
                int mt2;
                int et;
      public:
             marks():mt1(0), mt2(0), et(0)
             {}
             marks(int m1, int m2, int e): mt1(m1), mt2(m2), et(e)
             {}
             void getmarks()
             {
                  cout<<"Enter marks In Mt1"; cin>>mt1;
                  cout<<"\nEnter marks in mt2"; cin>>mt2;
                  cout<<"\nEnter marks in et"; cin>>et;
                  }
             void display()
             {
                  cout<<mt1<<endl;
                  cout<<mt2<<endl;
                  cout<<et<<endl;
                  }
};
class physics :public marks
{
      private: 
               int practical;
      public:
             physics():marks()
             {}
             physics(int p, int a, int b, int c): practical(p), marks(a,b,c)
             {}
             void getmarks()
             {
                  marks::getmarks();
                  cout<<"Enter Practical Marks"; cin>>practical;
                  }
             void display()
             {
                  marks::display();
                  cout<<practical<<endl;
                  }
};

int main()
{
    physics p1;
    p1.getmarks();
    p1.display();
    system("pause");
    return 0;
}
                  
