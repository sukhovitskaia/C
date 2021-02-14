#include <iostream>

using namespace std;

int main()
{
    cout << "Your sequance" << endl;
    int n;
    cin >> n;

    int max = n;
    int count = 0;

    while (n != 0) {
        if (n > max) {
            max = n;
            count = 1;
        }
        else if (n == max) {
            count += 1;
        }

        cin >> n;
    }

    cout << "Maximum: " << max << endl;
    cout << "Repeats: " << count << endl;
    return 0;
}
