#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

int findMinDifference(vector<string>& timePoints)
{
    vector<int>minutes;

    for(int i = 0;i<timePoints.size();i++)
    {
        string s = timePoints[i];
        int hours = stoi(s.substr(0,2));
        int min = stoi(s.substr(3,2));
        int totalMinutes = hours*60+min;

        minutes.push_back(totalMinutes);
    }

    sort(minutes.begin(),minutes.end());

    int mini = INT16_MAX;

    for(int i=0;i<minutes.size()-1;i++)
    {
        int diff = minutes[i+1]-minutes[i];
        mini = min(mini,diff);
    }

    int n = minutes.size();

    int lastdiff1 = minutes[0]+1440 - minutes[n-1];
    int lastdiff2 = minutes[n-1] - minutes[0];
    int lastdiff = min(lastdiff1,lastdiff2);

    mini = min(mini,lastdiff);

    return mini;

}

int main()
{
    int n;
    cout<<"enter the number of inputs you want --> ";
    cin>>n;

    vector<string>s;
    

    for(int i=0;i<n;i++)
    {
        string in;
        cout<<"enter value of "<<i+1<<" --> ";
        cin>>in;
        s.push_back(in);
    }

    cout<<"Minimum time difference is --> "<<findMinDifference(s);

    // cout<<"String you entered is --> ";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<s[i]<<" , ";
    // }   

    return 0;
}