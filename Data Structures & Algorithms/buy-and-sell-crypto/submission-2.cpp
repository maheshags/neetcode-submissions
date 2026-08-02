class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=1e9;
        int max_profit=0;
         for(int price:prices){
            minprice=min(minprice,price);
            max_profit=max(max_profit,price-minprice);
         }
         return max_profit;
    }
};
