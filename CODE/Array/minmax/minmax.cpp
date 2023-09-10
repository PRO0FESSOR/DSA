#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"enter number"<<endl;
    cin>>n;

    int a[n];
    
    int max = INT16_MIN; 
    
    for(int i=0;i<n;i++ )
    {
        cout<<"array"<<i<<"-->";
        cin>>a[i];
    }
    

    for(int i=0;i<n;i++)
    {

        if(a[i]>max){
            max=a[i];
        }
    }

    cout<<max;

    return 0;

}