/////////////////////////////////
// �R���e�i��͈͂Ŏw��ł���
// C++20
// algorithm���̊֐��͑�̂�����ۂ�
//////////////////////////////////

#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> a = { 3, 2, 1 }, b = { 3, 2, 1 };

    // �͈͂𒼐ڈ���
    std::ranges::sort(a);
    // �]���ʂ�C�J�n�C�e���[�^�ƏI���C�e���[�^�̃y�A��n��
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