#include<iostream>
using namespace std;
int main()
{
    void cent(double*);
    double var =10.0;
    cent(&var);
    cout<<"inches"<<var;
        system("pause");
        return 0;
        }
    void cent(double *v)
    {
         *v *=2.54;
        
         }
