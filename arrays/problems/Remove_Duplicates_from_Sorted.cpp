// brute force 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 5};
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

// correct version of brute force

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    vector<int> res;
   

    for(int i=0;i<arr.size()-1;i++)
    {
          if(arr[i]!=arr[i+1]) // check with next element agr next element previous ka equal nhi ha to result ma element add kr do
            {
                res.push_back(arr[i]);

            }
    }

    // Add last element manually
    res.push_back(arr[arr.size()-1]);

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }


}

//optimal approach for interview

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    vector<int> res;

    res.push_back(arr[0]); // add first element manually

    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]!=arr[i-1])
        {
            res.push_back(arr[i]);
        }
    }

       for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    
}