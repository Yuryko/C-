#include <iostream>
int main(){
    int num, argX, argY;
    std::cin  >> num;
    while(num--){
        std::cin  >> argX >> argY;
        std::cout << argX  + argY << std::endl;
    }
}