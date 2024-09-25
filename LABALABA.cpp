

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double TIME[9] = {0, 15, 30, 45, 60, 120, 180, 240, 300};
    double t0 = 100 ;
    double tv = 20;
    int i = 0;
    while (i <= 8) {
    int T = TIME[i];
    double t = tv + (t0 - tv) * exp(-T/20);
    cout << "СПУСТЯ ВРЕМЯ  " << T << " МИНУТ ТЕМПЕРАТУРА ПЛИТЫ " << t << " ГРАДУСОВ ЦЕЛЬСИЯ" << endl;
    i++;
}}
