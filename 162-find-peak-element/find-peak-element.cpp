class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    int start=0,end=nums.size()-1;
    int mid=0;
    while(end!=start){
        mid=start+(end-start)/2;
        if(nums[mid]<nums[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    } 
    return start;
    }
};