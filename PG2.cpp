// Author: Danny Pham
//
// Serial Number: 35
//
// Due Date: 09/19/2022
// Programming Assignment Number 2
// Fall 2022 - CS3358 - 001
//
// Instructor: Husain Gholoom
//
// The purpose of this program is to practice passing vectors between functions

#include <iostream>
#include <vector>
#include <random>

using namespace std;

void populate(vector<int> &v, int SIZE);
void print(vector<int> &v, int SIZE);

int main()
{
    int SIZE;
    char choice = '1';
    vector<int> v;

    cout << "Welcome to My Vector APP"
         << "\n\n";
    cout << "The purpose of this app is to: " << endl;
    cout << " A. Generate random numbers between 0 and 8 (exclusive) and stores them" << endl;
    cout << "    in the vector " << endl;
    cout << " B. Display the array." << endl;
    cout << " C. Display a second output in 2 column list. The first column is a list of the" << endl;
    cout << "    distinct array elements; the second column is the count of the number of" << endl;
    cout << "    occurences of each element. The list should be sorted on entries in the" << endl;
    cout << "    first column, largest to smallest." << endl;
    cout << " D. Remove the duplicate numbers from the same generated vector array" << endl;
    cout << "    and display the array after all duplicate number were removed" << endl;
    cout << " E. Sort the vector array in an ascending order from lowest to highest. Display" << endl;
    cout << "    the sorted vector array"
         << "\n\n";

    while (choice != '9')
    {
        cout << "Select one of the following: "
             << "\n\n";
        cout << " 1 - Generate the Array." << endl;
        cout << " 9 - Exit the App." << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
        cout << endl;
        if (choice != '1' && choice != '9')
        {
            cout << "Invalid selection" << endl;
            continue;
        } else if(choice == '9'){
            break;
        }
        cout << "Enter the size of the array: " << endl;
        cin >> SIZE;
        if (SIZE < 0 || SIZE > 30)
        {
            cout << "Invalid. Size must be <= 30" << endl;
        }
        else
        {
            cout << "The generated array is:" << endl;
            populate(v, SIZE);
            print(v, SIZE);
        }
        // cout << endl
        //      << "Select one of the following: "
        //      << "\n\n";
        // cout << " 1 - Generate the Array." << endl;
        // cout << " 9 - Exit the App." << endl;
        // cout << endl
        //      << "Enter your Choice: ";
    }
    if(choice == '9')
        {
            cout << "Thanks for Using the Vector APP." << endl;
            cout << "Danny Pham" << endl;
            cout << "9-19-2022" << endl;
        }
    // else
    // {
    //     cout << "Invalid Selection" << endl;
    // }

    return 0;
}

void populate(vector<int> &v, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        int num = (rand() % 7) + 1;
        v.push_back(num);
    }
}

void print(vector<int> &v, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}