#LeetCode 438 https://leetcode.cn/problems/find-all-anagrams-in-a-string/
#c++
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int a[26]={0};
        int b[26]={0};
        vector<int>ans;
        // string s1 ="";
        // string s2 = "";
        if(s.size()<p.size())return ans;
        for(int i=0;i<p.size();i++)
        {
            a[p[i]-'a']++;
            b[s[i]-'a']++;
        }

        for(int i=p.size();i<s.size();i++)
        {
            bool flag = 1;
            for(int j=0;j<26;j++){
                if(a[j]!=b[j]){
                    flag = 0;
                    break;
                }
            }
            int now = i-p.size();
            if(flag)ans.push_back(now);
            b[s[now]-'a']--;
            b[s[i]-'a']++;
        }
        bool flag = 1;
        for(int j=0;j<26;j++){
            if(a[j]!=b[j]){
                flag = 0;
                break;
            }
        }
        if(flag)ans.push_back(s.size()-p.size());
        return ans;

    }
};
