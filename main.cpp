#include <iostream>


int main() {
    /**
     * String to test their "palindromity"
     */
    char const * string = "Kak";

    /**
     * Calculating size of string
     */
    unsigned size = 0;
    for(const char *p = string; *p != '\0'; ++p) {
        size++;
    }

    /**
     * Bi-directed chars comparing
     */
    bool isPal = true;
    for (int i = 0; i < size; ++i) {
        if (tolower(string[i]) != tolower(string[(size-i) - 1])) {
            isPal = false;
            break;
        }
    }

    if(isPal) {
        std::cout << "This is Palindrome";
    } else {
        std::cout << "This is not palindrome";
    }

    return 0;
}