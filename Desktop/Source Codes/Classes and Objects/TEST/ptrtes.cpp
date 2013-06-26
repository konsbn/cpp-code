#include<iostream>
using namespace std;
int main()
{
    int v1=12;
    int* p1;
    int* p2;
    p1=&v1;
    p2=p1;
    cout<<p1<<"\t"<<*p1<<endl;
    cout<<p2<<"\t"<<*p2<<endl;
    return 0;
}
