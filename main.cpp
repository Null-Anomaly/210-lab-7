/*COMSC 21 | Lab 7 | Lawrence Bryant
IDE used: VSC*/

#include <iostream>
using namespace std;

char* reverseArray(char*);
void displayArray(char*);

//The main function of the program
int main()
{
    char* arr[5] = {"Billy", "Bob", "Joe", "Burt", "Tam"};
    char *reversed;
    reversed = reverseArray(*arr);
    displayArray(reversed);

    return 0;
}

//The function to reverse the array
char* reverseArray(char* arry)
{
    char switcher;
    cout << "Original Array \n";
    for(int i = 0; i <5; i++)
    {
        cout << arry[i] << " ";
    }
    for(int i = 0; i < 5; i++) 
    {
        switcher = arry[5-i];
        arry[5-i] = arry[i];
        arry[i] = switcher;
    }
    return arry;
}

//Displays an array
void displayArray(char* arry)
{
    cout << "Reversed Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arry[i] << " ";
    }
}
