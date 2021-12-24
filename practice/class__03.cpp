#include <iostream>
using namespace std;

class employee
{
    char id[20];
    char companyname[20];
    char designation[20];
    int salary;
    int annual;

public:

    void getdata();
    void display();
};

void employee :: getdata()
{
    cout << "Enter Employee Id" << endl;
    cin >> id;

    cout << "Enter Company's Name" << endl;
    cin >> companyname;

    cout << "Enter Designation" << endl;
    cin >> designation;

    cout << "Enter Salary" << endl;
    cin >> salary;

}

void employee :: display()
{
    annual = 12*salary;

    cout << "The Employee's name is: " << id << endl;
    cout << "The Employee's Company is: " << companyname << endl;
    cout << "The Employee's Designation is: " << designation << endl;
    cout << "The Employee's gross income is: " << annual << endl;

}

int main()
{
    employee i;

    i.getdata();
    i.display();

    return 0;
}