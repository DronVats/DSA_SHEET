class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n = arr.size();
        pair<int,int> p ;
        // for(int i=0;i<n;i++){
        //     if(mini > arr[i]){
        //         mini = arr[i];
        //     }
        //     if(maxi< arr[i]){
        //         maxi = arr[i];
        //     }
             
        // }
        // return {mini,maxi};
        
        for(int i=0;i<n;i++){
            mini = min(arr[i],mini);
            maxi = max(arr[i],maxi);
            
        }
        return {mini,maxi};
    }
};
