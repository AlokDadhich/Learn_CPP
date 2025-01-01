#include "Learn_CPP.h"
#include <iostream>
#include <unordered_map>

// Function to initialize topics
std::unordered_map<std::string, TopicInfo> initializeTopics() {
    std::unordered_map<std::string, TopicInfo> topics;

    // Array topic initialization
    TopicInfo arrayInfo;
    arrayInfo.theory = "An array is a collection of items stored at contiguous memory locations. "
                       "It allows storing multiple items of the same type using a single identifier.";
    arrayInfo.syntax = "int arr[5] = {1, 2, 3, 4, 5}; // Declaration and initialization of an array";
    arrayInfo.exampleCode = "#include <iostream>\n"
                            "int main() {\n"
                            "    int arr[5] = {1, 2, 3, 4, 5};\n"
                            "    std::cout << \"Array elements: \";\n"
                            "    for (int i = 0; i < 5; i++) {\n"
                            "        std::cout << arr[i] << \" \";\n"
                            "    }\n"
                            "    std::cout << std::endl;\n"
                            "    return 0;\n"
                            "}";
    topics["Array"] = arrayInfo;

    return topics;
}

// Function to display the list of topics
void displayTopics() {
    std::cout << "Available Topics:\n";
    std::cout << "1. Array\n";
    std::cout << "Enter the topic name to learn more: ";
}

// Function to show details of a topic
void showTopicDetails(const std::string& topic) {
    std::unordered_map<std::string, TopicInfo> topics = initializeTopics();
    if (topics.find(topic) != topics.end()) {
        const TopicInfo& info = topics[topic];
        std::cout << "\nTheory:\n" << info.theory << "\n";
        std::cout << "\nSyntax:\n" << info.syntax << "\n";
        std::cout << "\nExample Code:\n" << info.exampleCode << "\n";
    } else {
        std::cout << "Topic not found. Please choose a valid topic.\n";
    }
}
