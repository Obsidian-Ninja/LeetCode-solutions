class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int i=0;
    while(i<nums.size()){
        if(nums[i]==0){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]!=0){
                    swap(nums[i],nums[j]);
                    break;
                }
            }
        }
        i++;
    }
    }
    
};