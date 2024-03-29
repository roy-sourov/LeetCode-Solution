//https://leetcode.com/problems/find-the-difference/

class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> arr1(26,0);
        vector<int> arr2(26,0);
        for(auto x:s) arr1[x-'a']++;
        for(auto x:t) arr2[x-'a']++;
        for(int i=0;i<26;i++)
            if(arr1[i]!=arr2[i]) return i+'a';
        return 'a';
    }
};
