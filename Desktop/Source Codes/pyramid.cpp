#include<iostream>
using namespace std;
int main()
{
    cout<<endl;
    cout<<endl;
    for(int j=1;j<=4;j++)
    {
            for(int k=1; k<=4-j;k++)
            {
                    cout<<" ";
            }
            for(int i=1; i<=2*j-1; i++)
            {
                    cout<<"*";
            }
            cout<<endl;
    }
    system("pause");
    return 0;
}
            
