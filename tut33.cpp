#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100; // typecasting
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal Amount was " << principal << " and Return Value after " << years << " years is " << returnValue << endl;
}

int main()
{

    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    // bd3.show();

    cout << "Enter the value of p " << endl;
    cin >> p;

    cout << "Enter the value of y " << endl;
    cin >> y;

    cout << "Enter the value of r " << endl;
    cin >> r;

    bd1 = BankDeposit(p, y, r);
    // BankDeposit bd1 = BankDeposit(p, y, r);
    
    bd1.show();
    
    cout << endl;

    cout << "Enter the value of p " << endl;
    cin >> p;

    cout << "Enter the value of y " << endl;
    cin >> y;

    cout << "Enter the value of R " << endl;
    cin >> R;

    bd2 = BankDeposit(p, y, r);
    // BankDeposit bd2 = BankDeposit(p, y, r);
    
    bd2.show();


    return 0;
}