/////////////////////////////////
// メモリ上には存在しないが，Rangeとして扱えるクラス
// C++20
// repマクロよりよさげ
//////////////////////////////////

#include <iostream>
#include <ranges>
#include <vector>
#include <map>

int main() {
    // std::views::iotaはstd::ranges::iota_viewを生成するヘルパ関数
    for (auto i : std::views::iota(0, 100)) {
        std::cout << i << '\n';
    }

    // 以下と同じ
    // for (int i = 0; i < 100; ++i) {
    //     std::cout << i << '\n';
    // }

    std::vector<int> a = { 1, 2, 3 };

    // 条件を満たす要素のみを返す
    for (auto i : std::views::filter(a, [](int i) { return i % 2 == 1; })) {
        std::cout << i << '\n';
    }
    // 1
    // 3

    // 全ての要素に関数を適用して返す
    for (auto i : std::views::transform(a, [](int i) { return i * 2; })) {
        std::cout << i << '\n';
    }
    // 2
    // 4
    // 6

    // 要素の連結を返す
    for (auto i : std::views::join(std::vector{ a, a })) {
        std::cout << i << '\n';
    }
    // 1
    // 2
    // 3
    // 1
    // 2
    // 3

    // イテレータからn個先までの要素を返す
    for (auto i : std::views::counted(a.begin(), 2)) {
        std::cout << i << '\n';
    }
    // 1
    // 2

    // 各要素のtupleのi番目の要素を返す
    // std::views::keys, std::views::valuesはそれぞれstd::elements<0>, std::elements<1>と同じ
    for (auto i : std::views::values(std::map<int, int>{ {1, 2}, { 2, 3 }})) {
        std::cout << i << '\n';
    }
    // 2
    // 3

    // 要素の逆順を返す
    for (auto i : std::views::reverse(a)) {
        std::cout << i << '\n';
    }
    // 3
    // 2
    // 1
}