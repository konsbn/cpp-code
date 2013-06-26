//pi.cpp
#include<iostream>
using namespace std;
int main()
{
    long n;
    double p=0.0;
    int l=-1;
  
    cout<<"this program approximates the value of pi using an infinite series enter the numeber of terms to be considered"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
            l=-1*l;
            p=p+((4.0*l)/(2.0*i+1.0));
            }
    cout<<"the value of pi is "<<p<<endl;
    system("pause");
    return 0;
} 
