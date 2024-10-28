#include<iostream>
using namespace std;
int main()
{
	int minutes;
	cout << "Number of Minutes: ";
	cin >> minutes;
	cout << "Frames per Second: ";
	int frames_per_sec, total_frames;
	cin >> frames_per_sec;
	int sec_in_min;
	sec_in_min=minutes*60;
	total_frames=sec_in_min*frames_per_sec;
	cout << "Total Number of Frames: "<<total_frames;
}