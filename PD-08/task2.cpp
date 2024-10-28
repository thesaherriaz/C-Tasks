#include <iostream>
using namespace std;
int letter_count(int num, char letter, string word[]);
main()
{
    int num;

    cout << "Enter how many words you want to enter: ";
    cin >> num;
    string word[num];
    for (int i = 0; i < num; i++)
    {

        cout << "Enter word: " << i + 1 << ": ";
        cin >> word[i];
    }
    char letter;
    cout << "Enter how many letter you want to count: ";
    cin >> letter;
    letter_count(num, letter, word);
    cout << letter << " shows up " << letter_count(num, letter, word) << " in the data.";
}

int letter_count(int num, char letter, string word[])
{
    int count = 0;

    for (int i = 0; i < num; i++)
    {
        string a = word[i];
        for (int j = 0; j < a.length(); j++)
        {
            char word[j];
            if (a[j] == letter)
                count++;
        }
    }
    return count;
}