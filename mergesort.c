#include<stdio.h>

int arr[20];
int main()
{
    int i,n;
    printf("Enter array Size: ");
    scanf("%d",&n);
    printf("Enter array value: ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }


    mergesort(arr,0,n-1);

    printf("Sorted array: ");

    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
int mergesort(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;

        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

    return 0;
}




int merge( int arr[],int p,int q,int r)
{
    int arr1[10],arr2[10];
    int i,j,k,n1,n2;
    n1=q-p+1;

    n2=r-q;

    for( i=0; i< n1; i++)
    {
        arr1[i]=arr[p+i];
    }
    for( j=0; j<n2; j++)
    {
        arr2[j]=arr[q+j+1];
    }
    arr1[i]=9999;
    arr2[j]=9999;
    i=0;
    j=0;

    for(k=p; k<=r; k++)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;

        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }

    }


    return 0;
}

