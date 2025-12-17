#include <iostream>
#include <string>

auto greet(auto name) {
    return "Hello " + name;
}

int main() {
    std::string who = "World";
    std::cout << greet(who) << '\n';
}