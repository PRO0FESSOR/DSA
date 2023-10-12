#include<iostream>
using namespace std;

int indkey(int arr[] , int size , int key)
{
    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;

    while(start<=end)
    {
        int element = arr[mid];

        if(element == key)
        {
            return mid;
        }
        else if(element<key)
        {
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = (start+end)/2;
    }

    return -1;
}

int main()
{
    int key;
    cout<<"enter the key -->";
    cin>>key;

    int n = 10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    int index_key = indkey(arr,n,key);

    if(index_key == -1)
    {
        cout<<"Index not found !!"<<endl;
    }
    else{
        cout<<"Index at -->"<<index_key<<endl;
    }

    return 0;
}