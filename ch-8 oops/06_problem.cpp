#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int marks1;
    int marks2;
    int marks3;

public:
    Student(int r, string n, int m1, int m2, int m3)
    {
        roll = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    int Total()
    {
        return marks1 + marks2 + marks3;
    }
    string grade()
    {
        float average = Total() / 3;
        if (average > 80)
        {
            return "Grade A";
        }
        else if (average > 60 && average <= 80)
        {
            return "Grade B";
        }
        else
        {
            return "Grade C";
        }
    }
};
int main()
{
    int roll;
    string name;
    int m1, m2, m3;
    cout << "Enter the roll :";
    cin >> roll;
    cout << "Enter the name :";
    cin >> name;
    cout << "Enter the marks of 3 subjects : ";
    cin >> m1 >> m2 >> m3;
    Student s(roll, name, m1, m2, m3);
    cout << "Your total score is :" << s.Total() << endl;
    cout << "Your grade is :" << s.grade() << endl;
    return 0;
}
