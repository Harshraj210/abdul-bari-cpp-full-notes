#include <iostream>
// WAP TO CALCULATE   TOTAL SALARY AFTER ALLOWED AND DEDUCTED EXPENSES.
using namespace std;
int main()
{
    float salary;
    float percentallow;
    float percentdeduct;
    float netsalary;
    cout << "Enter the basic salary :";
    cin >> salary;
    cout << "Enter the percentage allowed :";
    cin >> percentallow;
    cout << "Enter the deducted salary :";
    cin >> percentdeduct;
    netsalary = salary + salary * percentallow / 100 - salary * percentdeduct / 100;
    cout << "The net salary is :" << netsalary << endl;
    return 0;
}