#include<bits/stdc++.h>
using namespace std;

    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        
        
        for(int i=0;i<arr.size();i++){
            
            bool leader = true;
            
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j]>arr[i])
                {
                    leader = false;
                    break;
                }
            }


            if(leader == true)
            {
                 ans.push_back(arr[i]);
            }
        
        }

        return ans;
    }

int main()
{
    vector<int> arr = {10,4,2,4,1};
    vector<int> res = leaders(arr);

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";

    }
}


      
