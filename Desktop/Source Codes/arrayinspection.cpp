#include<iostream>
using namespace std;
int main()
{
    int a[10];
    for(int l=0; l<10; l++)
    {
            cout<<"enter a number"<<endl;
            cin>>a[l];
            }
    for(int i=0; i<10; i++)
    {
            for(int j=0; j<10; j++)
            {
                    if(a[i]==(6*a[j]+3))
                    cout<<a[i]<<"\t"<<a[j]<<endl;
                    }
                    }
    system("pause");
    return 0;
}
