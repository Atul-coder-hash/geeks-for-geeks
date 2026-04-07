    #include<bits/stdc++.h>
    using namespace std;

    void moveszeroes(vector<int> arr)
    {   int n = arr.size();
        vector<int> temp(n,0); // give asize of arrray equal to original array and fill zero value in array

        
        int j=0;// to keep track of the index in temp[]
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0) // elements is not equal to zero then add element in temporary array
            {
                temp[j++]=arr[i]; // Copy non-zero elements to temp[]
                
            }
            else{
                continue;
            }
        }

        for(int i=0;i<n;i++)
        {
            arr[i]=temp[i];      // copy the temp array into the original array
        
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        
        }


    }

    int main()
    {
        vector<int> arr= {1, 2, 0, 4, 3, 0, 5, 0};
        
        moveszeroes(arr);
    }