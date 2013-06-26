#include<iostream>
using namespace std;
int larg(int, int);
int main()
{
    int x, y,z;
    cout<<"Enter three numbers"<<endl;
    cin>>x>>y>>z;
    cout<<larg(larg(x,y),z)<<endl;
    system("pause");
    return 0;
}
int larg(int a, int b)
{
    int s;
    if(a>b)
    s=a;
    if(b>a)
    s=b;
    return s;
}
