/////////////////////////////////
// 先頭や末尾が指定の文字列と一致するか
// 全角スペースでも可能だった 
// C++20
//////////////////////////////////
#include <iostream>
#include <string>

int main() {
    std::string_view s = "Hello world!";
    std::cout << std::boolalpha << s.starts_with("Hello") << std::endl;    // true
    std::cout << std::boolalpha << s.starts_with("world!") << std::endl;    // false
    s = "りとちゃん すきすき";
    std::cout << std::boolalpha << s.ends_with("すきすき") << std::endl;    // true
    std::cout << std::boolalpha << s.ends_with("りとちゃん") << std::endl;    // false
}

//使用例　"Stage 1-1"のように命名し　Stageと1-1という別情報を取得可能