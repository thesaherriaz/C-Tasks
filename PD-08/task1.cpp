#include<iostream>
using namespace std;

int progress(int num, int sat_miles[]);

int main()
{
    int num;
    cout<<"Enter the number of Saturdays: ";
    cin>>num;
    int sat_miles[num];
    for(int count=1; count<=num; count++)
    {
        cout<<"Enter miles run for this saturday: "<<count <<": ";
        cin>>sat_miles[num];
    }
    progress(num, sat_miles);
    cout<< "The progress day is: " <<progress(num, sat_miles);

}


int progress(int num, int sat_miles[])
{
    int progress=0;
    for(int i=1; i<num;i++)
    {
        if(sat_miles[i-1] < sat_miles[i])
        {
            progress++;
        }

    }
    return progress;

}