#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

#define M 1000000
bitset<M> marks;
uset<int> primes;

void sieve(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (marks[i] == false)
        {
            for (int j = i + i; j <= n; j += i)
            {
                marks[j] = true;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (marks[i] == false)
        {
            primes.insert(i);
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve(1e6);

    int n;
    cin >> n;
    llint num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        llint root = sqrt(num);
        if (primes.find(root) != primes.end() && root * root == num)
        {
            cout << "YES" << endn;
        }
        else
        {
            cout << "NO" << endn;
        }
    }
}