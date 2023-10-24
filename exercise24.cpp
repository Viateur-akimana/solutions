#include <iostream>
#include <string>
#include <cctype>

struct WordCount {
    int charactersWithoutSpaces;
    int charactersWithSpaces;
    int wordCount;
};

WordCount countWords(const std::string& input) {
    WordCount count = {0, 0, 0};
    bool inWord = false;

    for (char ch : input) {
        if (!std::isspace(ch)) {
            // Count characters without spaces
            count.charactersWithoutSpaces++;

            // Count characters with spaces
            count.charactersWithSpaces++;

            // Check if the character is part of a word
            if (!inWord) {
                count.wordCount++;
                inWord = true;
            }
        } else {
            // Count characters with spaces
            count.charactersWithSpaces++;

            // Mark the end of the word
            inWord = false;
        }
    }

    return count;
}

int main() {
    std::string input;

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Call the function to count words
    WordCount wordCount = countWords(input);

    // Display word count statistics
    std::cout << "Number of characters without spaces: " << wordCount.charactersWithoutSpaces << std::endl;
    std::cout << "Number of characters with spaces: " << wordCount.charactersWithSpaces << std::endl;
    std::cout << "Number of words: " << wordCount.wordCount << std::endl;

    return 0;
}
