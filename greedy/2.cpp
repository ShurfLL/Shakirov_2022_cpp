#include <iostream>
#include <algorithm>

int main() {
    int N, k, S; //обозначения из задачи
    int answer = 0;
    int coord = 0; //нынешняя координата машины
    std::cin >> N >> k;
    std::cin >> S;
    int *gas_coord = new int[S + 1]; // массив с коорд заправок+пункта B
    for (int i = 0; i < S; ++i) {
        std::cin >> gas_coord[i];
    }
    gas_coord[S] = N;
    for (int i = 0; i < S; i++) {
        if (coord + k >= N) break; //Доедет до B без подзаправки
        if (coord + k >= gas_coord[i] and coord + k < gas_coord[i+1]) { //Доедет до максимально далекой заправки
            answer++;
            coord = gas_coord[i];
        }
        else if (coord + k < gas_coord[i]) { //никуда не доедет
            answer = -1;
            break;
        }
    }
    std::cout << answer;
    delete []gas_coord;
    return 0;
}
