#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream num;
    int a,b,c;
    num.open("n101.txt");
    for(int i=1; i<=101; i++)
    {
            a=i*i;
            for(int l=1; l<=101; l++)
            {
                    b=l*l;
                    for(int m=1; m<=101; m++)
                    {
                            c=m*m;
                            if(101==a+b+c)
                    {
                                          cout<<i<<"\t"<<l<<"\t"<<m<<endl;
                                          num<<i<<"\t"<<l<<"\t"<<m<<endl;
                                          }
                                          }
                                          }
                                          }
    system("pause");
    return 0;
}
                            
