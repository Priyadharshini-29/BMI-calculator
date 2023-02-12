#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
//using namespace std;
int main()
{

    int n,i,r;
    scanf("%d",&n,&r);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(r--)
    {


    int temp=arr[n-1];
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[0]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}




