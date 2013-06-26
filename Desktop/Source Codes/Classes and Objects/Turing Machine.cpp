#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////
void initialize(int* inarr, int arrsize)//initializes input tape to read zero everywhere
{
     for(int i=0; i<arrsize; i++)
     {
             *inarr=0;
             inarr++;
             }
             };

///////////////////////////////////////////////////////////////////////////////////////////////////
void input(int* ,int, int);
//////////////////////////////////////////////////////////////////////////////////////////////
void add(int* ,int, int);
////////////////////////////////////////////////////////////////////////////////
void input2(int*, int, int);
////////////////////////////////////////////////////////////////////////////////
//void display(int*, int);
int main()
{
    int MAX;
    int number2;
    cout<<"Enter length of tape\t"; cin>>MAX;
    int TAPE[MAX];
    int number1;
    initialize(TAPE, MAX);
       for(int l=0; l<MAX; l++)
    {
            cout<<TAPE[l]<<" ";
            }
    cout<<"\nEnter First Number\t"; cin>>number1;
   input(TAPE, number1, MAX);
      for(int l=0; l<MAX; l++)
    {
            cout<<TAPE[l]<<" ";
            }
    cout<<"\nEnter second Number\t"; cin>>number2;
   input2(TAPE, number2, MAX);
    for(int l=0; l<MAX; l++)
    {
            cout<<TAPE[l]<<" ";
            }

    return 0;
}

void input(int* inarr, int indata, int arrsize)//Inputs the number in unary forn inside the array
{
     for(int l=0; l<arrsize; l++)
     {
             if(l<indata)
             {
                         *inarr=1;
                         inarr++;}
             else if(l>indata)
             {
                  *inarr=0;
                   inarr++;
                   }
                   }}
/////////////////////////////////////////
void input2(int* inarr, int indata2, int arrsize)
{
    while(*inarr==1)
    {
        int j=0;
        inarr++;
        j++;
    }
    for(int k=0; k<arrsize; k++)
    {
        if(k<indata2)
        {
            *inarr=1;
            inarr++;
        }
        else if(k>indata2)
        {
            *inarr=0;
            inarr++;
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////////
//void display(int*inarr, int )
