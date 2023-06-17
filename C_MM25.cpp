#include <iostream>

using namespace std;

int main()
{
    int N;
    int accumulate = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0)
            accumulate += i;
    }

    cout << accumulate << endl;
    return 0;
}