#include<iostream>
#include<cmath>
using namespace std;
void factor(int, int);
int main()
{
    int a;
    int sqt;
    double s;
    cout<<"Enter a Number";
    cin>>a;
    s=sqrt(a);
    sqt=s;
    cout<<"The factors are"<<endl;
    factor(a, sqt);
    system("pause");
    return 0;
}
void factor(int n, int sqrt)
{
  
     for(int i=1; i<=n; i++)
     {
             for(int j=1; j<=n; j++)
             {
                     if(i*j==n&&(i!=1||j!=1))
                     cout<<i<<"\t"<<j<<endl;
                     }
                     }
                     } 
