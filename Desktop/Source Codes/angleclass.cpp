#include<iostream>
using namespace std;
class angle
{
      private:
      int deg;
      int min;
      public:
      angle()
              { }
      void get()
      {
           int d;
           int m;
           cin>>d;
           cin>>m;
           deg=d;
           min=m;
           while(min>60)
           {
                        deg+=1;
                        min-=60;
                        }
                        if(deg>360)
                        { deg= deg%360;}
           }
           void show()
           {
                cout<<deg<<"*"<<min<<"'"<<endl;
                }
           void add(angle, angle); 
                };
    
int main()
{
    angle a1, a2;
    a1.get();
    a2.get();
    a1.show();
    a2.show();
    system("pause");
    return 0;
}
                              
