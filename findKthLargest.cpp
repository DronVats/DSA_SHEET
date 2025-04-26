class Solution {
public:
    int partition_algo(vector<int>& nums, int L,int R){
        int i = L+1;
        int j = R;
        int pivot = nums[L];

        while(i<=j){

            if(nums[i] < pivot && nums[j] > pivot){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            if(nums[i] >= pivot){
                i++;
            }
            if(nums[j] <= pivot){
                j--;
            }
        }
        swap(nums[L],nums[j]);
        return j;
    }
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // return nums[nums.size() - k];

        int L =0;
        int R = nums.size()-1;
        int pivot_index =0;

        while(true){

            pivot_index = partition_algo(nums,L,R);

            if(pivot_index == k-1){
                break;
            } else if(pivot_index > k-1){
                R = pivot_index -1;
            } else{
                L = pivot_index +1;
            }
             
        }
        return nums[pivot_index];
    }
};
