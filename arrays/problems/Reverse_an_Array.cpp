#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> arr) {
        // code here
        int i=0,j = arr.size()-1;
        while(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
        for(int i=0;i<arr.size();i++)
        {
           cout<<arr[i]<<" ";
        }
    }

int main()
{
    vector<int> arr =  {1, 4, 3, 2, 6, 5};
    reverseArray(arr);
    
}