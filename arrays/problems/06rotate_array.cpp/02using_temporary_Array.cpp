
#include<bits/stdc++.h>
using namespace std;

int main()
{

vector<int> arr= { 1, 2, 3, 4, 5, 6};
int d = 2;
 int n = arr.size();
vector<int> temp(n);

d= d%n;  // to handle the case of d>n

for(int i=0;i<d;i++)
{
    temp[i]=arr[n-d+i];   // copy the last d elements
}

for(int i=0;i<n-d;i++)
{
    temp[d+i] = arr[i];    // copy the first n-d elements
}

for(int i=0; i<n;i++)    // Copying the elements of temp in arr
                        // to get the final rotated vector
{
    arr[i]=temp[i];
}

 for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}

}