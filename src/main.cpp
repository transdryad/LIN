#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#define PROJECT_NAME "LIN"

std::vector<std::string> word_list;

int main(int argc, char **argv) {
    if (argc != 1) {
        std::cout << argv[0] << " takes no arguments.\n";
        return 1;
    }
    std::cout << "This is project " << PROJECT_NAME << ".\n";

    std::ifstream wordlists("src/ODS8.txt"); //read wordlist into vector
    if (!wordlists.is_open()) { std::cerr << "Error reading the word list!"; return 1; }
    std::string s;
    while (getline(wordlists, s)) word_list.push_back(s);
    wordlists.close();

    for (std::string str : word_list) {
        std::cout << str << std::endl;
    }

    return 0;
}
