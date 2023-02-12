#include <stdio.h>
#include <stdlib.h>
int power(int n,int pow)
{
    int res=0;
    if(pow==0)
        return 1;
    res=n*power(n,pow-1);
    return res;
}
int main()
{

    int n;
    scanf("%d",&n);
    int pow;
    scanf("%d",&pow);
    int res=power(n,pow);
    printf("%d",res);
}
