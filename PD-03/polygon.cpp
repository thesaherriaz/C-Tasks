#include<iostream>
using namespace std;
int main()
{	
	int n;
	cout << "Enter the number of sides of the polygon: ";
	cin >> n;
	float internal_angles;
	internal_angles=(n-2)*180;
	cout << "The sum of internal angles of a "<<n <<"-sided polygon is: " <<internal_angles <<" degrees";
}