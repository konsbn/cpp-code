#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    double a;

    ifstream input;
    input.open("input_nos.txt");
     ofstream output;
    output.open("op.txt");
    for(int i=0; i<=19; i++)
    {
            input>>a;
            a*=43.938;
           output<<a<<endl;
                 }
    input.close();


            output.close();

            return 0;
}
