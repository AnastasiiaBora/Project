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

    printf("*************Current date and time: %02d/%02d/%d %02d:%02d:%02d*****************\n", day, month, year, hour, minute, second);
    printf("************************************************************************\n");
    char buff[1000][1000] = {
    "***********Congratulations! Today is International Children's Day*****\n**************************************************************************\n", 
    "***********Congratulations! Today is International Day for Healthy Eating*****\n******************************************************************\n", 
    "***********Congratulations! Today is World Bicycle Day!*****\n************************************************************************************\n", 
    "***********Congratulations! Today is National Cheese Day!*****\n**********************************************************************************\n", 
    "***********Congratulations! Today is World Environment Day!*****\n********************************************************************************\n", 
    "***********Congratulations! Today is National Drive-In Movie Day!*****\n**************************************************************************\n", 
    "***********Congratulations! Today is National Chocolate Ice Cream Day!*****\n*********************************************************************\n", 
    "***********Congratulations! Today is World Oceans Day!*****\n*************************************************************************************\n", 
    "***********Congratulations! Today is National Donald Duck Day!********\n**************************************************************************\n", 
    "*************Congratulations! Today is National Rose Day!***************\n************************************************************************\n", 
    "***********Congratulations! Today is Making Life Beautiful Day!*****\n****************************************************************************\n", 
    "***********Congratulations! Today is National Loving Day!*****\n**********************************************************************************\n", 
    "***********Congratulations! Today is National Sewing Machine Day!*****\n**************************************************************************\n", 
    "***********Congratulations! Today is International Bath Day!************\n************************************************************************\n", 
    "***********Congratulations! Today is Nature Photography Day!*****\n*******************************************************************************\n", 
    "***********Congratulations! Today is National Fudge Day!*****\n***********************************************************************************\n", 
    "***********Congratulations! Today is Apple Strudel Day!*****\n************************************************************************************\n", 
    "***********Congratulations! Today is Father's Day!*****\n*****************************************************************************************\n", 
    "***********Congratulations! Today is Juneteenth!*****\n*******************************************************************************************\n", 
    "***********Congratulations! Today is Hike With a Geek Day!*****\n*********************************************************************************\n", 
    "***********Congratulations! Today is International Yoga Day!*****\n*******************************************************************************\n", 
    "***********Congratulations! Today is National Onion Ring Day!*****\n******************************************************************************\n", 
    "***********Congratulations! Today is National Pink Day!*****\n************************************************************************************\n", 
    "***********Congratulations! Today is Midsummer!*****\n********************************************************************************************\n", 
    "***********Congratulations! Today is Global Beatles Day!*****\n***********************************************************************************\n", 
    "***********Congratulations! Today is National Chocolate Pudding Day!*****\n***********************************************************************\n", 
    "***********Congratulations! Today is National Sunglasses Day!*****\n******************************************************************************\n", 
    "***********Congratulations! Today is Parchment Day!*****\n****************************************************************************************\n", 
    "***********Congratulations! Today is National Camera Day!*****\n**********************************************************************************\n", 
    "***********Congratulations! Today is International Asteroid Day!*****\n***************************************************************************\n", 
    "***********Congratulations! Today is World Bicycle Day!*****\n************************************************************************************\n"};
    printf("%s", buff[day - 1]);

    
    printf("***************Current day of the week: %s***********************\n", currentDayOfWeek);
    printf("************************************************************************\n\n");
    printf("*****Here's your schedule for today:*****\n\n");

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
