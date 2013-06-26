//exchange sort
#include<iostream>
using namespace std;
void exsort(int*, int);

int main()
{
    int arrel;
    int MAX; cin>>MAX;
    int ARR[MAX];
    for(int i=0; i<MAX; i++)
    {
            cin>>arrel;
            ARR[i]=arrel;
            }
    exsort( ARR, MAX);
    for(int l=0; l<MAX; l++)
    {
            cout<<ARR[l]<<endl;
            
}
    
    system("pause");
    return 0;
}

void exsort(int* INARR, int size)
{
    void order(int*, int*);
     int* element;
     for(int i=0; i<size; i++)
     {
             *element=*(INARR+i);
             for(int l=1; l<(size); l++)
             {
                     
                             if(*element>*(INARR+l))
                             {
                                                    order(element, (INARR+l));
                                                    }
             }
     }
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

                     

    
