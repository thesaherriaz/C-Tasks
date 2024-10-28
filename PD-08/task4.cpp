#include <iostream>
using namespace std;

main()
{
    int boxes;
    cout << "Enter the number of boxes: ";
    cin >> boxes;
    int num = boxes * 3;
    int dim[num];
    int result = 0;
    cout << "Enter the dimensions of the boxes (length, width, height): ";
    for (int i = 1; i <= boxes; i++)
    {
        int l, w, h;
        cin >> l >> w >> h;
        int product = l * w * h;
        result = product + result;
    }
    cout << "Total volume of all boxes: "<<result;
}