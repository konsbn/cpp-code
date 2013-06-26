//perfect number.cpp
#include<iostream>
using namespace std;
int main()
{
    int n;
    int s=0;
   cout<<"enter a number"<<endl;
   cin>>n;

   for(int i=1; i<n;i++)
   {
           if(n%i==0)
           s=s+i;
           }
   if(s==n)
   cout<<n<<"is a perfect number"<<endl;
   else 
   cout<<n<<"is not a perfect number"<<endl;
   system("pause");
   return 0;
}   
