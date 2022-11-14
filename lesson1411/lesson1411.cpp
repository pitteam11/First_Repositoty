#include <iostream>
#include "my_test.h"
#include <time.h>
#include <vector>

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
    std::cout << new_fun1() << std::endl;

    std::cout << my_global_value << std::endl;
    std::cout << "Hello World!\n";
    std::cout << "Hello " << MY_NAME << "!\n";
    std::cout << QUBE(2+1) << std::endl; // 2+1*2+1*2+1
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