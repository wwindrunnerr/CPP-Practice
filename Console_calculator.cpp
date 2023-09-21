#include <iostream>

int main() {

char op;
double num1,num2,result;

std:: cout << "***************CALCULATOR***************\n";

std::cout << "Enter either (+ - * /):  ";
std::cin >> op;

std::cout << "Enter the first number: ";
std::cin>> num1;

std::cout << "Enter the second number: ";
std::cin>> num2;

switch(op){
    case '+' :
        result = num1 + num2;
        std::cout << "Result equals: "<< result <<std::endl;
    break;
    case '-' :
        result = num1 - num2;
        std::cout << "Result equals: "<< result <<std::endl;
    break;
    case '*' :
        result = num1*num2;
        std::cout << "Result equals: "<< result <<std::endl;
    break;
    case '/':
        result = num1/num2;
        std::cout << "Result equals: "<< result <<std::endl;
    break;
    default:
        std::cout << "Please enter either (+ - * /):  "<< std::endl;
}
    std::cout <<"****************************************";

    return 0;
}