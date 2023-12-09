// stock buy and cell level 1

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int j=prices.size();

        int maxProfit=0;
        int minPrice = prices[0];

        for(int i=0;i<j;i++)
        {
            maxProfit=max(maxProfit,prices[i]-minPrice);
            minPrice=min(minPrice,prices[i]);
        }

        return maxProfit;
    }
};

int main()
{
    return 0;
}