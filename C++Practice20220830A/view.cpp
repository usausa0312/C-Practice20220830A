/////////////////////////////////
// ��������ɂ͑��݂��Ȃ����CRange�Ƃ��Ĉ�����N���X
// C++20
// rep�}�N�����悳��
//////////////////////////////////

#include <iostream>
#include <ranges>
#include <vector>
#include <map>

int main() {
    // std::views::iota��std::ranges::iota_view�𐶐�����w���p�֐�
    for (auto i : std::views::iota(0, 100)) {
        std::cout << i << '\n';
    }

    // �ȉ��Ɠ���
    // for (int i = 0; i < 100; ++i) {
    //     std::cout << i << '\n';
    // }

    std::vector<int> a = { 1, 2, 3 };

    // �����𖞂����v�f�݂̂�Ԃ�
    for (auto i : std::views::filter(a, [](int i) { return i % 2 == 1; })) {
        std::cout << i << '\n';
    }
    // 1
    // 3

    // �S�Ă̗v�f�Ɋ֐���K�p���ĕԂ�
    for (auto i : std::views::transform(a, [](int i) { return i * 2; })) {
        std::cout << i << '\n';
    }
    // 2
    // 4
    // 6

    // �v�f�̘A����Ԃ�
    for (auto i : std::views::join(std::vector{ a, a })) {
        std::cout << i << '\n';
    }
    // 1
    // 2
    // 3
    // 1
    // 2
    // 3

    // �C�e���[�^����n��܂ł̗v�f��Ԃ�
    for (auto i : std::views::counted(a.begin(), 2)) {
        std::cout << i << '\n';
    }
    // 1
    // 2

    // �e�v�f��tuple��i�Ԗڂ̗v�f��Ԃ�
    // std::views::keys, std::views::values�͂��ꂼ��std::elements<0>, std::elements<1>�Ɠ���
    for (auto i : std::views::values(std::map<int, int>{ {1, 2}, { 2, 3 }})) {
        std::cout << i << '\n';
    }
    // 2
    // 3

    // �v�f�̋t����Ԃ�
    for (auto i : std::views::reverse(a)) {
        std::cout << i << '\n';
    }
    // 3
    // 2
    // 1
}