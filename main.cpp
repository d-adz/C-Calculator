#include <iostream>
using namespace std;

int main() {
    int num = -1;
    int a,b;

    while (num != 0) {
        cout << "Welcome to the Calculator!" << endl;
        cout << "Pick a number: " << endl;
        cout << "1 - Addition" << endl;
        cout << "2 - Subtraction" << endl;
        cout << "3 - Multiplication" << endl;
        cout << "4 - Division" << endl;
        cout << "Enter 0 to exit." << endl;

        cin >> num;


        switch (num) {
        case 1:
            cout << "You chose Addition!" << endl;
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << a << " + " << b << " = " << a + b << endl;

            break;
        case 2:
            cout << "You chose Subtraction!" << endl;
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case 3:
            cout << "You chose Multiplication!" << endl;
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case 4:
            cout << "You chose Division!" << endl;
            cout << "Enter two numbers : ";
            cin >> a >> b;
            cout << a << " / " << b << " = " << a / b << endl;
            break;
        case 0:
            cout << "Exiting the Calculator. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please pick a number between 0 and 4." << endl;
        }

        cout << endl;
    }

    return 0;
}
