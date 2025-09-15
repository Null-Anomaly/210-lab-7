/*COMSC 21 | Lab 7 | Lawrence Bryant
IDE used: VSC*/

#include <iostream>
using namespace std;

string* reverseArray(string*);
void displayArray(string*);

//The main function of the program
int main()
{
    string* arr = nullptr;
    arr = new string[5];
    string *reversed = nullptr;
    arr[0] = "Billy";
    arr[1] = "Bob";
    arr[2] = "Joe";
    arr[3] = "Burt";
    arr[4] = "Tam";
    reversed = reverseArray(arr);
    displayArray(reversed);

    delete[] arr;
    return 0;
}

string* reverseArray(string* arry)
{
    string switcher = 0;
    cout << "Original Array \n";
    for(int i = 0; i <5; i++)
    {
        cout << arry[i] << " ";
    }
    for(int i = 0; i < 5; i++) 
    {
        switcher = arry[4-i];
        arry[4-i] = arry[i];
        arry[i] = switcher;
    }
    return arry;
}

void displayArray(string* arry)
{
    cout << "Outputting array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arry[i] << " ";
    }
}
