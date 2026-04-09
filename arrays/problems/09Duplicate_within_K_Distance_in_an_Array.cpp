
// brute force with mistake
#include<bits/stdc++.h>
using namespace std;

bool checkDuplicatesWithinK(vector<int> arr,int k)
{
    int n =arr.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)        
        {
            if(arr[i]==arr[j])
            {
                if((i-j)<=k)             // mistake 1:- wrong i-j checking, j is bigger, it is always negative
                {
                    return true;
                }

            }
            else{
                return false;          // mistake 2:- wrong else placement ,it makes the function return false immediately if the first pair doesn’t match, without checking the rest of the array.
            }
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 1, 2, 3, 4};
    if (checkDuplicatesWithinK(arr, 3))
        cout << "Yes";
    else
        cout << "No";
    
}

// correct bruteforce
#include<bits/stdc++.h>
using namespace std;

bool checkDuplicatesWithinK(vector<int> arr, int k)
{
    int n = arr.size();

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                if((j - i) <= k)
                {
                    return true;
                }
            }
        }
    }

    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 1, 2, 3, 4};

    if(checkDuplicatesWithinK(arr, 3))
        cout << "Yes";
    else
        cout << "No";
}
