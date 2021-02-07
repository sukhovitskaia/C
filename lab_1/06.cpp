#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Your N:";
    int N;
    int n;
    cin >> N;
    n = floor((N - 1) / 2);
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << " ";
        for (int j = i + 1; j <= N - i; j++)
            cout << "*";
        cout << endl;
    }
}
