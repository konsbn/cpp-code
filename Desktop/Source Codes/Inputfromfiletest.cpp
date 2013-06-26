#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    float a;
    int l=0;
    int spc=0;
    int k=0;
   
    float sp=0,sn=0;
    ifstream input;
    input.open("input_nos.txt");
     const int max=80;
    char x[max];

    while(!input.eof())
    {
    input.getline(x, max);
    }
    char d;
    for(int c=0; c<= x.length(); c++)
            {
                 d=x.substr(s,1);
                 if(d==" ")
                 {
                         spc=spc+1;
                         }
                         }
                  int lpc=spc+1;
    for(int i=0; i<=lpc; i++)
    {
            input>>a;
            if(a>0)
            {
                    l=l+1;
                    sp=sp+a;
                    }
            else if(a<0)
            {
                 k=k+1;
                 sn=sn+a;
                 }
                 }
    input.close();
            ofstream output;
            output.open("op.txt");
            output<<"positive numbers"<<l<<endl;
            output<<"negative numbers"<<k<<endl;
            output<<"sum of positive numbers"<<sp<<endl;
            output<<"sum of negative numbers"<<sn<<endl;
            output.close();
            system("pause");
            return 0;
}
