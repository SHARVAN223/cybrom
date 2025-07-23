#include <iostream>
using namespace std;

int main()
{
    int num = 11;
    (num % 2 == 0) ? cout << "even" : cout << "odd";

    int num = 10;
    (num > 10 && num < 20 && num % 2 == 0 && num % 3 == 0) ? cout << "number" : cout << "invalid";
}