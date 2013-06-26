#include<iostream>
using namespace std;
int main()
{
    for(int j=1; j<=7; j++)
    {
            if(j==1)
            {
                       cout<<"**** ****     **  ****  **";
                       }
            if(j==4)
            {
                    cout<<"**** *             *  *    *  *";
                    }
            if(j==7)
            {
                    cout<<"**** ****        *** **** ***";
                    }
            else
            {
                cout<<"*    *               *  *    *  *";
                }
                cout<<endl;
                }
                system("pause");
                return 0;
                }
