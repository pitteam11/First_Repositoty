#include <iostream>
#include "my_test.h"
#include <time.h>
#include <vector>
#include <bitset>

#define DEBUG

#define QUBE(X) (X)*(X)*(X)
#define RAND(min, max) (rand() % ((max) - (min) + 1) + (min))

#define concat(a,b) a##b

#define MYFACTORY(name, num) int name##num(){return num;}

int fun1() {
    int xy = 10;
    // Для компилятора cout<<xy;
    // на экране 10
    std::cout << concat(x, y); //xy;
    std::cout << xy;
    return 0;
}

//#define int int64_t

#define clocal

const int global_const = 15;

int my_rand(int min, int max) {
    return rand() % ((max)-(min)+1) + (min);
}

MYFACTORY(new_fun, 1)
MYFACTORY(new_fun, 2)
MYFACTORY(new_fun, 3)
MYFACTORY(new_fun, 4)


int main()
{
    unsigned char val1 = 0b11110000; // 0xFF // 255 //;
    val1 = val1 | 0b10111001;

    std::cout << std::bitset<8>{(val1)} << std::endl;
    std::cout << std::bitset<8>{(val1)} << std::endl;

    unsigned int val = 13;
    unsigned int val4 = val >> 1;
    unsigned int val5 = val << 1;

    std::cout << "out bin-shift:" << std::endl;
    std::cout << std::bitset<32>{(val)} << " " << val << std::endl;
    std::cout << std::bitset<32>{(val4)} << " " << val4 << std::endl;
    std::cout << std::bitset<32>{(val5)} << " " << val5 << std::endl;


    std::cout << std::bitset<32>{(0x03 << 13)} << " " << std::endl;

    val <<= 3;  


}

void test_preprocessor() {
    std::cout << new_fun1() << std::endl;
    std::cout << my_global_value << std::endl;
    std::cout << "Hello World!\n";
    std::cout << "Hello " << MY_NAME << "!\n";
    std::cout << QUBE(2 + 1) << std::endl; // 2+1*2+1*2+1
    srand(time(0));
    for (int k = 0; k < 10; k++) {
        std::cout << RAND(-10, 10) << " ";
    }
    std::cout << std::endl;

    int arr[5]{ 1,2,3,4,5 };
    std::vector<int> my_vector(5);

    /*
    my_vector[0] = 12;
    my_vector[1] = 13;
    my_vector[2] = 7;
    my_vector[3] = 4;
    my_vector[4] = 1;
    */

    typedef std::vector<std::vector<int>> matr;
    matr Matr;

    for (int k = 0; k < my_vector.size(); k++) {
        std::cout << my_vector[k] << " ";
    }
    std::cout << std::endl;

    if (0) {

    }
#if 0 
#error Это ошибка
//#ifndef // если макрос DEBUG - НЕ обявлен, то выполняем до #endif или #else до 
//#ifdef DEBUG  // если макрос DEBUG - обявлен, то выполняем до #endif или #else до 
#else
#endif // DEBUG
}