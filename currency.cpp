#include <iostream>

int main() {
  double yuan, kip, rupias;
  double rubles;
  std::cout << "Enter number of Yuans: ";
  std::cin >> yuan;
  std::cout << "Enter the number of Kips: ";
  std::cin >> kip;
  std::cout << "Enter the number of Rupias: ";
  std::cin >> rupias;
  // Yuan conversion rate: 13.60
  // Kip conversion rate: 0,0044
  // Rupia conversion rate: 0,0062
  rubles = 13.60 * yuan + 0,0044 * kip +  0,0062 * rupia;
  std::cout << "Rubles = ₽ " << rubles; 

  
  
}