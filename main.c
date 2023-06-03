#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <string.h>
#include <time.h>
#include "projekt.h"


int main () {
    int a = 0;
    printf("Hello! I'm your program. Ready to help you with your schedule!\n");

    printDateTimeAndDayOfWeek();
    while (a != 1) {
    printf("\nPlease choose your option:\nSunday\nMonday\nTuesday\nWednesday\nThursday\nFriday\nSaturday\nFinish");
    char str[255];
    scanf("%s", str);
    if(strcmp(str, "Finish") == 0) {
        break;
        system("cls"); 
    }
     FILE* fp;
    if(strcmp(str, "Sunday") == 0) { if ((fp = fopen("Sunday.txt", "r")) == NULL) {
            printf("Cannot open file/file not exist\n");
            return 0;
        }
        char s[255];
        system("cls");
        printf("It's your schedule:\n");
        while (fgets(s, 255, fp) != NULL) {
            printf("- %s\n", s);
        }
        fclose(fp);
        } else {
            if(strcmp(str, "Monday") == 0) { if ((fp = fopen("Monday.txt", "r")) == NULL) {
                printf("Cannot open file/file not exist\n");
                return 0;
            }
            char s[255];
            system("cls");
            printf("It's your schedule:\n");
            while (fgets(s, 255, fp) != NULL) {
                printf("- %s\n", s);
            }
            fclose(fp);
            
          } else {
            if(strcmp(str, "Tuesday") == 0) { if ((fp = fopen("Tuesday.txt", "r")) == NULL) {
                printf("Cannot open file/file not exist\n");
                return 0;
            }
            char s[255];
            system("cls");
            printf("It's your schedule:\n");
            while (fgets(s, 255, fp) != NULL) {
                printf("- %s\n", s);
            }
            fclose(fp);
            } else {
                if(strcmp(str, "Tuesday") == 0) { if ((fp = fopen("Tuesday.txt", "r")) == NULL) {
                    printf("Cannot open file/file not exist\n");
                    return 0;
                }
                char s[255];
                system("cls");
                printf("It's your schedule:\n");
                while (fgets(s, 255, fp) != NULL) {
                    printf("- %s\n", s);
                }
                fclose(fp);
                } else {
                    if(strcmp(str, "Wednesday") == 0) { if ((fp = fopen("Wednesday.txt", "r")) == NULL) {
                        printf("Cannot open file/file not exist\n");
                        return 0;
                    }
                    char s[255];
                    system("cls");
                    printf("It's your schedule:\n");
                    while (fgets(s, 255, fp) != NULL) {
                        printf("- %s\n", s);
                    }
                    fclose(fp);
                    } else {
                        if(strcmp(str, "Thursday") == 0) { if ((fp = fopen("Thursday.txt", "r")) == NULL) {
                            printf("Cannot open file/file not exist\n");
                            return 0;
                        }
                        char s[255];
                        system("cls");
                        printf("It's your schedule:\n");
                        while (fgets(s, 255, fp) != NULL) {
                            printf("- %s\n", s);
                        }
                        fclose(fp);
                        } else {
                            if(strcmp(str, "Friday") == 0) { if ((fp = fopen("Friday.txt", "r")) == NULL) {
                                printf("Cannot open file/file not exist\n");
                                return 0;
                            }
                            char s[255];
                            system("cls");
                            printf("It's your schedule:\n");
                            while (fgets(s, 255, fp) != NULL) {
                                printf("- %s\n", s);
                            }
                            fclose(fp);
                            } else {
                                if(strcmp(str, "Saturday") == 0) { if ((fp = fopen("Saturday.txt", "r")) == NULL) {
                                    printf("Cannot open file/file not exist\n");
                                    return 0;
                                }
                                char s[255];
                                system("cls");
                                printf("It's your schedule:\n");
                                while (fgets(s, 255, fp) != NULL) {
                                    printf("- %s\n", s);
                                }
                                fclose(fp);
                       }
                    }
                }
            }
        }
    }
  }
}
}
    getch ();
}
