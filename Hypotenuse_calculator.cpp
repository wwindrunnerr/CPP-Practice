#include <iostream>
#include <cmath>


int main(){

//declaration of the variables

double a,b,c;

// UI and input
std::cout << "Enter side A: "<< std::endl;
std::cin >> a;

std::cout << "Enter side B" << std::endl;
std::cin >> b;

//Calculation
c = sqrt(pow(a, 2)+pow(b, 2));

//Output

std::cout<< " Result equals to: "<< c<< std::endl;

  return 0;  
}