// main.cpp - 主源文件

#include <iostream>
#include "head.h" // 包含自定义头文件

int globalVar = 42; // 定义全局变量并初始化

int main() {
    std::cout << "The value of globalVar is: " << globalVar << std::endl;
    return 0;
}
