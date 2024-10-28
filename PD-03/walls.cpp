#include<iostream>
using namespace std;
int main()
{
	int square_meters, width, height, formula, walls;
	cout << "Number of square meters you can paint: ";
	cin >> square_meters;
	cout << "Width of the single wall (in meters): ";
	cin >> width;
	cout << "Height of the single wall (in meters): ";
	cin >> height;
	formula=square_meters/(width+height);
	walls=formula/2;
	cout << "Number of walls you can paint: "<<walls;
}