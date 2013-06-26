#include<iostream>
using namespace std;
int main()
{
    int v1=12;
    int v2=23;
    int* ptr;
    *ptr= v1;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    *ptr=v2;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    return 0;
}
