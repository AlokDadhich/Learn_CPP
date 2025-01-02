#include "Learn_CPP.h"

// Function to initialize topics
std::unordered_map<std::string, Topic> initializeTopics() {
    std::unordered_map<std::string, Topic> topics;

    // Adding Function Topic
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

    return topics;
}
