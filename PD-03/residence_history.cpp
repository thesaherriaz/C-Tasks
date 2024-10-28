#include<iostream>
using namespace std;
int main()
{
	int age, times_move;
	cout << "Enter the person's age: ";
	cin >> age;
	cout << "Enter the number of times they've moved: ";
	cin >> times_move;
	times_move=times_move+1;
	int avg;
	avg=age/times_move;
	cout << "Average number of years lived in the same house: "<<avg;
}