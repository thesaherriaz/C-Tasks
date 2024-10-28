#include<iostream>
using namespace std;
int main()
{
	string name;
	int target, required_days;
	cout << "Enter the Name of the Person: ";
	cin >>name;
	cout << "Enter the target weight loss in kilograms: ";
	cin >>target;
	required_days=target*15;
	cout <<name <<" will need "<<required_days <<" days to lose " <<target <<" kg of weight by following the doctor's suggestions"; 

}