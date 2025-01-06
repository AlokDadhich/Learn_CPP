#include "Learn_CPP.h"

std::unordered_map<std::string, Topic> getFunctionTopics() {
    std::unordered_map<std::string, Topic> topics;

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

    return topics;
}
