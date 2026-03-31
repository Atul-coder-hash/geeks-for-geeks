// built in function
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40};
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

    }
}

// custom function

int main()
{
    vector<int> v = {10,20,30,40};
   
    for(int i=0;i<v.size()-1;i++)
    {
        cout<<v[i]<<" ";

    }
}

