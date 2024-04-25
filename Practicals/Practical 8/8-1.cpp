#include <iostream>
using namespace std;
class distances
{
    float feet;
    float inches;

public:
    void setdata(int a, int b)
    {
        feet = a;
        inches = b;
    }
    void display()
    {
        cout << "Distance: " << endl
             << "feet:" << feet << endl
             << "inches:" << inches << endl;
    }
    void add(distances x, distances y)
    {
        inches = x.inches + y.inches;
        feet = x.feet + y.feet;
        if (inches >= 12)
        {
            inches = inches - 12;
            feet = feet + 1;
        }
    }
};
int main()
{
    distances d1, d2, d3;
    d1.setdata(9, 7);
    d1.display();
    d2.setdata(6, 7);
    d2.display();
    d3.add(d2, d1);
    d3.display();
}