#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Your N:";
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++)
            cout << '*';
        cout << std::endl;
    }


}
