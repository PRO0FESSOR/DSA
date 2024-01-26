// #include<iostream>
// using namespace std;

// void merge(int *arr , int s , int e)
// {
//     int mid = (s+e)/2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     // create array of len1 and len2 length

//     int* left = new int[len1];
//     int* right = new int[len2];

//     //copy values

//     int k=s;
//     for(int i=0;i<len1;i++)
//     {
//         left[i] = arr[k];
//         k++;
//     }

//     k=mid+1;
//     for(int i=0;i<len2;i++)
//     {
//         right[i] = arr[k];
//         k++;
//     }

//     //merge logic

//     int leftIndex = 0;
//     int rightIndex = 0;
//     int mainArrayIndex = s;

//     while(leftIndex < len1 && rightIndex<len2)
//     {
//         if(left[leftIndex] < right[rightIndex]){
//             arr[mainArrayIndex++] = left[leftIndex++];
//         }
//         else{
//             arr[mainArrayIndex++] = right[rightIndex++];
//         }
//     }

//     while(leftIndex < len1)
//     {
//     arr[mainArrayIndex++] = left[leftIndex++];
//     }
//     while(rightIndex < len2)
//     {
//         arr[mainArrayIndex++] = right[rightIndex++];
//     }

// }

// void sort(int *arr,int s,int e)
// {
//     if(s>=e)
//     {
//         return ;
//     }

//     int mid = (s+e)/2;

//     sort(arr,s,mid);
//     sort(arr,mid+1,e);

//     merge(arr,s,e);

// }

// int main()
// {
//     int n = 6;
//     int arr[n] = {2,7,1,6,8,5};
//     int s = 0;
//     int e = n-1;

//     sort(arr,s,e);

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     return 0;
// }


#include<iostream>
using namespace std;

void merge(int* arr,int s,int e)
{
    int mid = (s+e)/2;

    int Len1 = mid-s+1;
    int Len2 = e-mid;

    int* left  = new int[Len1];
    int* right  = new int[Len2];

    //copy left array

    int k = s;

    for(int i=0;i<Len1;i++)
    {
        left[i] = arr[k];
        k++;
    }

    //copy right array

    k = mid+1;

    for(int i=0;i<Len2;i++)
    {
        right[i] = arr[k];
        k++;
    }

    //merge logic 

    int leftIndex = 0;
    int RIGHTIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex<Len1 && RIGHTIndex<Len2)
    {
        if(left[leftIndex] < right[RIGHTIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainArrayIndex++] = right[RIGHTIndex++];
        }
    }

    // copy

    while(leftIndex < Len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    while(RIGHTIndex < Len2)
    {
        arr[mainArrayIndex++] = right[RIGHTIndex++];
    }

}

void mergesort(int* arr,int s,int e)
{
    //base condition
    if(s>=e)
    {
        return;
    }

    int mid = (s+e)/2;

    //left array
    mergesort(arr,s,mid);

    //right array
    mergesort(arr,mid+1,e);

    //merge 
    merge(arr,s,e);

}

int main()
{
    int n=13;
    int arr[n]={38,27,43,3,2,2,2,2,2,2,1,9,20};
    int s = 0;
    int e = n-1;

    mergesort(arr,s,e);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    return 0;
}