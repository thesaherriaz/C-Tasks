#include<iostream>
using namespace std;
int main()
{
	cout << "Enter a 4-digit number: ";
	int number;
	cin >> number;

	int n1,num1;
	n1=number/10;
	num1=number%10;

	int n2,num2;
	n2=n1/10;
	num2=n1%10;

	int n3,num3;
	n3=n2/10;
	num3=n2%10;

	int num4;
	num4=n3;

	int sum;
	sum=num1+num2+num3+num4;
	cout << "Sum of the individual digits: "<<sum;
	
}