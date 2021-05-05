 #include <stdio.h>
void read_arr(int [],int);
void search(int [],int,int);
int main()
{
    int arr[100], arr_size,key;
    printf("Enter the number of elements \n");
    scanf("%d", &arr_size);
    printf("Enter the elements\n");
    read_arr(arr, arr_size);
    printf("Enter the key\n");
    scanf("%d",&key);
    search(arr, arr_size,key);
    return 0;
}  

void read_arr(int arr[100],int arr_size)
{
    int i;
    for(i=0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void search(int arr[100],int arr_size,int key)
{
    int i,flag=0,pos[100],count=0;
    for(i=0;i<arr_size;i++)
    {
        if(key==arr[i])
        {
            flag=1;
        }
        if(arr[i]==key)
        {
            pos[count++]=i+1;
        }
        
    }
    if(flag==1)
    {
        printf("search successfull\n");
        printf("first occurance%d\n",pos[0]);
        printf("last occurance%d",pos[count-1]);
    }
    else
    {
        printf("search uunsuccessfull\n");
    }
}