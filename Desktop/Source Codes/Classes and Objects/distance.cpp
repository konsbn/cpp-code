#include<iostream>
using namespace std;
class Distance
{
      private:
              int feet;
              float inches;
      public:
             Distance():feet(0), inches(0.0)
             {}
             Distance(int ft, float in):feet(ft), inches(in)
             {}
             void get()
             {
                  cout<<"Enter Feet  "; cin>>feet;
                  cout<<"\n Enter inches  "; cin>>inches;
                  if(inches>=12)
                  {
                                feet+=1;
                                inches-=12;
                  }
                  }
             void disp()
             {
                  cout<<feet<<"Feet and  "<<inches<<" Inches"<<endl;
                  }
      Distance add(Distance d2)
      {
               Distance temp;
               temp.inches= inches+ d2.inches;
               if(temp.inches>=12)
               {
                                  temp.feet+=1;
                                  temp.inches-=12;
                                  }
               temp.feet= temp.feet+feet+  d2.feet;
               return temp;
               }
  };
int main()
{
    Distance dt1,dt3;
    Distance dt2(12, 5.0);
    dt1.get();
  
    dt1.disp();
    dt3=dt1.add(dt2);
 
    dt3.disp();
    
    system("pause");
    return 0;
}      
