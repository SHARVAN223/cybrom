#include <iostream>
using namespace std;

int main()
{

    // 1...
    // int num = 11;
    // (num % 2 == 0) ? cout << "even" : cout << "odd";

    // 2...
    // int num = 10;
    // (num > 10 && num < 20 && num % 2 == 0 && num % 3 == 0) ? cout << "number" : cout << "invalid";

    // 3...
    // int num = 30;
    // (num > 20 && num < 40 && num % 3 == 0) ? cout << "number" : cout << "invalid";

    // 4...
    // cout << "enter age:";
    // int age;
    // cin >> age;

    // cout << "enter criminal recoard";
    // int cr;
    // cin >> cr;
    // (age > 18 && cr == 0) ? cout << "eliegible" : cout << "no eligible";

    // 5...
    // cout << "enter age:";
    // int age;
    // cin >> age;

    // cout << "enter criminal recoard";
    // int cr;
    // cin >> cr;
    // (age > 18) ? (cr == 0) ? cout << "eliegible" : cout << "not eligible" : cout << "invalid";

    // 6...
    int pin;
    cout << "enter a ATM pin:";
    cin >> pin;
    (pin == 1234) ? cout << "cw" : (cout << "invalid try again:"),
        cin >> pin;
    (pin == 1234) ? cout << "cw" : (cout << "invalid password try again:"),
        cin >> pin;
    (pin == 1234) ? cout << "cw" : (cout << "card is blocked");
    cout << endl;

    cout << "enter a ATM pin:";
    cin >> pin;
    (pin == 1234) ? cout << "cw" : (cout << "invalid try again:"),
        cin >> pin;
    (pin == 1234) ? cout << "cw" : (cout << "invalid password try again:"),
        cin >> pin;
    (pin == 1234) ? cout << "cw" : (cout << "card is 1 month blocked");
}