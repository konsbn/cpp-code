#include<iostream>
using namespace std;
void password(char );
int main()
{
    char str[3];
    cin>>str;
    password(str);
    system("pause");
    return 0;
}
void password(char test[3])
{
    
      
     if(test[3]=="abc")
     cout<<"Access Granted"<<endl;
     else
     cout<<"Access Denied"<<endl;
     }
