/*
 * Вам даны две строки word1 и word2. Объедините строки,
 *  добавляя буквы в чередующемся порядке, начиная со word1. 
 *  Если строка длиннее другой, добавьте дополнительные буквы в конец объединенной строки.
 *  Вернуть объединенную строку
 */

#include <iostream>
#include <string>

std::string merge(std::string s1, std::string s2) {
    std::string answ = "";
    int i;
    for (i = 0; i < s1.size(); ++i) {
        answ += s1[i];
        answ += s2[i];
    }
    if (s1.size() < s2.size()) {
        for (;i < s2.size(); ++i) {
            answ += s2[i];
        }
    }
    return answ;
}

int main() {
    std::string s1 = "abc";
    std::string s2 = "ptrabc";
    std::cout << "\nS1 - " << s1;
    std::cout << "\nS2 - " << s2;
    std::cout << "\nAnswer: " << merge(s1, s2) << std::endl;
}
