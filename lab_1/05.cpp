#include <iostream>

using namespace std;

int main()
{
    cout << "Your N:";
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++)
            cout << "*";
        cout << endl;
    }
}
