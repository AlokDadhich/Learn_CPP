#ifndef LEARN_CPP_H
#define LEARN_CPP_H

#include <iostream>
#include <unordered_map>
#include <string>

// Define the Topic structure
struct Topic {
    std::string theory;
    std::string syntax;
    std::string exampleCode;
};

// Function declaration to initialize topics
std::unordered_map<std::string, Topic> initializeTopics();

// Function declaration to show details of a topic
void showTopicDetails(const std::unordered_map<std::string, Topic>& topics, const std::string& topicName);

#endif // LEARN_CPP_H
