#include <iostream>

using namespace std;

int main()
{
    int a, b, temp, sum = 0;
    cin >> a >> b;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++)
        sum += i;
    cout << sum << endl;

    return 0;
}