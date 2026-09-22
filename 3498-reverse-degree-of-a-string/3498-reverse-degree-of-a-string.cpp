class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mp;
        int x=26;
        for(char c='a'; c<='z'; c++){
            mp[c]=x;
            x--;
        }
        int ans=0;

        for (int i=0; i<s.size(); i++){
            char c=s[i];
            ans+=(mp[c])*(i+1);
        }
        return ans;
    }
};