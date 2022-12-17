#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    int x, n;
    cin >> x >> n;
    cout << x << " " << n << endl;
    double left = 0, right = 1000000;
    double mid = (left + right) / 2;
    int iteration = 1;
    while (abs(x - pow(mid, n)) > 0.000000001)
    {
        cout << left << " " << mid << " " << right << " " << iteration << endl;

        iteration++;
        if (x > pow(mid, n))
            left = mid;
        else
            right = mid;
        mid = (left + right) / 2;
    }

    cout << mid << " " << iteration << endl;

    return 0;
}