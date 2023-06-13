#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cout << "Enter first word: \n";
    cin >> s1;
    cout << "Enter second word: \n";
    cin >> s2;    

    // algorithm
    int i = 0;
    int size1 = s1.size(), size2 = s2.size();
    string ans = "";
    while (i <  size1 || i < size2) {
        if (size1 > i) ans += s1[i];
        if (size2 > i) ans += s2[i];
        ++i;
    }
    
    cout << "result: " << ans << endl;
}
