#include <iostream>
#include <string>

using namespace std;


string reverseWords(string s) {
    s = ' ' + s;
    string ans = "";
    int head, tail = s.size() - 1;
    char last = ' ';
    for (int i = s.size() - 1; i >=0; --i) {
        if (s[i] != ' ' && last == ' ') tail = i;
        if (s[i] == ' ' && last != ' ') {
            head = i + 1;
            ans += s.substr(head, tail - head + 1);
            ans += ' ';
        }
        last = s[i];
    }
    return ans.substr(0, ans.size() - 1);
}


int main() {
    string s = "the sky is blue";
    cout << reverseWords(s);

    return 0;
}
