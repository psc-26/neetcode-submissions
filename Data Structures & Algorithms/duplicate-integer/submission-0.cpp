class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i < n-1; i++){
            if(nums[i] == nums[i+1]){
                cnt += 1;
            }
        }
        if( cnt != 0){
            return true;
        }else{
            return false;
        }
    }
};