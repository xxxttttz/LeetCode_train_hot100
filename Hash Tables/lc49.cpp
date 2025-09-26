//https://leetcode.cn/problems/group-anagrams/?envType=study-plan-v2&envId=top-100-liked
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,int>m;
        int a[26] = {0};
        int pos = 0;
        for(int i = 0;i<strs.size();i++)
        {
            string now = strs[i];
            sort(now.begin(),now.end());
            if(m.find(now)==m.end())
            {
                ans.push_back(vector<string>());
                m.insert(make_pair(now,pos));
                pos++;
            }
            ans[m[now]].push_back(strs[i]);
            
        }
        return ans;
    }
};
