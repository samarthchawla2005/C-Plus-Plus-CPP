#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    // Default Constructor
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // Note:- The compiler itself allocate a default copy constructor to each class whenever no copy constructor is found.

    // Copy Constructor -> A constructor which forms copy of the other object
    Number(Number &obj)
    { // It takes reference to the Number's object.
        cout << "Copy Constructor called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number of this object " << a << endl;
    }
};

// Number :: Number

int main()
{

    // Number x, y, z(45);
    Number x, y, z(45), z2;

    x.display();
    y.display();
    z.display();
    // z1 should exactly resemble z or x or y
    Number z1(x); // Copy Constructor invoked
    z1.display();

    // Number z2 = z; //Copy Constructor will be invoked

    z2 = z; // Copy Cosntructor will not be called
    z2.display();

    Number z3 = z;
    z3.display();

    return 0;
}