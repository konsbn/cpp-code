#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet; float inches;
    public:
    void get()
    {
        cout<<"\nEnter Feet"; cin>>feet;
        cout<<"\nEnter Inches"; cin>>inches;
    }
    void show()
    {
        cout<<feet<<"-"<<inches<<endl;
    }
};

int main()
{
    Distance dist;
    dist.get();
    dist.show();
    Distance* distptr;
    distptr= new Distance;
    distptr->get();
    distptr->show();
    delete[] distptr;
    return 0;
}
