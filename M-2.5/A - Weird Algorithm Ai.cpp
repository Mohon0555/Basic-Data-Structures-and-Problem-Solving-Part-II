#include <iostream>
#include <list>

using namespace std;

list<long long> collatz(long long n)
{
    list<long long> seq;
    while (n != 1)
    {
        seq.push_back(n);
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
    }
    seq.push_back(n);
    return seq;
}

int main()
{
    long long n;

    cin >> n;
    if (n <= 0)
    {
        return 0;
    }
    list<long long> seq = collatz(n);
    for (auto it = seq.begin(); it != seq.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
