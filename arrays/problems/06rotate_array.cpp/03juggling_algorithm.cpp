#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> arr,int d)
{
    int n = arr.size();

 d%=n; // if d>n

 int cycle = __gcd(n,d); // Calculate the number of cycles in the rotation
 
 for(int i=0;i<2;i++)
 {

    int currIdx = i;// Start index of current cycle
    int currEle = arr[currIdx];

    // Rotate elements till we reach the start of cycle
    do{
        int nextIdx = (currIdx+d)%n;
        int nextEle = arr[nextIdx];

        arr[nextIdx] = currEle;// Update the element at next index with the current element
        currEle = nextEle;// Update the current element to next element

        currIdx = nextIdx;  // Move to the next index
    }
    while(currIdx!=i);
 }

 for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }


}

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    int d = 2;
    rotate(arr,d);
}