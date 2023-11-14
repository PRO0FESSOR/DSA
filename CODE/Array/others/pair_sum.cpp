#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr{1,3,4,7,8,2,9,7};

    int key;
    cout<<"enter key --> ";
    cin>>key;

    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==key)
            {
                cout<<arr[i]<<"+"<<arr[j]<<"="<<key;
            }
        }
    }

    return 0;
}