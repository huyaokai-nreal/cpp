#include<iostream>

struct Persion
{
    int age;
    std::string name;
    float score;
}p1;



int main(){
    p1.score=3.4f;  // 不加f默认是双精度float64，加f是单精度float32
    std::cout << p1.score << std::endl;
    return 0;
}
