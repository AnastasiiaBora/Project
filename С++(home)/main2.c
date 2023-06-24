#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <string.h>
#include <time.h>
#include <math.h>

int main() 
{
    int sum_squared;
    int line;
    printf("Enter the line:");
    scanf("%d", &line);

    printf("prints: %d", (int)pow(2, line));
    
    getch();
}

