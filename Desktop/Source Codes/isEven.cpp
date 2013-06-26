#include<iostream>
using namespace std;
bool iseven(int);
int main()
{
    int a;
   cout<<"enter a number"<<endl;
   cin>>a; 
   if(iseven(a))
   cout<<"even"<<endl;
   else
   cout<<"odd"<<endl;
   cin.ignore();
   cin.get();
   return 0;
}
bool iseven(int n)
{
     bool t=false;
     if(n%2==0)
     t=true;
  
     return t;
}
     
