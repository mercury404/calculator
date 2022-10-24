#include<iostream>
using namespace std;
int main() {
    while (true) {
        string type;
        cout << "Choose a type: ";
        cout << "1 = Addition, 2 = Subtraction, 3 = Multiplication, 4 - Division: ";
        cin >> type;
        int number1;
        int number2;
        cin >> number1;
        cin >> number2;
        if (type == "1") {
            int sum = number1 + number2;
            cout << sum;
        }
        else if (type == "2") {
            int sum = number1 - number2;
            cout << sum;
        }
        else if (type == "3") {
            int sum = number1 * number2;
            cout << sum;
        }
        else if (type == "4") {
            int sum = number1 / number2;
            cout << sum;
        }
        cout << " \n";
    }
}