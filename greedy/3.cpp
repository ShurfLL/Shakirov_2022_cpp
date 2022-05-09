#include <iostream>
#include <algorithm>

bool comp(std::pair<int, int> &a, std::pair<int,int> &b) { // комп. для сортировки по времени окончания пары
    return a.second < b.second;
}

int main() {
    int n;
    std::cin >> n;
    int answer = 1;
    std::pair <int, int> a; //время начала и конца хранятся в паре
    std::pair<int, int> *lect = new std::pair<int, int>[n]; //создание, заполнение и сортировка времен лекций
    for (int i = 0; i < n; i++) {
        std::cin >> a.first >> a.second;
        lect[i] = a;
    }
    std::sort(lect, lect + n, comp);
    a = lect[0];
    for (int i = 1; i < n; i++) { //среди оставшихся пар выбираем ту, у которой время конца минимально(спасибо сортировке) и которая не пересекается с текущей.
        if (lect[i].first >= a.second) {
            answer++;
            a = lect[i];
        }
    }
    std::cout << answer;
    delete[] lect;
    return 0;
};