#include<iostream>
using namespace std;
int main()
{
	float fertilizer_bag, bag_cost, area;
	cout << "Enter the size of the fertilizer bag in pounds: ";
	cin >> fertilizer_bag;
	cout << "Enter the cost of the bag: $";
	cin >> bag_cost;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	cin >> area;
	float cost_per_pound;
	cost_per_pound=bag_cost/fertilizer_bag;
	cout << "Cost of fertilizer per pound: $" <<cost_per_pound <<endl;
	float cost_per_square;
	cost_per_square=bag_cost/area;
	cout << "Cost of fertilizing per square foot: $" <<cost_per_square;
}