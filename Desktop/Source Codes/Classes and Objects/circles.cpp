#include<iostream>
using namespace std;
class Circle
{
	private:
		double pi=3.14;
		float radius;
		float area;
	public:
		Circle():radius(0.0), area(0.0)
		{}
		Circle(float r, float a):radius(r), area(a)
		{}
		void get()
		{
			cin>>radius;
		}
		void AREA()
		{
			area= pi*radius*radius;
			
		}
		void show()
		{
		cout<<area;
		}
};
int main()
{
	Circle c1.
	c1.get();
	c1.AREA();
	c1.show();
	return 0;
}

