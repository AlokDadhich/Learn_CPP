#include "Learn_CPP.h"

std::unordered_map<std::string, Topic> getArrayTopics() {
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

    return topics;
}
