#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int x, y, sum, k;
    sum = 0;
    for (int i = 1; i <= 5; i++){
        k = 5;
        cout << "Введите X: "; cin >> x;
        cout << "Введите Y: "; cin >> y;

        srand((unsigned)time(NULL));

        int xi = rand() % 11 - 5;
        int yi = rand() % 11 - 5;

        x += xi; y += yi;

        for (int j = 1; j <= 6; j++){
            if (x*x + y*y < j*j){
                sum+=k;
                break;
            }
            k = ~-k;
        }
        cout << "Текущие баллы: ";
        cout << sum << endl;
    }
    if (sum < 10) cout << "Лузер)"<< endl;
    else cout << "Молочик" << endl;
    return 0;
}
