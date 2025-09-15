#include <iostream>

void task_1() {
    std::cout <<"Hello, World!" << std::endl;
}

void task_2() {
    int x = 5;
    std::cout << "x = " << x << std::endl;
}

void task_3() {
    int age;
        std::cout << "Enter your age: ";
        std::cin >> age; 
        std::cout << "Your " << age << " age" << std::endl;
}

void task_4() {
    int num1, num2, sum;

    std::cout << "Enter two number: ";
    std::cin >> num1 >> num2;

    sum = num1 + num2;

    std::cout << "Sum: " << sum << std::endl;
}

void task_5() {
     const double PI = 3.14159265358979323846; 
     
    double radius; 

    std::cout << "Enter radius: "; 
    std::cin >> radius;

    double circumference = 2 * PI * radius; 

    std::cout << "Weight: " << circumference << std::endl;
}

void task_6() {
    int a = 10;
    int b = 3;

    int quotient = a / b;
    int remainder = a % b;

    std::cout << "a / b: " << quotient << std::endl;
    std::cout << "a % b: " << remainder << std::endl;
}

void task_7() {
    int counter = 0;

    for (int i = 0; i < 5; ++i) {
        counter++; 
    }
    std::cout << "Counter: " << counter << std::endl;
}

void task_8() {
    
    double number;

    std::cout << "Enter number: ";
    std::cin >> number; 

    double square = number * number;

    std::cout << "Square " << number << " equals: " << square << std::endl;
}

void task_9() {

    int score = 100; 
    score += 15;    
    std::cout << score << std::endl; 
}

void task_10() {
  
    double price;
    
    std::cout << "Enter price: "; 
    std::cin >> price; 

    std::cout << "Price: " << price << std::endl; 
}

int main() {
    task_2();
    task_1();
    task_3();
    task_4();
    task_5();
    task_6();
    task_7();
    task_8();
    task_9();
    task_10();

    return 0;
}
