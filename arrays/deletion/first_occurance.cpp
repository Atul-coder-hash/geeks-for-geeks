// brute force

#include<bits/stdc++.h>
 using namespace std; 
 int main() {   
      vector<int> v = {10,20,30,40};    
      int ele = 25;
      int index=0;  
      for(int i =0; i<v.size();i++) 
      {     if(v[i]==ele)    
          {  index = i;    
             break; 
           }   
       }  
       
        if(index ==0)  
         {   
            for(int i=0;i<v.size();i++) 
          {  cout<<v[i]<<" "; 
          }            
         } 
        else
         {
            for(int i=index;i<=v.size();i++) 
            {
              v[i] = v[i+1];
	        } 
	         
	        for(int i=0;i<v.size()-1;i++)
    	    { cout<<v[i]<<" ";
            }
        }
	   
            
         }



// correct approach
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40};
    int ele = 25;
    int index = -1;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==ele)
        {
            index = i;
            break;
        }
    }

    if(index == -1)
    {
       for(int i=0;i<v.size();i++)
       {
        cout<<v[i]<<" ";
       }
    }
    else
    {
        for(int i=index;i<v.size()-1;i++)
            v[i] = v[i+1];

        for(int i=0;i<v.size()-1;i++)
            cout << v[i] << " ";
    }
}

// built - in function


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = { 10, 20, 20, 20, 30 };
    int ele = 20;

    cout << "Array before deletion\n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
	
    // Find the element in the array
    auto it = find(arr.begin(), arr.end(), ele); // it returns iterator
    
    // Remove the element if it is present in array
    if (it != arr.end()) {
        arr.erase(it);  
    }
    
    cout << "\nArray after deletion\n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}