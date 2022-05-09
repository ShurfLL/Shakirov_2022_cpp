#include <iostream>

int main() {
    int S;
    int answer = 0;
    std::cin >> S;
    while (S != 0) {
        if (S >= 100) {S -= 100; answer++;}
        else if (S >= 50) {S -= 50; answer++;}
        else if (S >= 25) {S -= 25; answer++;}
        else if (S >= 5) {S -= 5; answer++;}
        else {S -= 1; answer++;}
//        std::cout << S << ' ' << answer << '\n';
    }
    std::cout << answer;
    return 0;
}
