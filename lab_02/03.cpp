#include <iostream>
using namespace std;

int main(){

    int n;
    do{
        cout << "n = ";
        cin >> n;
    }while(n < 1);

    int buf = n;
    for (int i = 2; i <= buf;){

        int flag = 1;
        for (int j = 2; j < i; ++j)
            if (i%j == 0 && i != j){
                flag = 0;
                break;
            }

        if (flag == 1 && buf%i == 0){
            cout << i << endl;
            buf /= i;
        }else
            ++i;
    }

}
