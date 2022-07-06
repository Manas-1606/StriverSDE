#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) 
{
    int profit =0;
    int mini = INT_MAX;
    for(int i=0;i<prices.size(); i++)
    {
        mini = min(prices[i],mini);
        profit = max(profit, prices[i] - mini);
    }
    
    return profit;    
}

int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    int sell = maxProfit(prices);
    cout<<sell;
}