#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
    static void printCompany(){ // Global Access
        cout << "JSS" << endl;
    }
    ~Employee(){
     cout << "Object destroyed..!!" << endl;
    }
};
int main() {
    // Objects - Instances
    Employee e1("Supraj", 21, "Accenture");
    e1.employeeDetails();

    Employee e2 = Employee("Vishnu", 21, "TCS");
    e2.employeeDetails();
    Employee::printCompany();

    return 0;
}
