//
//  main.cpp
//  HM - 22
//
//  Created by Дмитрий Сергеевич on 18.09.2023.
//

#include <iostream>

void yuhuu (int* adress, int power) {
    int result = 1;
    for (int i = 0; i < power; i++){
        result *= *adress;
    }
    *adress = result;
}



int main(int argc, const char * argv[]) {
    
    //task1
    int arr[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptr = arr;
    for (int i = 0; i < 10; i+= 2) {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + i +1);
        *(ptr + i + 1) = temp;
    }
    for (int i = 0; i < 10; i++){
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    
    //task2
    int num, power;
    std::cout << "Введите число -> ";
    std::cin >> num;
    std::cout << "Введите степень -> ";
    std::cin >> power;
    yuhuu(&num, power);
    std::cout << num << std::endl;
    
    
    
    
    
    
    
        
    return 0;
}
