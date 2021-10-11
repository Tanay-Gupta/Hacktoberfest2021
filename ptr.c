#include<stdio.h>
int main()
{
int i,j,k,l,m,n;
printf("Enter n\n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
    for(l=1;l<=i;l++)
    {
        printf("%d",l);
    }
    for(j=n;j>i;j--)
    {
        printf("  ");
    }
    for(k=i;k>=1;k--)
    {
        printf("%d",k);
    }
    printf("\n");
}
return 0;
}
