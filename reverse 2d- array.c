#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,n1;
   scanf("%d%d",&n,&n1);
   int arr[n][n1];
   int i,j;
   for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

   int temp=0;
   int start=0, end;
   for(i=0;i<n;i++)
   {
       for(start=0,end=n1-1;start<end;start++,end--)
       {

        int temp=arr[i][start];
        arr[i][start]=arr[i][end];
        arr[i][end]=temp;
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n1;j++)
       {
           printf("%d  ",arr[i][j]);

       }
       printf("\n");
   }
}
