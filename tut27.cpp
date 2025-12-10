#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
/*
    //Individually declaring functions as freinds
    friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    friend int Calculator ::sumCompComplex(Complex o1, Complex o2);
*/

/**/
    //Aliter: Declaring the entire calculator class as friend
    friend class Calculator;



public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    //res means result of real part & resc means result of complex part
    int res = calc.sumRealComplex(o1, o2);
    cout << "This Sum of Real part of o1 and o2 is: " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "This Sum of complex part of o1 and o2 is: " << resc << endl;
    return 0;
}