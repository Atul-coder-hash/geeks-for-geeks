#include<bits/stdc++.h>
using namespace std;

void two_traversals(vector<int> arr)
{
    int n = arr.size();

    int count =0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {   
             arr[count]= arr[i];    // If the element is non-zero, replace the element at
                                    // index 'count' with this element and increment count
            count++;
        }
       
    }
      // Now all non-zero elements have been shifted to
    // the front. Make all elements 0 from count to end.
     while (count < arr.size())
        arr[count++] = 0;


   
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    two_traversals(arr);
}