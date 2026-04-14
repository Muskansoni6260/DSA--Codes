#include <iostream>
#include <unordered_set>
using namespace std;

int longestSubstring(string s) {
    unordered_set<char> st;
    int left = 0, maxLen = 0;

    for(int right = 0; right < s.length(); right++) {
        while(st.count(s[right])) {
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << longestSubstring(s);
    return 0;
}