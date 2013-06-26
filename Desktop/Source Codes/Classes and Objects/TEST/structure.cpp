#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Room
{
    Distance length;
    Distance width;
};
////////////////////////////////////////
int main()
{
 Room dining;
 dining.length.feet=13;
 dining.length.inches=6.2;
 dining.width.feet=8;
 dining.width.inches=3.2;

 float l= dining.length.feet + dining.length.inches/12 ;
 float w= dining.width.feet + dining.width.inches/12;
 cout<<"Dining room area= "<<l*w<<" square feet";
 return 0;
}
