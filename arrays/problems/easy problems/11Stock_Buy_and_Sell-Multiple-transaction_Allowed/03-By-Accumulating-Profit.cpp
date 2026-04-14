#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> prices)
{
    int n = prices.size();
    int Profit =0;
    
    
    int i=0;
    while (i<n-1)
    {
        if(i<n-1 && prices[i]<=prices[i+1])
        {   int res =0;
            res  = prices[i+1]-prices[i];
            
            Profit = Profit + res;
       
        }
            i++;
        
    }
    return Profit;
}


int main()
{
    vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
    cout << maxProfit(prices);

}