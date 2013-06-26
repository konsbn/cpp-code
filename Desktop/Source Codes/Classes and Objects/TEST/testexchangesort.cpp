#include<iostream>
using namespace std;
int main()
{
    int ARR[5]=(1,2,3,4,5);
    int* ptr;
    exsort(ARR, 5);
    return 0;
}
void exsort(int* a, int s)
{
    void order(int*, int*);
    int* el=a;
    for(int i=0; i<(s-1); i++)
    {
        for(int l=(i+1); l<s; l++ )
        {
            if(*el>*(a+l))
            {
                order(a, (a+l));
            }
        }
    }
}

void order(int* a, int* b)
{
    int temp;

}
