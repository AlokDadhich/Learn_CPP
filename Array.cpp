#include "Learn_CPP.h"

// Function to initialize topics
std::unordered_map<std::string, Topic> initializeTopics() {
    std::unordered_map<std::string, Topic> topics;

    // Adding Array Topic
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

    return topics;
}
