#include<iostream>
using namespace std;
int fibo(int);
int main()
{
    int t;
    int n=0,l=1;
    int s=0;
    cout<<"Input number of terms"<<endl;
    cin>>t;
    cout<<"1"<<endl;
    for(int i=1; i<=t; i++)
    {
            
             s=n+l;
            cout<<s<<endl;
           
            n=l;
            l=s;
           
            
            
            }
    system("pause");
    return 0;
}

