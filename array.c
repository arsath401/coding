#include<stdio.h>
#include<stdlib.h>

void split(int arr[],int n, int pos)
{
    int a[20],b[20];
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(i<pos)
            a[i]=arr[i];
        else if(i>pos)
        {
            b[j]=arr[i];
            j++;
        }
    }
    printf("Elements before largest\n");
    for(i=0;i<pos;i++)
        printf("%d\t",a[i]);
    printf("\n");
    printf("Elements after largest\n");
    for(i=0;i<(n-pos-1);i++)
        printf("%d\t",b[i]);
    printf("\n");
}

void main()
{
    int arr[20],n,i,pos;
    int max=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            pos=i;
        }
    }
    printf("The largest element is %d\n",max);
    split(arr,n,pos);
}