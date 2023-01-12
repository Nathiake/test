#include <iostream>
using namespace std;
int main()
{
    int temp[7],t=0, avg;
    for(int i=0; i<7; i++)
    {
        cout<<"Enter this week's weather temprature";
        cin>>temp[i];
        t += temp[i];
    }
     avg=t/7;
    cout<<"The averare temprature of the week is  "<<avg;
    cout<<"The averare temprature of the week is  "<<avg;
    return 0;
}
