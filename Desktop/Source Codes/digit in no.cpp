#include<iostream>
using namespace std;
int main()
{
    string n,d;
    int i;
    cout<<"enter a no.";
    cin>>n;
    cout<<"enter a digit"<<endl;
    cin>>d;
    for(i=0;i<n.length();i++)
    {
    if(d==n.substr(i,1)) break;
 
   
    
   
    
    } 

      cout<<"the digit is present at"<<i<<"position from msb"<<endl;
    system("pause");
    return 0;
}
