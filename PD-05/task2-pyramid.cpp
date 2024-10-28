#include<iostream>
#include<cmath>
using namespace std;
void centimeter();
void kilometer();
void meter();
void milimeter();
float length, width, height;
string units, milimeters, centimeters, meters, kilometers;
float volume_m,volume_cm,volume_mm,volume_km;

int main()
{
    cout<<"Enter the length of the pyramid (in meters): ";
    cin >>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin >>width;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin >>height;
    cout << "Enter the desired output unit (milimeters, centimeters, meters, kilometers): ";
    cin>>units;
    if(units=="centimeters")
    {
        centimeter();
    }
    if(units=="milimeters")
    {
        milimeter();
    }
    if(units=="kilometers")
    {
        kilometer();
    }
    if(units=="meters")
    {
        meter();
    }


    return 0;

}
void meter()
{
    volume_m=(length*height*width)/3;
    cout << "The volume of pyramid is "<<volume_m<<" cubic meter.";
    cout<<endl;
}


void centimeter()
{
    volume_m=(length*height*width)/3;
    volume_cm=volume_m* pow(10,6);
    cout << "The volume of pyramid is: "<<volume_cm<<" cubic centimeter.";
}

void milimeter()
{
    volume_m=(length*height*width)/3;
    volume_mm=volume_m* pow(10,9);
    cout << "The volume of pyramid is: "<<volume_mm<<" cubic milimeter.";
}
void kilometer()
{
    volume_m=(length*height*width)/3;
    volume_km=volume_m* pow(10,-9);
    cout << "The volume of pyramid is: "<<volume_km<<" cubic kilometer.";
}
