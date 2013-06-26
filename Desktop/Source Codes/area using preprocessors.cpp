#include<iostream>
#define pi 3.14
using namespace std;
int main()
{   
    float r;
    float s;
    float v;
    cout<<"enter radius"<<endl;
    cin>>r;
    s= pi*4*r*r;
    cout<<s<<endl;
    #undef pi
    #define pi 3.14159
    cout<<"enter radius"<<endl;
    cin>>r;
    v=(4.0*pi*r*r*r)/3.0;
    cout<<"volume"<<v<<endl;
    system("pause");
    return 0;
}
