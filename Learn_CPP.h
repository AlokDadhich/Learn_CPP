#ifndef LEARN_CPP_H
#define LEARN_CPP_H

#include <string>
#include <unordered_map>

// Structure to hold topic information
struct TopicInfo {
    std::string theory;
    std::string syntax;
    std::string exampleCode;
};

// Function declarations
void displayTopics();
void showTopicDetails(const std::string& topic);
std::unordered_map<std::string, TopicInfo> initializeTopics();

#endif // LEARN_CPP_H
