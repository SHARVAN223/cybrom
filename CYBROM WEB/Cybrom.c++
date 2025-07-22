#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 45;

    cout << a++ + a-- + --a - b++ + --b;
    // cout << a++ + a--;
}