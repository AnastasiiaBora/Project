#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <time.h>
void printDateTimeAndDayOfWeek() {
    FILE* fp;
    time_t t = time(NULL); 
    struct tm* currentTime = localtime(&t); 

    int dayOfWeek = currentTime->tm_wday; 

    
    const char* daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    const char* currentDayOfWeek = daysOfWeek[dayOfWeek];

    int day = currentTime->tm_mday; 
    int month = currentTime->tm_mon + 1; 
    int year = currentTime->tm_year + 1900; 
    int hour = currentTime->tm_hour; 
    int minute = currentTime->tm_min; 
    int second = currentTime->tm_sec;

    printf("Current date and time: %02d/%02d/%d %02d:%02d:%02d\n", day, month, year, hour, minute, second);
    
    if (day == 1) {
        printf("Congratulations! Today is International Children's Day\n");
    } else {
        if (day == 2) {
        printf("Congratulations! Today is International Day for Healthy Eating\n");
        } else {
        if (day == 3) {
        printf("Congratulations! Today is World Bicycle Day!\n");
            } else {
                if (day == 4) {
                printf("Congratulations! Today is National Cheese Day!\n");
                } else {
                    if (day == 5) {
                    printf("Congratulations! Today is World Environment Day!\n");
                    } else {
                       if (day == 6) {
                        printf("Congratulations! Today is National Drive-In Movie Day!\n");
                        } else {
                          if (day == 7) {
                            printf("Congratulations! Today is National Chocolate Ice Cream Day!\n");
                            } else {
                                if (day == 8) {
                                printf("Congratulations! Today is World Oceans Day!\n");
                                } else {
                                    if (day == 9) {
                                    printf("Congratulations! Today is National Donald Duck Day!\n");
                                    } else {
                                        if (day == 10) {
                                        printf("Congratulations! Today is National Rosé Day!\n");
                                        } else {
                                            if (day == 11) {
                                            printf("Congratulations! Today is Making Life Beautiful Day!\n");
                                            } else {
                                                if (day == 12) {
                                                printf("Congratulations! Today is National Loving Day!\n");
                                                } else {
                                                    if (day == 13) {
                                                    printf("Congratulations! Today is National Sewing Machine Day!\n");
                                                    } else {
                                                        if (day == 14) {
                                                        printf("Congratulations! Today is International Bath Day!\n");
                                                        } else {
                                                            if (day == 15) {
                                                            printf("Congratulations! Today is Nature Photography Day!\n");
                                                            } else {
                                                                if (day == 16) {
                                                                printf("Congratulations! Today is National Fudge Day!\n");
                                                                } else {
                                                                    if (day == 17) {
                                                                    printf("Congratulations! Today is Apple Strudel Day!\n");
                                                                    } else {
                                                                        if (day == 18) {
                                                                        printf("Congratulations! Today is Father's Day!\n");
                                                                        } else {
                                                                            if (day == 19) {
                                                                            printf("Congratulations! Today is Juneteenth!\n");
                                                                            } else {
                                                                                if (day == 20) {
                                                                                printf("Congratulations! Today is Hike With a Geek Day!\n");
                                                                                } else {
                                                                                    if (day == 21) {
                                                                                    printf("Congratulations! Today is International Yoga Day!\n");
                                                                                    } else {
                                                                                       if (day == 22) {
                                                                                        printf("Congratulations! Today is National Onion Ring Day!\n");
                                                                                        } else {
                                                                                          if (day == 23) {
                                                                                            printf("Congratulations! Today is National Pink Day!\n");
                                                                                            } else {
                                                                                                if (day == 24) {
                                                                                                printf("Congratulations! Today is Midsummer!\n");
                                                                                                } else {
                                                                                                    if (day == 25) {
                                                                                                    printf("Congratulations! Today is Global Beatles Day!\n");
                                                                                                    } else {
                                                                                                        if (day == 26) {
                                                                                                        printf("Congratulations! Today is National Chocolate Pudding Day!\n");
                                                                                                        } else {
                                                                                                            if (day == 27) {
                                                                                                            printf("Congratulations! Today is National Sunglasses Day!\n");
                                                                                                            } else {
                                                                                                                if (day == 28) {
                                                                                                                printf("Congratulations! Today is Parchment Day!\n");
                                                                                                                } else {
                                                                                                                    if (day == 29) {
                                                                                                                    printf("Congratulations! Today is National Camera Day!\n");
                                                                                                                    } else {
                                                                                                                       if (day == 30) {
                                                                                                                        printf("Congratulations! Today is International Asteroid Day!\n");
                                                                                                                        } else {
                                                                                                                           if (day == 31) {
                                                                                                                            printf("Congratulations! Today is World Bicycle Day!\n");
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
            }
        }
    }
    printf("Current day of the week: %s\n\n", currentDayOfWeek);
    printf("Here's your schedule for today:\n");

    if(strcmp(currentDayOfWeek, "Sunday") == 0) { if ((fp = fopen("Sunday.txt", "r")) == NULL) {
       printf("Cannot open file/file not exist\n");
    }
    char s[255];
    while (fgets(s, 255, fp) != NULL) {
        printf("- %s\n", s);
    }
    fclose(fp);
  } else {
    if(strcmp(currentDayOfWeek, "Monday") == 0) { if ((fp = fopen("Monday.txt", "r")) == NULL) {
            printf("Cannot open file/file not exist\n");
        }
        char s[255];
        while (fgets(s, 255, fp) != NULL) {
            printf("- %s\n", s);
        }
        fclose(fp);
        } else {
            if(strcmp(currentDayOfWeek, "Tuesday") == 0) { if ((fp = fopen("Tuesday.txt", "r")) == NULL) {
                    printf("Cannot open file/file not exist\n");
                }
                char s[255];
                while (fgets(s, 255, fp) != NULL) {
                    printf("- %s\n", s);
                }
                fclose(fp);
            } else {
                if(strcmp(currentDayOfWeek, "Wednesday") == 0) { if ((fp = fopen("Wednesday.txt", "r")) == NULL) {
                        printf("Cannot open file/file not exist\n");
                    }
                    char s[255];
                    while (fgets(s, 255, fp) != NULL) {
                        printf("- %s\n", s);
                    }
                    fclose(fp);
                } else {
                    if(strcmp(currentDayOfWeek, "Thursday") == 0) { if ((fp = fopen("Thursday.txt", "r")) == NULL) {
                        printf("Cannot open file/file not exist\n");
                    }
                    char s[255];
                    while (fgets(s, 255, fp) != NULL) {
                        printf("- %s\n", s);
                    }
                    fclose(fp);
                    } else {
                        if(strcmp(currentDayOfWeek, "Friday") == 0) { if ((fp = fopen("Friday.txt", "r")) == NULL) {
                                printf("Cannot open file/file not exist\n");
                            }
                            char s[255];
                            while (fgets(s, 255, fp) != NULL) {
                                printf("- %s\n", s);
                            }
                            fclose(fp);
                        } else {
                            if(strcmp(currentDayOfWeek, "Saturday") == 0) { if ((fp = fopen("Saturday.txt", "r")) == NULL) {
                                    printf("Cannot open file/file not exist\n");
                                }
                                char s[255];
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
