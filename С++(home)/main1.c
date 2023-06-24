#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <string.h>
#include <time.h>

int main() 
{
    int opposite_number;
    int n, a;
    printf("Enter the number of numbers in a circle:");
    scanf("%d", &n);
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    a = ((360 / n) * number);
    if (a > 180){
        opposite_number = (a - 180) / (360 / n);
    } else {
         opposite_number = (a + 180) / (360 / n);
    }
    
    printf("prints: %d", opposite_number);
    getch();
}
