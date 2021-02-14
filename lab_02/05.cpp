#include <iostream>
using namespace std;


int main()
{
    cout << "Your number:" << endl;
    int a;
    cin >> a;


    for (int i = 0; i * i <= a; i++) {
        for (int j = i; j * j <= a; j++) {
            for (int k = j; k * k <= a; k++) {
                for (int l = k; l * l <= a; l++) {


                    if (i * i + j * j + k * k + l * l == a) {


                        cout << a << " = " << i << "*" << i
                            << " + " << j << "*" << j << " + ";
                        cout << k << "*" << k << " + "
                             << l << "*" << l << "\n";
                    }
                }
            }
        }
    }
}

