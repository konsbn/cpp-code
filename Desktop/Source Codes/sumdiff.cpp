#include<iostream>
using namespace std;
    int sumdiff(int, int);
int main()
{

    int c,d;
    cin>>c>>d;
    cout<<sumdiff(c,d);
    system("pause");
    return 0;
}
int sumdiff(int a, int b)
{
    bool p=false;
    int s;
    p=false;
    s=a+b;
    if(a>b)
   { p=true;
    s=a-b;}
    return s;
}
    
