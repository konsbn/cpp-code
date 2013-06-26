#include<iostream>
using namespace std;
void bubsort(int*, int);
int main()
{
     int m;
     cin>>m;
    int arr[m];
    int in;
    int *ptr;
    ptr=arr;
    for(int i=0; i<m; i++)
    {
            cin>>in;
            *ptr=in;
            *ptr++;
            }
            bubsort(arr, m);
            for(int d=0; d<m; d++)
            cout<<arr[d]<<endl;
            
          
            system("pause");
            return 0;
            }
void bubsort(int *pt, int n)
{
            void order(int*, int*);
            int j,k;
            for(j=0; j<n-1; j++)
                     for(k=j+1; k<n; k++)
                     order(pt+j, pt+k);
                     }
void order(int*n1, int*n2)
{
     int temp;
     if(*n1>*n2)
     {
                temp=*n1;
                *n1=*n2;
                *n2= temp;
               }
}
