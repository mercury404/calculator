#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    
    bool repeat= true;
    char answer;
    while (repeat) {
        char type;
        cout << "Choose a type: ";
        cout << "1 = Addition, 2 = Subtraction, 3 = Multiplication, 4 - Division: ";
        cin >> type;
        
        double number1, number2;
        cout << "Choose 2 numbers: ";
        cin >> number1 >> number2;
        
        switch(type){
            case '+':
                cout << number1 + number2;
                break;
            case '-':
                cout << number1 - number2;
                break;
            case '*':
                cout << number1 * number2;
                break;
            case '/':
                cout << number1 / number2;
                break;
            default:
                cout << "Invalid input";
                return EXIT_FAILURE;
        }
        cout << "\nDo you want to repeat? [y/n]: ";
        cin >> answer;
        if(tolower(answer) == 'n') 
            repeat=false;
    }
    
    return EXIT_SUCCESS;
}
