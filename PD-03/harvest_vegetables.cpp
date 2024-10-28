#include<iostream>
using namespace std;
int main()
{
	cout << "Enter vegetable price per kilogram (in coins): ";
	float v_price;
	cin >>v_price;
	cout << "Enter fruit price per kilogram (in coins): ";
	float f_price;
	cin >>f_price;
	cout << "Enter total kilograms of vegetables: ";
	float v_kgs;
	cin >>v_kgs;
	cout << "Enter total kilograms of fruits: ";
	float f_kgs;
	cin >>f_kgs;
	float v_rupee, f_rupee;
	v_rupee=(v_price*v_kgs);
	f_rupee=(f_price*f_kgs);
	float total,total_earning;
	total=v_rupee+f_rupee;
	total_earning=total/1.94;
	cout << "Total earnings in Rupees (Rps): "<<total_earning;
}