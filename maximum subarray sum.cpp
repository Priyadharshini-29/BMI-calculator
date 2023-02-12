#include <iostream>

using namespace std;

long long maxSubarraySum(int arr[], int n){

        // Your code here

        int current_sum=0;
        int max_sum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            current_sum=current_sum+arr[i];
            if(current_sum<arr[i])
            current_sum=arr[i];

            if(max_sum<current_sum)
               max_sum=current_sum;


        }

        return max_sum;

    }
    int main()
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int ans=maxSubarraySum(arr,n);
        cout<<ans;
    }
