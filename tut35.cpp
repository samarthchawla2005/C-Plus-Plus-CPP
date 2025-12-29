#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it returns any argument

//Note :- When object is created the constructor is called but when compiler do not requires object anymore then it will call destructor

int count = 0; // global variable

// class declaration
class num
{
public:
    // Constructor Creation
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    // Destructor Creation
    ~num()
    {
        cout << "This is the time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{

    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    // Object Creation
    num n1;
    //Block Opens - Things inside block created
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    //Block Closed - Things inside block destroyed - Destructor called

    cout << "Back to Main" << endl;
    //Destructor for n1 is called

    return 0;
}