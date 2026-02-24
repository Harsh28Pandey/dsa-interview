//? structure employee with salary and id, create a function and pointer to increase the salary by 10%

#include<iostream>
using namespace std;

struct employee {
    int salary;
    int id;
};

void updateSalary(employee *e,int percentage) {
    e->salary += e->salary * percentage / 100;
}

int main() {
    employee e;
    int percentage;
    cout << "Enter the employee id: ";
    cin >> e.id;
    cout << "Enter the employee salary: ";
    cin >> e.salary;
    cout << "Enter the salary increased percentage: ";
    cin >> percentage;
    updateSalary(&e,percentage);
    cout << "Salary should be increased by " << percentage << "%: " << e.salary << endl;
}