#include<iostream>
#include<math.h>
using namespace std;

float area(int r)
{
    float pie = 3.1415926;
    float area = pie*pow(r,2);
    return area;
}

int main()
{
    int radius;
    cout<<"enter radius of the circle-->";
    cin>>radius;
    cout<<"area of your circle is -->"<<area(radius)<<endl;
    return 0;
}