#include<iostream>
using namespace std;
class Counter
{
      private:
              unsigned int count;
      public:
             Counter(): count(0)
             {}
             unsigned int get()
             {return count;}
             void operator ++()
             {
                  ++count;
                  }
};
int main()
{
    Counter c1, c2;
    cout<<c1.get()<<endl;
    cout<<c2.get()<<endl;
    ++c1;
    ++c2;
    ++c1;
    ++c1;
    cout<<c1.get()<<endl;
    cout<<c2.get()<<endl;
    system("pause");
    return 0;
}
