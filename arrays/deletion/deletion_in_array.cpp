#include<bits/stdc++.h>
using namespace std;

// deletion using built- in function
void built_in_function(vector<int> a)
{
    a.erase(a.begin());
  for(int i=0;i<a.size();i++) 
  {
      cout<<a[i]<<" ";
  }
    
}

 // deletion using custom methods
void custom_function(vector<int> a)
{
 
 for(int i= 0;i<=a.size();i++)
 {
     a[i]=a[i+1];
     
 }
 
 for(int i=0;i<a.size()-1;i++)
 {
     cout<<a[i]<<" ";
 }
 
}

int main()
{
   vector<int>a = {12,45,63,25,63,67,89};
   
   built_in_function(a);
  cout<<endl;
  custom_function(a);

}
