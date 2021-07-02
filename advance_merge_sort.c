#include<stdio.h>
#include<stdlib.h>

int len ;
void printArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void merge(int left[],int right[],int arr[],int n1,int n2)
{
   int i,j,k;
   i=0;j=0;k=0;
   while(i<n1 && j<n2)
   {
       if(left[i]<right[j])
       {
           arr[k]=left[i];
           i++;
           k++;
       }
       else{
           arr[k]=right[j];
           j++;
           k++;

       }

   }
   while(i<n1)
   {
     arr[k]=left[i];
           i++;
           k++;  
   }
   while(j<n2)
   {
       arr[k]=right[j];
           j++;
           k++;
   }
//    printArray(arr,len);
}

void merge_sort(int arr[],int l,int h )
{   
    int mid;
    if(l<h)
    {
       mid=(l+h)/2 ;
    //    int n1 = mid-l+1;
    //    int n2 = h-mid;
    // 1 2 3 4 5 6 7 8 9 
    int n1 = mid -l ;
    int n2 = h - mid - 1;

       int left[n1];
       int right[n2];
       for(int i=0;i<n1;i++)
       {
           left[i]=arr[l+i];
       }
       for(int j=0;j<n2;j++)
       {
           right[j]=arr[mid+1+j];
       }
       printArray(left,n1);
       printArray(right,n2);
       merge_sort(left,l,mid);
       merge_sort(right,mid+1,h);
       merge(left,right,arr,n1,n2);
      
      


    }
}

int main(){
     int arr[]={1,5,7,8,9,2,3,4};
     int length=sizeof(arr)/sizeof(int);
     len = length;
     int l=0;
     int h=length;
     printArray(arr,length);
     merge_sort(arr,l,h);
     printArray(arr,length);
    return 0;
}