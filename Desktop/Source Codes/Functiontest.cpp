#include<iostream>
using namespace std;

    void add(int, int);
int main()
{
    int a,b;
    cout<<"enter two numbers "<<endl;
    cin>>a>>b;
    add(a,b);
    system("pause");
    return 0;
}
void add(int a, int b)
{
     cout<<a+b<<endl;
}
    
