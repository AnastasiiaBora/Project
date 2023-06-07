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
    printf("\nWhat day do you want to fill in? Enter the word 'Finish' to see other features\nSunday\nMonday\nTuesday\nWednesday\nThursday\nFriday\nSaturday\nFinish");
    char str1[255];
    char text[100];
    scanf("%s", str1);
    if(strcmp(str1, "Finish") == 0) {
        break;
        system("cls"); 

    }
    FILE* fp;
    fp = fopen(str1, "w");
    if(strcmp(str1, "Sunday") == 0) { if ((fp = fopen("Sunday.txt", "w")) == NULL) {
        printf("Cannot open file/file not exist\n");
        return 1; 
    }
    system("cls");
    printf("Select the text for the schedule (enter 'Finish' to stop):\nRise early\nMake my bed\nBreakfast time\nLunch time\nDinner time\nCall my friends\nGetting ready for bed\n");
    while (1) {
        scanf("%s", text);
        if (strcmp(text, "Finish") == 0) {
            break;
            system("cls");
        }
        fprintf(fp, "%s\n", text);
    }
    fclose(fp);
    printf("Text saved successfully in the file.\n");
    } else {
        if(strcmp(str1, "Monday") == 0) { if ((fp = fopen("Monday.txt", "w")) == NULL) {
            printf("Cannot open file/file not exist\n");
            return 1;            
        }
        system("cls");
        printf("Select the text for the schedule (enter 'Finish' to stop):\nRise early\nMake my bed\nBreakfast time\nLunch time\nDinner time\nCall my friends\nGetting ready for bed\n");
        while (1) {
            scanf("%s", text);
            if (strcmp(text, "Finish") == 0) {
                break;
                system("cls");
            }
            fprintf(fp, "%s\n", text);
        }
        fclose(fp);
        printf("Text saved successfully in the file.\n");
        } else {
            if(strcmp(str1, "Tuesday") == 0) { if ((fp = fopen("Tuesday.txt", "w")) == NULL) {
                printf("Cannot open file/file not exist\n");
                return 1;
            }
            system("cls");
            printf("Select the text for the schedule (enter 'Finish' to stop):\nRise early\nMake my bed\nBreakfast time\nLunch time\nDinner time\nCall my friends\nGetting ready for bed\n");
            while (1) {
                scanf("%s", text);
                if (strcmp(text, "Finish") == 0) {
                    break;
                    system("cls");
                }
                fprintf(fp, "%s\n", text);
            }
            fclose(fp);
            printf("Text saved successfully in the file.\n");
            } else {
                if(strcmp(str1, "Wednesday") == 0) { if ((fp = fopen("Wednesday.txt", "w")) == NULL) {
                    printf("Cannot open file/file not exist\n");
                    return 1; 
                }
                system("cls");
                printf("Select the text for the schedule (enter 'Finish' to stop):\nRise early\nMake my bed\nBreakfast time\nLunch time\nDinner time\nCall my friends\nGetting ready for bed\n");
                while (1) {
                    scanf("%s", text);
                    if (strcmp(text, "Finish") == 0) {
                        break;
                        system("cls");
                    }
                    fprintf(fp, "%s\n", text);
                }
                fclose(fp);
                printf("Text saved successfully in the file.\n");
                } else {
                    if(strcmp(str1, "Thursday") == 0) { if ((fp = fopen("Thursday.txt", "w")) == NULL) {
                        printf("Cannot open file/file not exist\n");
                        return 1; 
                    }
                    system("cls");
                    printf("Select the text for the schedule (enter 'Finish' to stop):\nRise early\nMake my bed\nBreakfast time\nLunch time\nDinner time\nCall my friends\nGetting ready for bed\n");
                    while (1) {
                        scanf("%s", text);
                        if (strcmp(text, "Finish") == 0) {
                            break;
                            system("cls");
                        }
                        fprintf(fp, "%s\n", text);
                    }
                    fclose(fp);
                    printf("Text saved successfully in the file.\n");
                    } else {
                        if(strcmp(str1, "Friday") == 0) { if ((fp = fopen("Friday.txt", "w")) == NULL) {
                            printf("Cannot open file/file not exist\n");
                            return 1; 
                        }
                        system("cls");
                        printf("Select the text for the schedule (enter 'Finish' to stop):\nRise early\nMake my bed\nBreakfast time\nLunch time\nDinner time\nCall my friends\nGetting ready for bed\n");
                        while (1) {
                            scanf("%s", text);
                            if (strcmp(text, "Finish") == 0) {
                                break;
                                system("cls");
                            }
                            fprintf(fp, "%s\n", text);
                        }
                        fclose(fp);
                        printf("Text saved successfully in the file.\n");
                        } else {
                            if(strcmp(str1, "Saturday") == 0) { if ((fp = fopen("Saturday.txt", "w")) == NULL) {
                                printf("Cannot open file/file not exist\n");
                                return 1; 
                            }
                            system("cls");
                            printf("Select the text for the schedule (enter 'Finish' to stop):\nRise early\nMake my bed\nBreakfast time\nLunch time\nDinner time\nCall my friends\nGetting ready for bed\n");
                            while (1) {
                                scanf("%s", text);
                                if (strcmp(text, "Finish") == 0) {
                                    break;
                                    system("cls");
                                }
                                fprintf(fp, "%s\n", text);
                            }
                            fclose(fp);
                            printf("Text saved successfully in the file.\n");
                            }
                        }
                    }
                }
            }
        }
    }
    }
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
