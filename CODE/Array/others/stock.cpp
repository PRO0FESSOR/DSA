#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int prices[] = {7,5,1,3,6,4};
    int n = 6;

    int minPrice=prices[0];
    int maxProfit=0;

    for(int i=0;i<n;i++)
    {
        maxProfit=max(maxProfit,prices[i]-minPrice);
        minPrice=min(minPrice,prices[i]);
    }

    cout<<"Your profit is -->"<<maxProfit<<endl;
    return 0;
}