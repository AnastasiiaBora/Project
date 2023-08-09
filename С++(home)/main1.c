#include <stdio.h>

int opposite_number(const int n, const int number) {
    int opposite_num;
    int a = (360 / n) * number;
    
    if (a > 180) {
        opposite_num = (a - 180) / (360 / n);
    } else {
        opposite_num = (a + 180) / (360 / n);
    }
    
    return opposite_num;
}

int main() {
    printf("%d\n", opposite_number(10, 2));
    printf("%d\n", opposite_number(12, 9));

    return 0;
}