#include<iostream>
using namespace std;
int main()
{
	string name;
	int a_price, c_price, a_sold, c_sold, percent_charity, sales, donation, remaining_amount;
	cout << "Enter the movie name: ";
	cin >>name;
	cout << "Enter the adult ticket price: $";
	cin >>a_price;
	cout << "Enter the child ticket price: $";
	cin >>c_price;
	cout << "Enter the number of adult tickets sold: ";
	cin >>a_sold;
	cout << "Enter the number of child tickets sold: ";
	cin >>c_sold;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	cin >>percent_charity;
	cout <<endl;
	cout <<"Movie: "<<name;
	cout <<endl;
	sales=(a_price*a_sold)+(c_price*c_sold);
	cout << "Total amount generated from ticket sales: $"<<sales;
	cout <<endl;
	donation=sales/10;
	cout << "Donation to charity (10%): $" << donation;
	cout <<endl;
	remaining_amount= sales-donation;
	cout << "Remaining amount after donation: $"<<remaining_amount;
	cout <<endl;
}