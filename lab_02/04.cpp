#include <iostream>
using namespace std;

bool checkPrime(int n)
 {
    if (n <= 1) return false;
    for (register int i = 2; i < n; i++) {
        if (n%i == 0)return false;
    }
    return true;
}

int prime(int number)
{
    while (true)
    {

        int counter = 0;
        int numbers = 0;
        while (counter < number)
        {
            numbers++;
            if (checkPrime(numbers))counter++;
        }


       return numbers;

    }

}

int main()
{
    cout << "Your number:" << endl;
    int n;
    cin >> n;
    cout << "Prime number: " << prime(n) << endl;
    return 0;
}


