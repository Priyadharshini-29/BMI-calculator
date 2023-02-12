#include <iostream>

using namespace std;

 int firstElementKTime(int a[], int n, int k)
    {
        //sort(a,a+n);
        int found=0,i;
        int hash[201]={0};
        for(i=0;i<n;i++)
        {
            hash[a[i]]++;

                    if(hash[a[i]]==k)
                    {
                    return a[i];
                    }


        }
        return -1;

     }
     int main()
     {
         int n;
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)
            cin>>arr[i];
         int k;
         cin>>k;
         int ans=firstElementKTime(arr,n,k);
         cout<<ans;
     }
