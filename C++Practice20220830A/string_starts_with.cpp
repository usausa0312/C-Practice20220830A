/////////////////////////////////
// �擪�▖�����w��̕�����ƈ�v���邩
// �S�p�X�y�[�X�ł��\������ 
// C++20
//////////////////////////////////
#include <iostream>
#include <string>

int main() {
    std::string_view s = "Hello world!";
    std::cout << std::boolalpha << s.starts_with("Hello") << std::endl;    // true
    std::cout << std::boolalpha << s.starts_with("world!") << std::endl;    // false
    s = "��Ƃ���� ��������";
    std::cout << std::boolalpha << s.ends_with("��������") << std::endl;    // true
    std::cout << std::boolalpha << s.ends_with("��Ƃ����") << std::endl;    // false
}

//�g�p��@"Stage 1-1"�̂悤�ɖ������@Stage��1-1�Ƃ����ʏ����擾�\