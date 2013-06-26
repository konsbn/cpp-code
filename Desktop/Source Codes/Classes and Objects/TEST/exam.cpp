#include<iostream>
using namespace std;
class Date
{
    private:
    int day;
    int month;
    int year;
    public:
    Date():day(01), month(01), year(2001)
    {}
    Date(int d, int m, int y):day(d), month(m), year(y)
    {}
    void get()
    {
        int temp;

        cout<<"Enter year"; cin>>year;

        cout<<"enter month"; cin>>temp;
        if(temp<=12&&temp>=1)
        {
                month=temp;

        }
        else {cout<<"Invalid month"<<endl;

            }


            cout<<"Enter day";cin>>temp;
            if(temp>=1&&temp<=31)
            {
                day=temp;

            }
            else
            {
                cout<<"invalid input";

            }


}
    void display()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main()
{
    Date D1;
    D1.get();
    D1.display();
    return 0;
}
