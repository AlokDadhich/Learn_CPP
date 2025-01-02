#include "Learn_CPP.h"
#include <iostream>

// Implementation of showTopicDetails
void showTopicDetails(const std::unordered_map<std::string, Topic>& topics, const std::string& topicName) {
    auto it = topics.find(topicName);
    if (it != topics.end()) {
        const Topic& topic = it->second;
        std::cout << "\n--- Theory ---\n" << topic.theory << "\n\n";
        std::cout << "--- Syntax ---\n" << topic.syntax << "\n\n";
        std::cout << "--- Example Code ---\n" << topic.exampleCode << "\n\n";
    } else {
        std::cout << "Topic \"" << topicName << "\" not found. Please choose a valid topic.\n";
    }
}
