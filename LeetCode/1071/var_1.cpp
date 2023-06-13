// very slow algorithm

#include <iostream>
#include <string>

using namespace std;

string gcdOfString(string s1, string s2) {
    string ans = "";
    int size1 = s1.size();
    int size2 = s2.size();
    int i = 0;

    while (size1 > i && size2 > i) {
        if (s1[i] == s2[i]) {
            ans += s1[i];
            ++i;
        } else break;
    }

    return ans;

}



int main() {
    string s1 = "ABCABC";
    string s2 = "ABC";
    cout << "Answer - " << gcdOfString(s1, s2);
    
    return 0;
}
