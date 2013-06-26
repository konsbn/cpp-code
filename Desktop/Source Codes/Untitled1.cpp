#include<iostream>
using namespace std;
int main()
{
    int a[10]={10,30,40,50,70,64,43,34,56,89};
    int b[9]={10,50,40,78,89,23,37,57,67};
    int a1[10];
    int b1[10];
    for(int i=0; i<10; i++)
    {
            a1[i]=a[i];
            if(i<9)
            {
                    b1[i]=b[i];
                    }
            else if(i=9)
            {
             b1[i]=0;
             }
             }
    for(int l=0; l<10; l++)
    {
            for(int k=0; k<9;k++)
            {
            if(a1[l]!=b[k])
           cout<<b[k]<<endl;
            }
             
}
    
system("pause");
return 0;
}
