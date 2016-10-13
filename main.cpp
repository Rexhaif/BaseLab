#include <iostream>

int main() {
    long loli[] = {2, 2, 3, 3, 4, 4, 56, 5, 9};
    unsigned it = 0;
    cool_guys_hate_this : {
        if (it >= (sizeof(loli) / sizeof(int))) goto exit;
        std::cout << *(loli + it) << '|';
        it++;
    }
    goto cool_guys_hate_this;
    exit : {
        return 0;
    }
}