#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void Sorting(int a[100], int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
            
        }
    }
}


void union_finding(int a[100], int b[100], int n1, int n2){
   int  i=0, j=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
        printf("%d ",a[i]);
        i++;
        }
        
        else if(b[j]<a[i])
        {
            printf("%d ",b[j]);
            j++;
        }
        else
        {
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }
    
    while(i<n1)
    {
        printf("%d ", a[i]);
        i++;
    }
    
    while(j<n2)
    {
        printf("%d ", b[j]);
        j++;
    }
}

int main()
{
    int a[100], b[100], c[200],n1, n2;
    printf("enter the size of 1st array\n");
    scanf("%d", &n1);
    printf("enter the elements of 1st array\n");
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
    }
    
    
    printf("enter the size of 2nd array\n ");
    scanf("%d",&n2);
    printf("enter the elements of the 2nd array\n");
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
    }
    Sorting(a,n1);
    Sorting(b,n2);
    union_finding(a,b,n1,n2);
    return 0;
}
  

