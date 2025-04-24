class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=INT_MIN;
        int buy =prices[0];
    
        for(int i=0;i<prices.size();i++){
            int sell = prices[i];
            if(buy > prices[i]){
                 buy=prices[i];
            }
        else if(sell-buy >maxi){
            maxi = sell-buy;
         }
        }
        return maxi;
    }
};
