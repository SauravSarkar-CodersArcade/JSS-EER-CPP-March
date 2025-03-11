#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    int Age;
    string Company;

    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
int main() {
    // Objects - Instances
    Employee e1;
    e1.Name = "Supraj";
    e1.Age = 21;
    e1.Company = "Accenture";
    e1.employeeDetails();
    return 0;
}
