#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;

    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;


    arr.push_back(9);

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}