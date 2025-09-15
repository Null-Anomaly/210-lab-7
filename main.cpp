/*COMSC 21 | Lab 7 | Lawrence Bryant
IDE used: VSC*/

#include <iostream>
using namespace std;

void reverseArray(string*);
void displayArray(string*);

//The main function of the program
int main()
{
    string* arr = nullptr;
    const int SIZE = 5;
    arr = new string[SIZE];
    reverseArray(arr);
    displayArray(arr);

    delete[] arr;
    return 0;
}

void enterArrayData(double* arry)
{
    double safety = 0;
    cout << "Data entry for the array: \n";
    for(int i = 0; i < 5; i++) 
    {
        cout << "> Element #" << i << ": ";
        cin >> safety;
        arry[i] = safety;
    }
    cout << "Data entry complete.\n";
}

void outputArrayData(double* arry)
{
    cout << "Outputting array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arry[i] << " ";
    }
}

double sumArray(double* arry)
{
    double total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += arry[i];
    }
    return total;
}