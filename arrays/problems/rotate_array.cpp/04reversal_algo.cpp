#include<bits/stdc++.h>
using namespace std;

void rotateArr(vector<int> arr,int d)
{
    int n = arr.size();

     // Handle the case where d > size of array
d %= n;

    // reverse all elements
 int start = 0;
 int end = arr.size()-1;

 while(start<end)
 {
    swap(arr[start],arr[end]);
    start++;
    end--;
    
 }

   // reverse first d elements
 start = 0;
 end = d-1;

 while(start<end)
 {
    swap(arr[start],arr[end]);
    start++;
    end--;
 }

 // reverse n-d elements
 start = d;
 end = n-1;
  while(start<end)
 {
    swap(arr[start],arr[end]);
    start++;
    end--;
 }

 // traverse the array
 for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }
    
}

int main()
{
 vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;
    
  	rotateArr(arr, d);   
}

 

                                             // reverse using built-in functions


include <bits/stdc++.h>

using namespace std;

// Function to rotate an array by d elements to the right
void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
  
    // Handle the case where d > size of array
    d %= n;

  	// Reverse the entire array
    reverse(arr.begin(), arr.end());
  
    // Reverse the first d elements
    reverse(arr.begin(), arr.begin() + d);

    // Reverse the remaining n-d elements
    reverse(arr.begin() + d, arr.end());
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;
    
  	rotateArr(arr, d);
  
    for (int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}