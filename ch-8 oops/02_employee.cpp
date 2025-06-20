#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    int salary;
    int expenditure;
    string name;
    int savings()
    {
        return salary - expenditure;
    }
};
int main(int salary, int expenditure, string name)
{
    Employee e1;
    cout << "Enter the name :";
    cin >> e1.name;
    cout << "Enter the salary: ";
    cin >> e1.salary;
    cout << "Enter the expenditure : ";
    cin >> e1.expenditure;
    cout << "Savings of " << e1.name << "  is :" << e1.savings() << endl;
    return 0;
}