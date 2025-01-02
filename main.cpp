#include "Learn_CPP.h"
#include <iostream>

int main() {
    // Initialize topics
    auto topics = initializeTopics();

    // Display available topics
    std::cout << "Available Topics:\n";
    for (const auto& topic : topics) {
        std::cout << "- " << topic.first << "\n";
    }

    // Get user input
    std::string selectedTopic;
    std::cout << "\nEnter a topic to learn about: ";
    std::getline(std::cin, selectedTopic);

    // Show selected topic details
    showTopicDetails(topics, selectedTopic);

    return 0;
}
