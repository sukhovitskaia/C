#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;

    cout << "Enter your number:";
    cin >> n;

    while (n!=0)
    {
        sum += n%10;
        n /= 10;
    }
    cout << "sum = " << sum << endl;

    return 0;
}
