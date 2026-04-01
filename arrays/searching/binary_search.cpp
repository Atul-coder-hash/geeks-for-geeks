#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> v, int x){

    int low =0,high = v.size()-1;

    while(low <= high)
    {
        int mid = low + (high-low)/2;

        if(v[mid]==x)
        {
            return mid;
        }

        if(v[mid] < x) // mid == element
        {
            low = mid+1;
        }
        else
    
            high = mid-1;
        }

    return -1;
  
}

int main()
{
    vector<int> arr = {2,5,8,12,16,23,38,56,72,92 };
       int x = 8;
       int result = binary_search(arr,x);
       if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;

    

}