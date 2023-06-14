#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <string.h>
#include <time.h>
#include "projekt.h"

int main () {
    int a = 0;
    printf("*****Hello! I'm your program. Ready to help you with your schedule!*****\n");
    printDateTimeAndDayOfWeek();
    while (a != 1) {
    printf("\nWhat day do you want to fill in? Enter the word 'Finish' to see other features\nSunday\nMonday\nTuesday\nWednesday\nThursday\nFriday\nSaturday\nFinish");
    char str1[255];
    char text[100];
    scanf("%s", str1);
    if(strcmp(str1, "Finish") == 0) {
        system("cls");
        break;
    }
    FILE* fp;
    fp = fopen(str1, "w");
    if(strcmp(str1, "Sunday") == 0) { if ((fp = fopen("Sunday.txt", "w")) == NULL) {
        printf("Cannot open file/file not exist\n");
        return 1; 
    }
    system("cls");
    printf("Select the text for the schedule (enter 'Finish' to stop):\nRise_early\nMake_my_bed\nBreakfast_time\nLunch_time\nDinner_time\nCall_my_friends\nGetting_ready_for_bed\n");
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
        printf("Select the text for the schedule (enter 'Finish' to stop):\nRise_early\nMake_my_bed\nBreakfast_time\nLunch_time\nDinner_time\nCall_my_friends\nGetting_ready_for_bed\n");
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
            printf("Select the text for the schedule (enter 'Finish' to stop):\nRise_early\nMake_my_bed\nBreakfast_time\nLunch_time\nDinner_time\nCall_my_friends\nGetting_ready_for_bed\n");
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
                printf("Select the text for the schedule (enter 'Finish' to stop):\nRise_early\nMake_my_bed\nBreakfast_time\nLunch_time\nDinner_time\nCall_my_friends\nGetting_ready_for_bed\n");
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
                    printf("Select the text for the schedule (enter 'Finish' to stop):\nRise_early\nMake_my_bed\nBreakfast_time\nLunch_time\nDinner_time\nCall_my_friends\nGetting_ready_for_bed\n");
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
                        printf("Select the text for the schedule (enter 'Finish' to stop):\nRise_early\nMake_my_bed\nBreakfast_time\nLunch_time\nDinner_time\nCall_my_friends\nGetting_ready_for_bed\n");
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
                            printf("Select the text for the schedule (enter 'Finish' to stop):\nRise_early\nMake_my_bed\nBreakfast_time\nLunch_time\nDinner_time\nCall_my_friends\nGetting_ready_for_bed\n");
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
    printf("Please choose your option:\nSunday\nMonday\nTuesday\nWednesday\nThursday\nFriday\nSaturday\nCall_my_friends\nFinish");
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
            
          }  else {
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
                                } else {
                                    if (strcmp(str, "Call_my_friends") == 0) {
                                    system("cls");
                                    printf("What friend do you want to call?*\n*********************************\nAlina\nPolina\nMax\nLiza\nNikita\nFinish");
                                    char str1[255];
                                    scanf("%s", str1);
                                    if (strcmp(str1, "Alina") == 0) {
                                        printf("\n+380 (99) 045-97-65\n\n");                                      
                                    } else {
                                        if (strcmp(str1, "Polina") == 0) {
                                        printf("\n+380 (99) 058-36-27\n\n");                                      
                                        } else {
                                            if (strcmp(str1, "Max") == 0) {
                                                printf("\n+380 (99) 068-48-45\n\n");                                      
                                            } else {
                                                if (strcmp(str1, "Liza") == 0) {
                                                    printf("\n+380 (99) 035-25-93\n\n");                                      
                                                } else {
                                                    if (strcmp(str1, "Nikita") == 0) {
                                                     printf("\n+380 (99) 084-25-12\n\n");                                      
                                                    }
                                                }
                                            }
                                        }
                                     }
                                }
                            
                            }
                        }
                     }
                }
            }
    }
}
}
system("cls");
printf("Finished the schedule. Thanks for using the program!\n");
    getch ();
}
