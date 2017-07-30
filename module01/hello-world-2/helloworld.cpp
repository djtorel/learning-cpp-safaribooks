// helloworld.cpp
// My first C++ Program - Dominic Torruellas
#include <iostream>
#include <string>

constexpr auto greeting = "Hello, World!";
auto another_greeting = [] (std::string m) { return std::string("Hello ") + m; };

int main() {

  std::cout << greeting << std::endl;
  std::cout << another_greeting("Dom!") << std::endl;

}