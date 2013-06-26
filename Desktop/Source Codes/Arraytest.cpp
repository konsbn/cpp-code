#include<iostream>
using namespace std;
int times2(int*, int);
int disp(int*, int);
int main()
{
    const int Max=5;
    int Arr[Max]={1,2,3,4,5};
    times2(Arr, Max);
    disp(Arr, Max);
    system("pause");
    return 0;
}
int times2(int* A, int m)
{
    for(int i=0; i<m; i++)
    {
            *A*=2;
            A++;
            cout<<A<<endl;
            }
            }
int disp(int* N, int l)
{
    for(int k=0; k<l; k++)
    {
            cout<<*N<<endl;
            N++;
            }
            }
    
    
    
