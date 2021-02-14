#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    int i, j, k, count = 0;
    cout << "Your number:" << endl;
    cin >> N;
    k = sqrt(N);
    for(i = 1; i < k; i ++)
        for(j = i; j < k; j ++)
        if ((i * i * i + j * j * j) == N)
    {cout << i << "  " << j << endl;
     count++;
    }
    if (count == 0)
    cout << "There are no such numbers" << endl;
    return 0;
}

