#include <iostream>
using namespace std;

void subarrayWithgivenSum()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = 0, st = 0 - 1, en = -1, sum = 0;
    while (j < n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }
    if (sum == s)
    {
        cout << i+1 << " " << j << endl;
        return;
    }
    while (j < n)
    {
        sum += a[j];
        if (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if(sum==s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
}
int main()
{
    subarrayWithgivenSum();
    return 0;
}