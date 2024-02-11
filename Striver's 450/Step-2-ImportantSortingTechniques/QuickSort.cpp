#include <iostream>
#include <cstring>

class words {
private:
    char* word;

public:
    words(const char* w) {
        word = new char[strlen(w) + 1];
        strcpy(word, w);
    }

    void printWord() {
        std::cout << word << std::endl;
    }

    ~words() {
        delete[] word; // Release memory allocated for 'word'
        std::cout<< "delete word deconstruct";
    }
};

int main() {
    words* w4 = new words("Plaksha"); // Dynamic allocation
    words* w5 = new words(" University"); // Dynamic allocation
    std::cout<< "delete word ";
    w4->printWord();
    std::cout<< "delete word";
    w5->printWord();
    
    delete w4; // Release memory allocated for 'w4'
    delete w5; // Release memory allocated for 'w5'

    return 0;
}
