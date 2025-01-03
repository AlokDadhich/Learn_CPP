#include "Learn_CPP.h"

std::unordered_map<std::string, Topic> initializeTopics() {
    std::unordered_map<std::string, Topic> topics;

    topics["Array"] = {
        "Array",
        R"(An array is a collection of items stored at contiguous memory locations. 
It can store multiple values of the same type in a single variable, instead of declaring separate variables for each value.)",
        R"(Syntax:
int arr[size];
Example:
int arr[5] = {1, 2, 3, 4, 5};)",
        R"(Example Code:
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
})"
    };

    topics["Functions"] = {
        "Functions",
        R"(Functions are blocks of code that perform a specific task. They allow for modularity and code reuse.
A function typically includes a name, return type, parameters (optional), and a body.)",
        R"(Syntax:
return_type function_name(parameters) {
    // body of the function
}
Example:
int add(int a, int b) {
    return a + b;
})",
        R"(Example Code:
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    cout << "Sum: " << add(3, 4) << endl;
    return 0;
})"
    };

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
