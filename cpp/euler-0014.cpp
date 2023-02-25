#include <iostream>
#include <vector>

int collatzSequence(int n) {
  int count = 1; 

  while (n > 1) {
    if (n % 2 == 0) {
      n = n / 2; 
    } 
    else if (n % 2 == 1) {
      n = (n * 3) + 1; 
    } else { // n = 1
      break; 
    }
    count++; 
  }
  return count; 
}

int main() {
  int max = 0; 
  int maxI; 
  std::vector<int> nums {}; 

  for (int i = 0; i < 1000000; ++i) {
    nums.push_back(collatzSequence(i)); 
  }
  
  for (int i = 0; i < nums.size(); ++i) {
    if (nums[i] > max) {
      max = nums[i]; 
      maxI = i; 
    }
  }
  std::cout << max << " " << maxI << std::endl; 
  std::cout << collatzSequence(837799) << std::endl; 
  std::cout << collatzSequence(910107) << std::endl; 
  return 0; 
}
