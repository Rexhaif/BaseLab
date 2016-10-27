//
// Created by Rexhaif on 22.10.2016.
//
#include <iostream>
//про include не забываем
int main(int argc, char** argv) {
    char const * string = "kabai";
    unsigned k = 0;
    for(char const *pb = string; *pb != '\0'; ++pb){
        k++;
    }

    bool isPalindrome = true; //Будем считать что любая строка - палиндром, пока не доказано обратное
    for(unsigned i = 0; i < k; ++i) {
        if(*(string + i) != *(string + (k - i - 1))) { // оп, словили несовпадение символов
            isPalindrome = false; //строка больше не является палиндромом
            break; // уходим отсюда
        }
        // ну а если не словили несовпадение - продолжаем
    }

    if (isPalindrome) { // Если ни одного несовпадения не выпало, значит строка - палиндром
        std::cout << "yep, that string is palindrome";
    } else { //ну а если несовпадение выпало - то тут все, строка не палиндром
        std::cout << "i'm so sorry bro, but that string is not a palindrome(";
    }
    return 0;
}
