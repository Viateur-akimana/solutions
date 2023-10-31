#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        cout << "MENU" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Modulus" << endl;

        int operation;
        cout << "Enter your choice: ";
        cin >> operation;

        int num1, num2, result;
        cout << "Enter your two numbers: ";
        cin >> num1 >> num2;

        switch(operation) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                if(num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error: Division by zero!" << endl;
                    continue;
                }
                break;
            case 5:
                if(num2 != 0) {
                    result = num1 % num2;
                } else {
                    cout << "Error: Modulus by zero!" << endl;
                    continue;
                }
                break;
            default:
                cout << "Invalid choice!" << endl;
                continue;
        }

        cout << "Result: " << result << endl;

        cout << "Continue? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}
