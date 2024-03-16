#include <iostream>
#include <string>
using namespace std;

// Define the Person class
class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Method to display person's information
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create objects of Person class
    Person person1("Alisha", 19);
    Person person2("Tabbu", 25);

    // Display information of the persons
    cout << "Person 1: ";
    person1.display();
    cout << "Person 2: ";
    person2.display();

    return 0;
}
