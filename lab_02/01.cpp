#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Enter the sides of the triangle:" ;
    cin >> a;
    cin >> b;
    cin >> c;
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        cout << "Impossible" << endl;
    }
    else {
        double cos1 = (b * b + c * c - a * a) / (2.0 * b * c);
        double cos2 = (a * a + c * c - b * b) / (2.0 * a * c);
        double cos3 = (a * a + b * b - c * c) / (2.0 * a * b);
            if (cos1 * cos2 * cos3 == 0) {
                cout << "Right" << endl;
            }
            else if (cos1 * cos2 * cos3 < 0) {
                cout << "Abtuse" << endl;
            }
            else {
                cout << "Acute" << endl;
            }
    }


    return 0;
}
