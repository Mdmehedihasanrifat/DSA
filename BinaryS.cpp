#include <bits/stdc++.h>
#define Dpos(n) fixed << setprecision(n)
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    int i = 1;
    while (test_case--)
    {
        double ab, ac, bc, ratio;
        cin >> ab >> ac >> bc >> ratio;
        double new_ratio = ratio / (ratio + 1);

        double result = ab * sqrt(new_ratio);
        result *= 1e9; // Multiply by 10^7
        result = floor(result); // Floor the number
        result /= 1e9; // Divide by 10^7

        cout << "Case " << i++ << ": " << Dpos(7) << result << endl;
    }
}
