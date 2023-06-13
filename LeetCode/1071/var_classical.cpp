// this is psevdocode

string gcd(string s1, string s2) {
    // swaping
    if (s1.size() < s2.size()) gcd(s2, s1);
    
    // basic
    if (s1 == s2) return s1
    
    // recursion
    if (s1.startwith(s2)) return gcd(s1.substr(s2.size(), s1.size()), s2);
}
