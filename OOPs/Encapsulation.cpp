#include <iostream>
using namespace std;
class Employee {
private:
    string Name;
    int Age;
    string Company;
public:
    // Setters -> Set the attributes
    void setName(string name){
        Name = name;
    }
    void setAge(int age){
        Age = age;
    }
    void setCompany(string company){
        Company = company;
    }
    // Getters -> Get/retrieve the attributes
    string getName(){
        return Name;
    }
    int getAge(){
        return Age;
    }
    string  getCompany(){
        return Company;
    }
};
int main() {
    Employee e1;
    // Use of setters
    e1.setName("Supraj");
    e1.setAge(21);
    e1.setCompany("Accenture");
    // Use of getters
    cout << "Name: " << e1.getName() << endl;
    cout << "Age: " << e1.getAge() << endl;
    cout << "Company: " << e1.getCompany() << endl;
    return 0;
}
