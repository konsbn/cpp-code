#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    ofstream recursion;//object declaration
    float a,b;
    float x;
    float f;
    float ctrl;
    int l=0;//loop counter
    int n; 
    cout<<"Enter the logistic variable"<<endl;
    cin>>x;
    cout<<"Enter the number of iterations"<<endl;
    cin>>n;
    cout<<"enter control Variable"<<endl;
    cin>>ctrl;
      recursion.open("recursive data sets.txt");
      recursion<<"Logistic variable\t"<<x<<endl;
      recursion<<"Control Variable\t"<<ctrl<<endl;
      recursion<<"Number of Iterations\t"<<n<<endl;
      cout<<endl;
    while(l<=n){
        f=ctrl*x*(1-x);
        cout<<setw(10)<<x<<setw(10)<<f<<endl;
        
           recursion<<x<<setw(10)<<f<<endl;
            
        
        x=f;
        l=l+1;
    }
     recursion.close(); 
    system("pause");
    return 0;
}       
       
