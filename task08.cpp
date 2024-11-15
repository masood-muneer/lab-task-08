#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Enter a single-digit integer (0 to 9): ";
    cin >> num;
    switch (num) {
        case 0:
            cout << "zero" << endl;
            break;
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            break;
        case 9:
            cout << "nine" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a number between 0 and 9." << endl;
            break;
    }

    return 0;
}