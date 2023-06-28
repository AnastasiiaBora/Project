#include <stdio.h> 
#include <math.h>

unsigned long sum_squared(const int line) {
 unsigned long sum;
 for (int i = 0; i <= line; i ++) {
        sum = pow(2, i);
    }
  return sum;
}

int main() 
{
    int line;

    unsigned long a = sum_squared(line);
    
    printf("%lu\n", sum_squared(1)); 
    printf("%lu\n", sum_squared(4)); 

    
   return 0;
}