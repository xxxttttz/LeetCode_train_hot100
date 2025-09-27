//https://leetcode.cn/problems/move-zeroes/description/?envType=study-plan-v2&envId=top-100-liked
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int cnt = 0;
        for(int i=0;i<len;i++){
            if(nums[i]==0)cnt++;
        }
        int now = 0;
        for(int i=0;i<len;i++)
        {
            if(nums[i]!=0){
                nums[now++] = nums[i];
            }
        }
        for(int i=len-cnt;i<len;i++)
        {
            nums[i]=0;
        }
        
    }
};
