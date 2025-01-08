#include "Learn_CPP.h"

// Function to initialize classes and objects topics
std::unordered_map<std::string, Topic> getClassTopics() {
    std::unordered_map<std::string, Topic> topics;

    topics["Classes and Objects"] = {
        "Classes and objects are the foundation of Object-Oriented Programming (OOP). A class is a blueprint for creating objects, which are instances of the class.",
        R"(Syntax:
class ClassName {
public:
    // Members (variables and functions)
    int memberVariable;

    void memberFunction() {
        // Function body
    }
};

Example:
class Car {
public:
    string brand;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};)",
        R"(Example Code:
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Tesla";
    car1.year = 2023;

    car1.displayInfo();

    return 0;
})"
    };

    return topics;
}
