#include "Learn_CPP.h"

std::unordered_map<std::string, Topic> getPointerTopics() {
    std::unordered_map<std::string, Topic> topics;

    topics["Pointers"] = {
        "Pointers",
        R"(Pointers are variables that store the memory address of another variable. 
They are used for dynamic memory allocation, arrays, and function arguments.)",
        R"(Syntax:
type* pointer_name;
Example:
int* ptr;)",
        R"(Example Code:
#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int* ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << ptr << endl;
    cout << "Value at the address: " << *ptr << endl;

    return 0;
})"
    };

    return topics;
}
