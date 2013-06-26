#include<iostream>
using namespace std;
class Polygon
{
      protected:
                int h;
                int w;
      public:
             void set(int a, int b)
             {
                  h=a;
                  w=b;
                  }
             virtual int area()
             {
                     }
};
class Rect: public Polygon
{
      public:
             int area()
             {
                 return (w*h);
                 }
};
int main()
{
    Rect r;
    Polygon *ptr;
    ptr=&r;
    ptr->set(2,2);
    cout<<ptr->area();
    system("pause");
    return 0;
}
    
