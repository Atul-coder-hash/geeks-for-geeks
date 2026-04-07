
#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
int d=3;


for(int i=0;i<d;i++)
{
    int first = arr[0];
    for(int j = 0;j<arr.size();j++)
    {
        arr[j]=arr[j+1];
    }
    arr[arr.size()-1] = first;
}


for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}
    
}