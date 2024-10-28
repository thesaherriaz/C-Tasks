#include<iostream>
#include<cmath>
using namespace std;
void time_calculator();
int needed_hours, days, workers, used_hours, hours_left, hours_needed;
float nonworking_days,working_days;
int main()
{
    cout<<"Enter the needed hours: ";
    cin>>needed_hours;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    time_calculator();
    if(needed_hours<=used_hours)
    {
        cout<<"Yes! "<<hours_left <<" hours left";
    }
    else{
        cout<<"Not enough time! "<<hours_needed <<" hours needed";
    }
}
void time_calculator(){
    nonworking_days=days*0.10;
    working_days=days-nonworking_days;
    used_hours=working_days*10*workers;
    hours_left=needed_hours-used_hours;
    hours_needed=used_hours-needed_hours;
}
