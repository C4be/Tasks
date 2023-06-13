#include <iostream>
#include <string>

using namespace std;

// vowels {a, i, o, e, u}

inline bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'i' || ch == 'o' || ch == 'e' || ch == 'u';
}


string reverseVowels(string s) {
    int l = 0;
    int  r = s.size() - 1;
    while (r > l) {
        // searchVowels
        while (r > l && !isVowel(s[l])) ++l;
        while (r > l && !isVowel(s[r])) --r;
        if (l != r && isVowel(s[l]) && isVowel(s[r])) {
            s[l] += s[r];
            s[r] = s[l] - s[r];
            s[l] -= s[r];
            ++l; --r;
        }      
    }
    return s;
}


int main() {
    string s = "molachuk";
    cout << reverseVowels(s) << endl;
    return 0;
}
