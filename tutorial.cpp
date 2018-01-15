#include <iostream>
#include <map>

int main(int argc, const char * argv[]) {
    int a;
    std::map<char, int> items;
    items['a'] = 1;
    items['b'] = 2;
    for (auto i : items) {
        std::cout << i.first;
    }
    std::cin >> a;
    return 0;
}