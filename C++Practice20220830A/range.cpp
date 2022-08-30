/////////////////////////////////
// コンテナを範囲で指定できる
// C++20
// algorithm内の関数は大体いけるぽい
//////////////////////////////////

#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> a = { 3, 2, 1 }, b = { 3, 2, 1 };

    // 範囲を直接扱う
    std::ranges::sort(a);
    // 従来通り，開始イテレータと終了イテレータのペアを渡す
    std::ranges::sort(b.begin(), b.end());
    for (auto v : a)
        std::cout << v;
    for (auto v : b)
        std::cout << v;

    // find
    if (a.end() != std::ranges::find(a, (int)5)) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    };

}