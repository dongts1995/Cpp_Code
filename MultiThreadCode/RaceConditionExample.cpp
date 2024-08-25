#include <iostream>
#include <thread>

int cnt = 0;

void incrementCnt() {
    for(int i = 0; i < 100000; ++i) {
        ++cnt;
    }
}

int main() {
    std::thread t1(incrementCnt);
    std::thread t2(incrementCnt);

    t1.join();
    t2.join();

    std::cout << "cnt value: " << cnt << std::endl;

    return 0;
}