#include <iostream>
using namespace std;

class Complex
{
  int a, b;

public:
  void setNumber(int n1, int n2)
  {
    a = n1;
    b = n2;
  }
  friend Complex sumComplex(Complex o1, Complex o2); // This line means that non-member sumComplex number is allowed to do anything with my private members.
  void printNumber()
  {
    cout << "Your number is " << a << " + " << b << "i" << endl;
  }
};

Complex sumComplex(Complex o1, Complex o2)
{
  Complex o3;
  o3.setNumber((o1.a + o2.b), (o1.b + o2.b));
  return o3;
}

int main()
{
  Complex c1, c2, sum;
  c1.setNumber(1, 4);
  c1.printNumber();
  c2.setNumber(5, 8);
  c2.printNumber();

  /*  c1.sumComplex();
      c2.sumComplex();*/
  //==> these functions will not work as sumComplex is only a declaration not a function.

  sum = sumComplex(c1, c2);
  sum.printNumber();

  return 0;
}

/*Properties of Friend Function
    1. It is not a part of scope of the class
    2. Since it is not in the scope of teh class it acnnot be called from the object of that class.
        for ex:- c1.sumComplex() is invalid
    3. It can be invoked without the help of any object
    4. Usually contains the object as arguments
    5. It can be declared inside public and private section of the class
    6. It can't access the members directly by theire name, it need the object_name.member_name to access any member


*/