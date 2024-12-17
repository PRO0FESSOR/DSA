
// buy and sell stock level one 
// simply return maximum profit 

// bruteforce n2 tle solution 1

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        auto allmaxprofit = 0;
 
        for(int i = 0; i < prices.size()-1; ++i)
        {
            auto currprice = prices[i];
            auto ithmaxprofit = 0;

            for(int j = i+1 ; j<prices.size() ; ++j){
                auto sellprice = prices[j];
                auto profit = sellprice-currprice;
                ithmaxprofit = max(ithmaxprofit,profit);
            }

            allmaxprofit = max(allmaxprofit,ithmaxprofit);
        }

        return allmaxprofit;
        
    }
};

// n2 but different way (tle)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       if(prices.size()==1) return 0;
       auto buy = 0;
       auto sell = prices.size()-1;
       auto maxprofit  = 0;

       while(buy<=prices.size()-1){
        if(buy == sell){
            buy++;
            sell = prices.size()-1;
        }
        else{
            auto profit = prices[sell] - prices[buy];
            maxprofit = max(maxprofit,profit);
            sell--;
        }
       }

       return maxprofit;    }
};

// optimised o(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
    auto n = prices.size()-1;

    auto maxprofit = 0;
    auto minprice = prices[0];

    for(auto price:prices){
        if(price < minprice){
            minprice = price;
        }   
        else{
            auto profit  = price-minprice;
            maxprofit = max(maxprofit,profit);
        }   
    }

    return maxprofit;
    }
};
