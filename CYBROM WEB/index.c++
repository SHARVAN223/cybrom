#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter anumber:";
    cin >> n;

    for (int i = n; i <= n * 10; i = i + n)
    {
        cout << i << endl;
    }
}