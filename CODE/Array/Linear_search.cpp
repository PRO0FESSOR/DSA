#include<iostream>
using namespace std;

int search_key(int size,int arr[],int key)
{
    int ans;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            ans = i;
            break;
        }
    }

    return ans;
}

int main()
{
    int n = 10;
    int arr[n] = {10,20,30,40,50,60,70,80,90,100};

    cout<<"key founds at -->"<<search_key(10,arr,40)<<endl;

    return 0;
}