#ifndef LEARN_CPP_H
#define LEARN_CPP_H

#include <iostream>
#include <unordered_map>
#include <string>

// Topic structure
struct Topic {
    std::string name;
    std::string theory;
    std::string syntax;
    std::string example;
};

// Declare topic-specific functions
std::unordered_map<std::string, Topic> getArrayTopics();
std::unordered_map<std::string, Topic> getFunctionTopics();
std::unordered_map<std::string, Topic> getPointerTopics();

// Combine all topics
std::unordered_map<std::string, Topic> getAllTopics();

// Display topic details
void showTopicDetails(const std::unordered_map<std::string, Topic>& topics, const std::string& topicName);

#endif
