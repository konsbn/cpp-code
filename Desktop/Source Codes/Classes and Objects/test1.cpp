#include<iostream>
using namespace std;
 void convert(int number, int* A)
    {
                 
         if(*A==0)
         {
         for(int l=0; l<10; l++)
         {
                 if(l<=number)
                 {
                              *A=1;
                              A++;
                              }
                 if(l>number)
                 {
                 *A=0;
                 A++;
                 }
                 }
                 }
         else if(*A==1)
                  { 
                      for(int i=0; i<10; i++){ 
                      if(*A=1)
                       A++;
                  
                      for( int s=i;s<10; s++)
                      {
                                for(int t=0; t<number; t++)
                                {
                                        *A=1;
                                        }}};
int main()
{
    int INPUT[10]={0,0,0,0,0,0,0,0,0,0};
    char inst;
    char oper;
    int number1, number2;
   
                            
    int main()
    {
        int n1;
        int n2;
        int In[10]={0,0,0,0,0,0,0,0,0,0};
        cin>>n1;
        cin>>n2;
        convert(n1, In);
        convert(n2, In);
        for(int l=0; l<10; l++)
        cout<<In[l]<<endl;
        system("pause");
        return 0;
        }
