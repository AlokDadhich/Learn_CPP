#include "Learn_CPP.h"
#include <iostream>
#include <unordered_map>
using namespace std;

extern std::unordered_map<std::string, Topic> getArrayTopics();
extern std::unordered_map<std::string, Topic> getFunctionTopics();
extern std::unordered_map<std::string, Topic> getPointerTopics();
extern std::unordered_map<std::string, Topic> getLoopTopics();

std::unordered_map<std::string, Topic> initializeTopics() {
    auto topics = getArrayTopics();
    auto functionTopics = getFunctionTopics();
    auto pointerTopics = getPointerTopics();
    auto loopTopics = getLoopTopics();

    // Merge all topics into one map
    topics.insert(functionTopics.begin(), functionTopics.end());
    topics.insert(pointerTopics.begin(), pointerTopics.end());
    topics.insert(loopTopics.begin(), loopTopics.end());

    return topics;
}

void showTopicDetails(const std::unordered_map<std::string, Topic>& topics, const std::string& topicName) {
    auto it = topics.find(topicName);
    if (it != topics.end()) {
        const auto& topic = it->second;
        cout << "---- " << topicName << " ----\n";
        cout << "Description: " << topic.description << "\n\n";
        cout << topic.syntax << "\n\n";
        cout << topic.exampleCode << "\n";
    } else {
        cout << "Topic not found!\n";
    }
}

int main() {
    auto topics = initializeTopics();

    cout << "Available Topics:\n";
    for (const auto& topic : topics) {
        cout << "- " << topic.first << "\n";
    }

    cout << "\nEnter the topic you want to learn: ";
    string topicName;
    cin >> topicName;

    showTopicDetails(topics, topicName);

    return 0;
}
