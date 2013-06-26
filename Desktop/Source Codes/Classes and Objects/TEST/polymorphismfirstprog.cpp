#include<iostream>
using namespace std;
class CPolygon
{
      protected: 
                 int height;
                 int width;
      public:
             void set()
             {
                  cout<<"Enter Height"; cin>>height;
                  cout<<"Enter Width"; cin>>width;
                  }
                  virtual int area()=0;
             void printarea()
             {
                  
                  cout<<"Area"<<area()<<endl;
                  }
};
class Crectangle : public Cpolygon
{
      public:
             int area()
             { return (height*width);}
};
class Ctriangle: public Ctriangle
{
      public:
             int area()
             {
                 return ((height*width)/2);
                 }
};
int main()
{
    Crectangle r1;
    Ctriangle t1;
    Cpolygon *poly;
    poly=&r1;
    poly->set();
    poly->printarea();
    poly=&t1;
    poly->set();
    poly->printarea();
    system("pause");
    return 0;
}
                  
             
