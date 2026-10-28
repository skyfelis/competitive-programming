#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, A;

    cin >> N;
    cin >> A;

    int tmp = N % 500;

    if ((A - tmp) >= 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}