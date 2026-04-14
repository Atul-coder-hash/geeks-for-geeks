#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> arr)
{   int ans =0;
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        ans = ans + arr[i]*((i+1)*(n-i));

    }
    return ans;
}



int main()
{
     vector<int>arr = {1, 4, 5, 3, 2};
    int n = arr.size();
    cout <<subarraySum(arr);
    
}