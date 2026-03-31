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