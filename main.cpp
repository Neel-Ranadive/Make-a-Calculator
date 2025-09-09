/**
* Name: Neel Ranadive
* Program Name: Make a Calculator
* Date: 9/9/2025
* Extra: 
*/

#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    int answer;
    float answerf;
    cout << "Please enter a number: ";
    cin >> x;
    cout << "Please enter another number: ";
    cin >> y;
    int option;
    cout << "Pick a number one to 7 to see one of the number combinations made through he numbers you provided: ";
    cin >> option;
    switch (option)
    {
    case 1:
        answer = x + y;
        cout << "The sum of the two numbers is " << answer << endl;
        break;
    case 2:
        answer = x - y;
        cout << "The difference  of the two numbers is " << answer << endl;
        break;
    case 3:
        answer = x * y;
        cout << "The product of the two numbers is " << answer << endl;
        break;
    case 4:
        answerf = float(x) / float(y);
        cout << "The quotient of the two numbers is " << answerf << endl;
        break;
    case 5:
        answer = x % y;
        cout << "The remainder of the two numbers is " << answer << endl;
        break;
    case 6:
        answer = ++x;
        cout << "The first number incremented by one is " << answer << endl;
        break;
    case 7:
        answer = --y;
        cout << "The second number decremented by one is " << answer << endl;
        break;
    }

    return 0;
}