class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int indx = -1;

        int n =nums.size();
    //    find the next smallest
        for(int i= n-2;i>=0 ;i--){
            if(nums[i] <nums[i+1]){
                indx = i;
                break;
            }
        }
        // reverse if it is the last stage
        if(indx == -1){
        reverse(nums.begin(),nums.end());
        return;
        }
       
       // swap the smallest number till that index
        for(int i=n-1;i>indx;i--){
            if(nums[indx] < nums[i]){
                     swap(nums[indx],nums[i]);
                     break;
            }
        }
        // reverse the remaninig part
        reverse(nums.begin() + indx+1,nums.end());
        return;
    }
};
