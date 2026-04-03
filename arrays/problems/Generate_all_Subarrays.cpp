// iterative approach

#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> arr = {1, 2, 3, 4};


    
   for(int i=0;i<arr.size();i++)
   {
    int start = i;
    for(int j=i;j<arr.size();j++)
    {
        int end = j;
        for(int k = start;k<=end;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
   }
}

// recursive approch(optimal approach)