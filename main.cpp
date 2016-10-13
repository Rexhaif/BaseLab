#include <iostream>


int main() {

    char const * string = "Kaaaksaak";

    std::cout << "|Palindrome task|" << std::endl
              << "Testing string : " << string
              << std::endl;
    
    unsigned size = 0;
    for(const char *p = string; *p != '\0'; ++p) {
        size++;
    }

    std::cout << "String length is: " << size << std::endl;
    
    bool isPal = true;
    for (int i = 0; i < size; ++i) {
        
        std::cout << "Comparing chars at |"
                  << i << "| and |" << (size-i) - 1 << "| positions (|"
                  << char(tolower(string[i])) << "| and |"
                  << char(tolower(string[(size-i) - 1])) << "|)"
                  << " result : " 
                  << ((tolower(string[i]) != tolower(string[(size-i) - 1])) ? "not equal, breaking..." : "equal, continue...")
                  << std::endl;
        
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
