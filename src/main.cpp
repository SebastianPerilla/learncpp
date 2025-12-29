#include <chrono>
#include <iostream>
#include <random>

int main(){
  std::cout << "Mersenne Twister with Clock Seed\n";

  std::mt19937_64 mt{ static_cast<std::mt19937_64::result_type>(std::chrono::steady_clock::now().time_since_epoch().count())};

  std::uniform_int_distribution die6{1,6};

  for (int count{1}; count <= 40; ++count) {
    std::cout << die6(mt) << "\t";

    if (count % 10 == 0){
      std::cout << "\n";
    }
  }
  

  return 0;
}
