#include <iostream>

using namespace std;

void zigZag(int arr[], int n) {

        int flag=1;
        int i;
        for( i=0;i<=n-2;i++)
        {
            if(flag)
            {
                if(arr[i]>arr[i+1])
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
            else
            {
                if(arr[i]<arr[i+1])
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
            flag=!flag;
        }
        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";



    }
    int main()
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        zigZag(arr,n);
    }
