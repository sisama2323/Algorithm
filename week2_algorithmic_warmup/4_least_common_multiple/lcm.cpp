#include <iostream>

long long gcd(int a, int b){
  if b == 0{
    return a;
  } else {
    int c = a % b;
    return (long long) gcd(b, c);
  };
};

long long lcm(int a, int b) {
  int l = a * b / gcd(a, b);
  return l;
};

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
};
