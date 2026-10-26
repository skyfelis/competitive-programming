#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, tmp;
    cin >> A >> B;
    int ans = A + B;
    if (ans < 10)
    {
        tmp = 1;
    }
    else if (10 <= ans)
    {
        tmp = 2;
    }

    cout << tmp << endl;
}