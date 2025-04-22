class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        // sort(a.begin(),a.end());
        // int i=0;
        // int j= m-1;
        // int n = a.size();
        // int mini = INT_MAX;
        // int diff = 0;
        // while(j< n &&i < n){
        //      diff = a[j] - a[i];
        //     mini = (mini,diff);
        //     j++;
        //     i++;
        // }
        // return mini;
        
         sort(a.begin(),a.end());
    int i =0;
    int j = m-1;
    long long mini = INT_MAX;
    while(j  < a.size()){
        long long diff = a[j] - a[i];
        mini = min(mini,diff);
        i++;
        j++;
        
    }
    return mini;
    }
};
