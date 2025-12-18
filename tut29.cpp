#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Costructor is a special member function with same name as the class & it is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created
    Complex(void); // Constructor Declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i" << endl;
    }
};

//Default Constructor -> A constructor which do not accept any parameters
Complex ::Complex(void) //Constructor's Return type is not necessary
{ // Constructor Definition
    a = 10;
    b = 20;
    // cout<<"Hello World"<<endl;
}

int main()
{
    // Complex c;
    // c.printNumber();

    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

/*

Characteristics of a constructor

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created. 
3. They cannot return values & also they don't have return types
4. It can have default arguments
5. We cannot refer to the address

*/