// ask user to enter two numbers and tell user which number is bigger

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is bigger." << endl;
    } else {
        cout << num2 << " is bigger." << endl;
    }

    return 0;
}