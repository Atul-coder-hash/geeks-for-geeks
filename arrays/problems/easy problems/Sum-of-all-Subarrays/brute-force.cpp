#include<bits/stdc++.h>
using namespace std;

int  subarraySum(vector<int> arr)
{
    int result =0;
    
    for(int i=0;i<arr.size();i++)
    {
        int temp =0;
        for(int j=i;j<arr.size();j++)
        {
            temp = temp + arr[j];
            result = result + temp;
        }
    }
    return result;

}

int main()
{
        vector<int> arr = {1, 4, 5, 3, 2};
    int n = arr.size();
    cout<<subarraySum(arr);
    
}