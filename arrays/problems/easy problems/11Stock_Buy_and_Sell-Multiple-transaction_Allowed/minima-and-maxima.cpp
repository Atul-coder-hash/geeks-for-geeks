#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> prices)
{  int n = prices.size();
    int res=0;
    
    int lmin=0; // Local Minima
    int lmax=0; // Local Maxima
    
    
    int i=0;
    while(i<n-1)
    {
         // Find local minima 
        while(i<n-1 && prices[i]>=prices[i+1])
        {
            i++;
            
        }
        lmin = prices[i];
        
         // Local Maxima
        while(i<n-1 && prices[i]<=prices[i+1])
        {
            i++;
            
        }
        lmax = prices[i];
        
        // Add current profit 
        res = res + (lmax-lmin);
    }
    return res;
    
}



int main()
{
    vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
    cout << maxProfit(prices);
    return 0;
    
}