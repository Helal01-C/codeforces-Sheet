#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    string r = s;
    reverse(r.begin(), r.end());

    return s == r;
}

void wonderful_number(int N)
{
    if (N % 2 == 0)
    {
        cout << "NO";
        return;
    }

    string binary = "";

    while (N > 0)
    {
        binary += (N % 2) + '0';
        N /= 2;
    }

    if (check(binary))
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    int n;
    cin >> n;
    wonderful_number(n);
    return 0;
}