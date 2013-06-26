// Passing Array to a function Example 03
#include<iostream>
using namespace std;
bool isPresent(int k ,int A[],int s);
int main () 
{
  int const sizex=11;
  int const sizey=9;
  int x[sizex]={15,5,25,7,-19,31,17,18,32,21,11};
  int y[sizey]={15,25,7,-9,32,2,5,27,8};
  for (int j=0;j<sizex;j++)
  if (!isPresent(x[j],y,sizey))
  cout<<x[j]<<" ";
  system("pause");
  return 0;
}
bool isPresent(int k ,int A[],int s)
{
     bool flag=false;
     for (int i=0;i<s;i++)
     if (A[i]==k)
     flag=true;
     return flag;
     }
     
/*
Q.1 Write a Boolean fuction isPresent that takes three 
parameters--(i) an integer k,(ii) an integer array A,
and an integer s indicating the size of A.The function
 determines whether k is present in A or not.Use this 
 function to write a program that prints all those
elements of an array X that are not present in another
 array Y.
*/

