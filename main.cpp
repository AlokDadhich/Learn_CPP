#include "Learn_CPP.h"
#include <iostream>

int main() {
    std::string selectedTopic;
    char choice = 'y';

    do {
        displayTopics();
        std::cin.ignore();
        std::getline(std::cin, selectedTopic);

        showTopicDetails(selectedTopic);

        std::cout << "\nWould you like to explore another topic? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Thank you for learning C++!\n";
    return 0;
}
