#include<iostream>
using namespace std;

int firstocc(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;
    int ans;

    while(start<=end)
    {
        int element = arr[mid];        
        
        if(element == key)
        {
            end = mid - 1;
            ans = mid;
        }
        else if(element < key )
        {
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = (start+end)/2;
    }

    return ans;

}

int main()
{
    int key;
    cout<<"Enter key -->";
    cin>>key;

    int n = 10;

    int arr[n]={2,3,5,6,6,6,7,8,2,10};

    int first_occurance = firstocc(arr,n,key);

    cout<<"First index at -->"<<first_occurance<<endl;

    return 0;
}