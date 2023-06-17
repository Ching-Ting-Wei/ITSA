#include <iostream>

using namespace std;

int main()
{
    int n;
    bool isprime;
    cin >> n;
    for (int i = n - 1; i >= 2; i--)
    {
        isprime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            cout << i << endl;
            break;
        }
    }
}