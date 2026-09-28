#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length())
        return false;

    map<char, char> mp;
    map<char, char> reverseMap;

    for (int i = 0; i < s.length(); i++) {
        if (mp.find(s[i]) != mp.end()) {
            if (mp[s[i]] != t[i])
                return false;
        }
        else {
            if (reverseMap.find(t[i]) != reverseMap.end())
                return false;

            mp[s[i]] = t[i];
            reverseMap[t[i]] = s[i];
        }
    }

    return true;
}

int main() {
    string s = "egg";
    string t = "add";

    cout << isIsomorphic(s, t);

    return 0;
}
