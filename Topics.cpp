#include "Learn_CPP.h"

// Function to initialize topics
std::unordered_map<std::string, Topic> initializeTopics() {
    std::unordered_map<std::string, Topic> topics;

    // Array Topic
    topics["Array"] = {
        "An array is a collection of elements of the same type stored in contiguous memory locations. Arrays allow random access using indices.",
        R"(Syntax:
dataType arrayName[arraySize];
Example:
int arr[5] = {1, 2, 3, 4, 5};)",
        R"(Example Code:
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }
    return 0;
})"
    };

    // Function Topic
    topics["Functions"] = {
        "Functions are blocks of code designed to perform a specific task. They help in modular programming, making code reusable and easier to understand.",
        R"(Syntax:
returnType functionName(parameters) {
    // Function body
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
    int x = 5, y = 10;
    cout << "Sum: " << add(x, y) << endl;
    return 0;
})"
    };

    // Pointer Topic
    topics["Pointers"] = {
        "Pointers are variables that store the memory address of another variable. They are used for dynamic memory allocation, arrays, and function arguments.",
        R"(Syntax:
dataType* pointerName;
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
