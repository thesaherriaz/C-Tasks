#include<iostream>
using namespace std;
int main()
{
	int imposter_count, player_count;
	cout << "Enter Imposter Count: ";
	cin >> imposter_count;
	cout << "Enter Player Count: ";
	cin >> player_count;
	int chance;
	chance=100*imposter_count/player_count;
	cout << "Chance of being an imposter: "<<chance <<"%";
}