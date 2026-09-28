#include<bits/stdc++.h>
using namespace std;

string reverseWords(string str) {
    stringstream ss(str);
    vector<string> words;
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }
    
    int n = words.size();
    string ans = "";
    
    for (int i =n - 1; i >= 0; i--) {
        ans += words[i] + ' ';
    }
    ans.pop_back();
    
    return ans;
}
