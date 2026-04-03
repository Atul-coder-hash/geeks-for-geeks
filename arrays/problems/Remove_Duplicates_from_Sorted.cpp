#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 2, 2, 2, 2};
    vector<int> res;
   

    for(int i=0;i<arr.size();i++)
    {
          if(arr[i]!=arr[i+1]) // check with next element agr next element previous ka equal nhi ha to result ma element add kr do
            {
                res.push_back(arr[i]);

            }
        

    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }


}