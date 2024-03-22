#include <iostream>
#include <stdio.h>

int main(){
    int a;
    int b;
    std::cout << "insert your number :";
    std::cin >> a;
        for(b=10;b<=a;b++)
            for(a=100;a>b;a++)
                // if (b == 99999999){
                //     break;
                // }
                // else continue;
    // std::cout << "your resualt is :" ;
    std::cout << b ;
    return 0;
}
