class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int col=matrix.size();
    int row=matrix[0].size();
    int start=0, end=row*col-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(matrix[mid/row][mid%row]==target){
            return 1;
        }
        else if(matrix[mid/row][mid%row]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return 0; 
    }
};