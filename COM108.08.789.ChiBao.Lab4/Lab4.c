#include<stdio.h>
int main()
{
    int n,i,dem,j;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        dem=0;
        for(j=1; j<=n; j++){
            if(i%j==0)
                dem++;
        }
        if(dem==2)
            printf("%d " ,i);
    }
    return 0;
}
