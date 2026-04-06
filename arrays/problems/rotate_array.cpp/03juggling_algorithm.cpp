#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> arr,int d)
{
    int n = arr.size();

 d%=n; // if d>n

 int cycle = __gcd(n,d);
 cout<<cycle;

}

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    int d = 2;
    rotate(arr,d);
}