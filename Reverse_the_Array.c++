class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int end = arr.size()-1;
        int start =0;
        while(start <= end){
            swap(arr[start++],arr[end--]);
        }
        return;
        
        // method 2 : By using stack,queue
    }
};
