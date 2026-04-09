#include<bits/stdc++.h>
using namespace std;

int minOps (vector<int> arr,int k)
{
    int n = arr.size();

    // max element in array
    int maxi = *max_element(arr.begin(), arr.end());

    // number of operation
    int operations=0;
    

    //checking modulus of all elements is equal to zero or not


    for(int i=0;i<n;i++)
    {

        if((maxi-arr[i])%k!=0) // max - element is not equal to zero return -1
        {
           return -1;


        }
       
      int result = (maxi-arr[i])/k;
        operations=result+operations;

    }

     
    return operations;

}

int main()
{
     vector<int> arr = {4, 7, 19, 16};
    int k = 3;

    cout << minOps(arr, k);
    
}