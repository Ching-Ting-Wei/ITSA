#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 35 == 0)
        {
            if (i == 35)
                cout << i;
            else
                cout << " " << i;
        }
    }
    cout << endl;
    return 0;
}