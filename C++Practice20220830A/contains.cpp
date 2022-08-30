/////////////////////////////////
// 連想配列のキーに値が存在するか　
// C++20
//////////////////////////////////
#include <iostream>
#include <map>

int main() {
    std::map<int, int> a{ {1, 2}, {1, 3}, {3, 4} };

    std::cout << std::boolalpha;
    std::cout << a.contains(1) << std::endl;   // true
    std::cout << a.contains(4) << std::endl;   // false
}