#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,key,low=0,high=n,mid=0,a[n];
    printf("enter the value for n");
    scanf("%d",&n);

    printf("enter the value ")
    for ( i = 0; i < n; i++)
    {
            scanf("%d",&a[i]);
    }

    printf("enter the value for key");
    scanf("%d",&key);
    for ( i = 0; i < n; i++)
    {
           mid=(low+high)/2;
           if(a[mid]==key)
           {
                printf("element found");
                exit(0);
           }
           else if(a[mid]>key)
           {
            high=mid-1;
           }
           else[
            low=mid+1;
           ]
    }
}