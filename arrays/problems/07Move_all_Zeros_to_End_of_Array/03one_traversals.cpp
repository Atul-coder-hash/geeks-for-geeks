#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(vector<int> arr)
{
    int n = arr.size();
    int count =0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[count++],arr[i]);
          
        }
        
    }

       for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
     vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);
    
}