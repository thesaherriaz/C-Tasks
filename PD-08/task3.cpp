#include <iostream>
using namespace std;
int repeating_cycle(int length, int cycle, int arr[]);
int arr[]={};
main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    cout << "Enter the elements of the array: ";
    int arr[length];

    for (int i = 1; i <= length; i++)
    {

        cin >> arr[i];
    }
    int cycle;
    cout << "Enter the length of the array: ";
    cin >> cycle;
    repeating_cycle(length, cycle, arr);
    if(cycle=length)
    {
        cout<<"output:1";
    }
    else
        cout<<repeating_cycle(length, cycle, arr);

}

int repeating_cycle(int length, int cycle, int arr[])
{
    for (int i = 0; i < cycle; i++)
    {
        if (arr[i] == arr[cycle])
            cycle++;
            if(i==cycle)
            {
                return true;
            }
        if(cycle>length)
            return true;
        else
            return false;
    }
}