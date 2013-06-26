#include<iostream>
using namespace std;
int main()
{
    int Arr[5]={1, 2, 3, 4, 5};
    int* p= Arr;
    int* element;
    for(int i=0; i<5; i++)
    {
            *element=*(Arr+i);
            cout<<*element<<endl;
            }
    system("pause");
    return 0;
}
