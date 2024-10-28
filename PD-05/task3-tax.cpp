#include<iostream>
#include<cmath>
using namespace std;
float taxCalculator();
int rate;
char type;
float item_price, tax_amount,final_price;
int main()
{
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin>>type;
    cout << "Enter the price of the vehicle: $";
    cin>> item_price;

    if(type=='M')
    {
        rate=6;
    }
    else if(type=='E')
    {
        rate=8;
    }
    else if(type=='S')
    {
        rate=10;
    }
    else if(type=='T')
    {
        rate=12;
    }
    else if(type=='V')
    {
        rate=15;
    }
    taxCalculator();
    return 0;
}

float taxCalculator(){
    tax_amount=item_price*rate/100;
    final_price=item_price+tax_amount;
    cout << "The final price of a vehicle of type "<<type <<" after adding the tax is $" <<final_price;
}