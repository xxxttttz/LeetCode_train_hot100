#https://leetcode.cn/problems/two-sum/description/?envType=study-plan-v2&envId=top-100-liked
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int>ans;
        for(int i=0;i<len;i++)
        {
            int now = target - nums[i];
            vector<int>::iterator pos = find(nums.begin(),nums.end(),now);
            if(pos != nums.end() && pos-nums.begin() !=i ){
                ans.push_back(i);
                ans.push_back(pos-nums.begin());
                break;
            }
        }

        
        return ans;
    }
};
