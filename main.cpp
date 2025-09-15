/*COMSC 21 | Lab 7 | Lawrence Bryant
IDE used: VSC*/

#include <iostream>
using namespace std;

string* reverseArray(string*);
void displayArray(string*);

//The main function of the program
int main()
{
    string *arr = nullptr;
    arr = new string[5];
    arr[0] = "Billy";
    arr[1]= "Bob";
    arr[2]= "Joe";
    arr[3]= "Burt";
    arr[4]= "Tam";
    string *reversed;
    reversed = reverseArray(arr);
    displayArray(reversed);

    return 0;
}

//The function to reverse the array
string* reverseArray(string *arry)
{
    string switcher;
    cout << "Original Array: ";
    for(int i = 0; i <5; i++)
    {
        cout << arry[i] << " ";
    }
    for(int i = 0; i < 5; i++) 
    {
        switcher = arry[4-i];
        cout << switcher;
        arry[4-i] = arry[i];
        arry[i] = switcher;
    }
    cout << "Test";
    for(int i = 0; i <5; i++)
    {
        cout << arry[i] << " ";
    }
    return arry;
}

//Displays an array
void displayArray(string* arry)
{
    cout << "\nReversed Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arry[i] << " ";
    }
}
