#include<iostream>
using namespace std;
class Volume
{
    private:
        int litre;
        float mil;
    public:
        Volume():litre(0), mil(0.0)
        {}
        Volume(int l, float ml):litre(l),mil(ml)
        {}
        void getvol()
        {
            cout<<"Enter litres\t"; cin>>litre;
            cout<<"\nEnter mL\t"; cin>>mil;
            if(mil>=1000)
            {
                litre+=1;
                mil-=1000;
            }
        }
    void display()
    {
        mil=mil/1000;
        cout<<"Volume is\t"<<litre+mil<<endl;

    }
    Volume operator +(Volume V)
    {
        litre=litre+V.litre;
        mil=mil+V.mil;
        if(mil>=1000)
            {
                litre+=1;
                mil-=1000;
            }
    }
};
////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Volume V1,  V3;
    Volume V2(125, 300);
    V1.getvol();

    V1.display();
    V2.display();
    V3= V1+V2;
    V3.display();
    return 0;
}
