#include <iostream>
#include <algorithm>

int main() {
    int S, N; //обозначения как в задаче
    int answer = 0;
    std::cin >> S >> N;
    int *user_size = new int[N]; //создаем, заполняем и соритруем масив с размерами данных
    for (int i = 0; i < N; ++i) {
        std::cin >> user_size[i];
    }
    std::sort(user_size, user_size + N);
//    for (int i = 0; i < N; ++i) {
//        std::cout << user_size[i];
//    }
    for (int i = 0; S > 0; i++) { //пока можем, заполняем отсортированными по размеру данными.
        S -= user_size[i];
        answer++;
    }
    std::cout << answer - 1;
    delete []user_size;
    return 0;
}
