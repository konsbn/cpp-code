#include<iostream>
#include<cmath>
using namespace std;
class ComplexNo
{
      private:
              int x; int y;
      public:
      ComplexNo():x(0), y(0)
      {}


      ComplexNo(int re, int im):x(re), y(im)
      {}
      }
             void get()
             {
                  int re; int im;
                  cout<<"Enter Real Part"; cin>>re;
                  cout<<"Enter imaginary part"; cin>>im;
                  x=re;
                  y=im;
                  }
             void add(ComplexNo, ComplexNo);
             void disp()
             {
                  cout<<"Real Part="<<x<<endl;
                  cout<<"Imaginary part="<<y<<endl;
                  }
             void mod(ComplexNo);
                  };
      void ComplexNo::add(ComplexNo n1, ComplexNo n2)
      {
           x= n1.x +n2.x;
           y=n1.y+n2.y;
           }
      void ComplexNo:: mod(ComplexNo m1)
      {
           double m;
           x= m1.x*m1.x;
           y= m1.y*m1.y;
           m=sqrt(x+y);
           cout<<"Modulus of the complex No is"<<m<<endl;
           }
int main()
{
    ComplexNo v1, v2, v3;
    ComplexNo v4(6,6);
    ComplexNo v5(v4);
    ComplexNo* cmplx;
    cmplx=new ComplexNo;
    cmplx->get();
    cmplx->disp();
    v1.get();
    v1.mod(v1);
    v2.get();
    v2.mod(v2);
    v3.add(v1, v2);
    v3.disp();
    v4.disp();
    v5.disp();
    delete[] cmplx;

    return 0;
}

