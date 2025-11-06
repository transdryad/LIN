#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#define PROJECT_NAME "LIN"

std::vector<std::string> word_list;

void run(std::string source) {
    
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << argv[0] << " takes one argument: the file to be compiled.\n";
        return 1;
    }
    std::string input_file = 
    std::cout << "This is project " << PROJECT_NAME << ".\n";

    std::ifstream wordlists("src/fr.txt"); //read wordlist into vector
    if (!wordlists.is_open()) { std::cerr << "Error reading the word list!"; return 1; }
    std::string s;
    while (getline(wordlists, s)) word_list.push_back(s);
    wordlists.close();

    for (std::string str : word_list) {
        std::cout << str << std::endl;
    }

    return 0;
}
