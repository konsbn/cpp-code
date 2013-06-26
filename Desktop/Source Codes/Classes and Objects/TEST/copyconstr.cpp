#include<iostream>
using namespace std;
class Someclass
{
    private:
    int v1; int v2;
    public:
    Someclass():v1(0), v2(0)
    {}
    Someclass(int a, int b):v1(a), v2(b)
    {}
    void get()
    {
        cin>>v1;
        cin>>v2;
    }
    void show()
    {
        cout<<v1<<endl;
        cout<<v2<<endl;
    }
};
int main()
{
    Someclass c1(4,5);
    Someclass c2(c1);
    c1.show();
    c2.show();

    return 0;
}
