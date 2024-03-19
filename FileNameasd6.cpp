#include <iostream>


int sumOfFirstN(int N, int current_sum = 0) {
    
    if (N <= 0) {
        return current_sum;
    }
   
    return sumOfFirstN(N - 1, current_sum + N);
}
using namespace std;
int main() {
    
    setlocale(LC_ALL, "Ukrainian");
    int N;
    cout << "¬вед≥ть значенн€ N: ";
    cin >> N;

    
    cout << "—ума перших " << N << " натуральних чисел: " << sumOfFirstN(N) << endl;

    return 0;
}
