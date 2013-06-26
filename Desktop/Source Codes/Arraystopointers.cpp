//PASSING ARRAYS
#include<iostream>
using namespace std;
int main()
{
    void twice(int*);
    const int M=5;
    int arr[M]={1,2,3,4,5};
    twice(arr);
    for(int i=0; i<5; i++)
    {
            cout<<arr[i];
            }
            system("pause");
            return 0;
            }
void twice(int*ptr)
{
    
     for(int j=0; j<5; j++)
     *ptr++ *=2;
     }
