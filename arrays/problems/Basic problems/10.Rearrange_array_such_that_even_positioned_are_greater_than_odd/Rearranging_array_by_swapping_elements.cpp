#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(vector<int> arr)
{
    for(int i = 1; i < arr.size(); i++)
    {
        // If index is odd → arr[i] should be greater
        if(i % 2 == 1)
        {
            if(arr[i] < arr[i-1])
            {
                swap(arr[i], arr[i-1]);
            }
        }
        // If index is even → arr[i] should be smaller
        else
        {
            if(arr[i] > arr[i-1])
            {
                swap(arr[i], arr[i-1]);
            }
        }
    }

    for(int x : arr)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> arr = {1, 3, 2};
    rearrangeArray(arr);
}