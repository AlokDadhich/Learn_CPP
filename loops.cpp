#include "Learn_CPP.h"

// Function to initialize loop topics
std::unordered_map<std::string, Topic> getLoopTopics() {
    std::unordered_map<std::string, Topic> topics;

    topics["Loops"] = {
        "Loops are used to execute a block of code repeatedly, either a fixed number of times or until a condition is met. Common types of loops are for, while, and do-while loops.",
        R"(Syntax:
1. For loop:
for (initialization; condition; increment/decrement) {
    // Code to be executed
}

2. While loop:
while (condition) {
    // Code to be executed
}

3. Do-While loop:
do {
    // Code to be executed
} while (condition);)",
        R"(Example Code:
#include <iostream>
using namespace std;

int main() {
    // For loop
    for (int i = 0; i < 5; i++) {
        cout << "For Loop Iteration: " << i << endl;
    }

    // While loop
    int x = 0;
    while (x < 3) {
        cout << "While Loop Iteration: " << x << endl;
        x++;
    }

    // Do-While loop
    int y = 0;
    do {
        cout << "Do-While Loop Iteration: " << y << endl;
        y++;
    } while (y < 2);

    return 0;
})"
    };

    return topics;
}
