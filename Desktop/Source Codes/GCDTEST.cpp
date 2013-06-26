#include<iostream>
using namespace std;

int main()
{
    int a, y;
    cout<<"enter two numbers"<<endl;
    cin>>a>>y;
        
    while(a!=y)
    { 
             if(a>y)
             a=a-y;
            else if(y>a)
              y=y-a;
              if(a==y)
              cout<<"GCD of 2 numbers is"<<y<<endl;
      }
     
    system("pause");
    return 0;
}
