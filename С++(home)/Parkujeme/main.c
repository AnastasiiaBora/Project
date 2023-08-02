#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void initialize_input_files_with_sprintf(const char **input_files, const char **input_txt_files) {
    const char *csv_files[] = {
    "samples/parking_logs_01.csv",
    "samples/parking_logs_02.csv",
    "samples/parking_logs_03.csv",
    "samples/parking_logs_04.csv",
    "samples/parking_logs_05.csv",
    "samples/parking_logs_06.csv",
    "samples/parking_logs_07.csv",
    "samples/parking_logs_08.csv",
    "samples/parking_logs_09.csv",
    "samples/parking_logs_10.csv",
    "samples/parking_logs_11.csv",
    "samples/parking_logs_12.csv",
    "samples/parking_logs_13.csv",
    "samples/parking_logs_14.csv",
    "samples/parking_logs_15.csv",
    "samples/parking_logs_16.csv",
    "samples/parking_logs_17.csv",
    "samples/parking_logs_18.csv",
    "samples/parking_logs_19.csv",
    "samples/parking_logs_20.csv",
    "samples/parking_logs_21.csv",
    "samples/parking_logs_22.csv",
    "samples/parking_logs_23.csv",
    "samples/parking_logs_24.csv",
    "samples/parking_logs_25.csv",
    "samples/parking_logs_26.csv",
    "samples/parking_logs_27.csv",
    "samples/parking_logs_28.csv",
    "samples/parking_logs_29.csv",
    "samples/parking_logs_30.csv",
    "samples/parking_logs_31.csv",
    "samples/parking_logs_32.csv",
    "samples/parking_logs_33.csv",
    "samples/parking_logs_34.csv",
    "samples/parking_logs_35.csv",
    "samples/parking_logs_36.csv",
    "samples/parking_logs_37.csv",
    "samples/parking_logs_38.csv",
    "samples/parking_logs_39.csv",
    "samples/parking_logs_40.csv",
    "samples/parking_logs_41.csv",
    "samples/parking_logs_42.csv",
    "samples/parking_logs_43.csv",
    "samples/parking_logs_44.csv",
    "samples/parking_logs_45.csv",
    "samples/parking_logs_46.csv",
    "samples/parking_logs_47.csv",
    "samples/parking_logs_48.csv",
    "samples/parking_logs_49.csv",
    "samples/parking_logs_50.csv",
    "samples/parking_logs_51.csv",
    "samples/parking_logs_52.csv",
    "samples/parking_logs_53.csv",
    "samples/parking_logs_54.csv",
    "samples/parking_logs_55.csv",
    "samples/parking_logs_56.csv",
    "samples/parking_logs_57.csv",
    "samples/parking_logs_58.csv",
    "samples/parking_logs_59.csv",
    "samples/parking_logs_60.csv",
    "samples/parking_logs_61.csv",
    "samples/parking_logs_62.csv",
    "samples/parking_logs_63.csv",
    "samples/parking_logs_64.csv",
    "samples/parking_logs_65.csv",
    "samples/parking_logs_66.csv",
    "samples/parking_logs_67.csv",
    "samples/parking_logs_68.csv",
    "samples/parking_logs_69.csv",
    "samples/parking_logs_70.csv",
    "samples/parking_logs_71.csv",
    "samples/parking_logs_72.csv",
    "samples/parking_logs_73.csv",
    "samples/parking_logs_74.csv",
    "samples/parking_logs_75.csv",
    "samples/parking_logs_76.csv",
    "samples/parking_logs_77.csv",
    "samples/parking_logs_78.csv",
    "samples/parking_logs_79.csv",
    "samples/parking_logs_80.csv",
    "samples/parking_logs_81.csv",
    "samples/parking_logs_82.csv",
    "samples/parking_logs_83.csv",
    "samples/parking_logs_84.csv",
    "samples/parking_logs_85.csv",
    "samples/parking_logs_86.csv",
    "samples/parking_logs_87.csv",
    "samples/parking_logs_88.csv",
    "samples/parking_logs_89.csv",
    "samples/parking_logs_90.csv",
    "samples/parking_logs_91.csv",
    "samples/parking_logs_92.csv",
    "samples/parking_logs_93.csv",
    "samples/parking_logs_94.csv",
    "samples/parking_logs_95.csv",
    "samples/parking_logs_96.csv",
    "samples/parking_logs_97.csv",
    "samples/parking_logs_98.csv",
    "samples/parking_logs_99.csv",
    "samples/parking_logs_100.csv"
    };

    for (int k = 0; k < 100; k++) {
        char buffer[150];
        sprintf(buffer, "samples/parking_logs_%02d.csv", k + 1);
        input_files[k] = strdup(buffer);
    }
    const char *txt_files[] = {
        "samples/prices_01.txt",
        "samples/prices_02.txt",
        "samples/prices_03.txt",
        "samples/prices_04.txt",
        "samples/prices_05.txt",
        "samples/prices_06.txt",
        "samples/prices_07.txt",
        "samples/prices_08.txt",
        "samples/prices_09.txt",
        "samples/prices_10.txt",
        "samples/prices_11.txt",
        "samples/prices_12.txt",
        "samples/prices_13.txt",
        "samples/prices_14.txt",
        "samples/prices_15.txt",
        "samples/prices_16.txt",
        "samples/prices_17.txt",
        "samples/prices_18.txt",
        "samples/prices_19.txt",
        "samples/prices_20.txt",
        "samples/prices_21.txt",
        "samples/prices_22.txt",
        "samples/prices_23.txt",
        "samples/prices_24.txt",
        "samples/prices_25.txt",
        "samples/prices_26.txt",
        "samples/prices_27.txt",
        "samples/prices_28.txt",
        "samples/prices_29.txt",
        "samples/prices_30.txt",
        "samples/prices_31.txt",
        "samples/prices_32.txt",
        "samples/prices_33.txt",
        "samples/prices_34.txt",
        "samples/prices_35.txt",
        "samples/prices_36.txt",
        "samples/prices_37.txt",
        "samples/prices_38.txt",
        "samples/prices_39.txt",
        "samples/prices_40.txt",
        "samples/prices_41.txt",
        "samples/prices_42.txt",
        "samples/prices_43.txt",
        "samples/prices_44.txt",
        "samples/prices_45.txt",
        "samples/prices_46.txt",
        "samples/prices_47.txt",
        "samples/prices_48.txt",
        "samples/prices_49.txt",
        "samples/prices_50.txt",
        "samples/prices_51.txt",
        "samples/prices_52.txt",
        "samples/prices_53.txt",
        "samples/prices_54.txt",
        "samples/prices_55.txt",
        "samples/prices_56.txt",
        "samples/prices_57.txt",
        "samples/prices_58.txt",
        "samples/prices_59.txt",
        "samples/prices_60.txt",
        "samples/prices_61.txt",
        "samples/prices_62.txt",
        "samples/prices_63.txt",
        "samples/prices_64.txt",
        "samples/prices_65.txt",
        "samples/prices_66.txt",
        "samples/prices_67.txt",
        "samples/prices_68.txt",
        "samples/prices_69.txt",
        "samples/prices_70.txt",
        "samples/prices_71.txt",
        "samples/prices_72.txt",
        "samples/prices_73.txt",
        "samples/prices_74.txt",
        "samples/prices_75.txt",
        "samples/prices_76.txt",
        "samples/prices_77.txt",
        "samples/prices_78.txt",
        "samples/prices_79.txt",
        "samples/prices_80.txt",
        "samples/prices_81.txt",
        "samples/prices_82.txt",
        "samples/prices_83.txt",
        "samples/prices_84.txt",
        "samples/prices_85.txt",
        "samples/prices_86.txt",
        "samples/prices_87.txt",
        "samples/prices_88.txt",
        "samples/prices_89.txt",
        "samples/prices_90.txt",
        "samples/prices_91.txt",
        "samples/prices_92.txt",
        "samples/prices_93.txt",
        "samples/prices_94.txt",
        "samples/prices_95.txt",
        "samples/prices_96.txt",
        "samples/prices_97.txt",
        "samples/prices_98.txt",
        "samples/prices_99.txt",
        "samples/prices_100.txt"
        };
    for (int i = 0; i < 100; i++) {
        char buffer[50];
        sprintf(buffer, "samples/prices_%02d.txt", i + 1);
        input_txt_files[i] = strdup(buffer);
    }
} 
void csv_files(const char *output_file_path, int number_of_files, const char **input_file_paths){
    FILE* output_file = fopen(output_file_path, "w");

    if (output_file == NULL) {
        printf("Cannot open file/file not exist\n");
       return;
    }
    for (int i = 0; i < number_of_files; i++) {
        FILE *input_file = fopen(input_file_paths[i], "r");
            if (input_file == NULL) {
        printf("Cannot open file/file not exist\n");
       continue;
    }
    char array1[50000];
     while (fgets(array1, sizeof(array1), input_file)) {
            fputs(array1, output_file);
        }
        fclose(input_file);
    }
    fclose(output_file);
}

void txt_files(const char *output_txt_file_path, int number_of_txt_files, const char **input_txt_file_paths){
    FILE* output_txt_file = fopen(output_txt_file_path, "w");

    if (output_txt_file == NULL) {
        printf("Cannot open file/file not exist\n");
       return;
    }
    for (int i = 0; i < number_of_txt_files; i++) {
        FILE *input_txt_file = fopen(input_txt_file_paths[i], "r");
            if (input_txt_file == NULL) {
        printf("Cannot open file/file not exist\n");
       continue;
    }
    char array2[50000];
     while (fgets(array2, sizeof(array2), input_txt_file)) {
            fputs(array2, output_txt_file);
        }
        fclose(input_txt_file);
    }
    fclose(output_txt_file);
}

struct parking_records_array_items {
    char license_plate[225];
    int start_h;
    int start_m;
    int end_h;
    int end_m;
    struct parking_records_array_items *next_array_records;
};

struct parking_records_array_items *load_parking_records(const char *file_path) {
    struct parking_records_array_items *array =  NULL;
    struct parking_records_array_items *array_previous_item = NULL;

    FILE* fp;

    if ((fp = fopen(file_path, "r")) == NULL) {
        printf("Cannot open file/file not exist\n");
       return NULL;
    }

    char download[225];
    while(fgets(download, sizeof(download), fp)){ 
         struct parking_records_array_items *new_parking_records = (struct parking_records_array_items *)malloc(sizeof(struct parking_records_array_items));

    int result = sscanf(download, "%[^,],%d,%d,%d,%d", &new_parking_records->license_plate, &new_parking_records->start_h, &new_parking_records->start_m, &new_parking_records->end_h, &new_parking_records->end_m);
    new_parking_records->next_array_records = NULL;

    if(array == NULL) {
       array = new_parking_records;
       array_previous_item = new_parking_records;
    } else {
    array_previous_item->next_array_records = new_parking_records;
    array_previous_item = new_parking_records;
    }
}
    fclose(fp);
    return array;
}

struct parking_pricess_array_items{
    char time_limit[225];
    float tariff; 
    struct parking_pricess_array_items *next_array_parking_pricess;
};

struct parking_pricess_array_items *load_prices (const char *file_path) {
    struct parking_pricess_array_items *array_txt = NULL;
    struct parking_pricess_array_items *array_txt_previous_item = NULL;

    FILE *fp; 

    if ((fp = fopen(file_path, "r")) == NULL)
    {
        printf("Cannot open file/file not exist\n");
       return NULL;
    }
    
    char load[225];
    while(fgets(load, sizeof(load), fp)){
       struct parking_pricess_array_items *new_parking_pricess = (struct parking_pricess_array_items *)malloc(sizeof(struct parking_pricess_array_items));

    int result_parking_pricess = sscanf(load, "%[^:]:%f", new_parking_pricess->time_limit, &new_parking_pricess->tariff);
    new_parking_pricess->next_array_parking_pricess = NULL;

    if(result_parking_pricess != 2){
        printf("Cannot open file/file not exist\n");
        break;
    }
    if(array_txt == NULL) {
        array_txt = new_parking_pricess;
        array_txt_previous_item = new_parking_pricess;
    } else {
        array_txt_previous_item->next_array_parking_pricess = new_parking_pricess;
        array_txt_previous_item = new_parking_pricess;
    }
}   
fclose(fp);
return array_txt;
}

int calculate_parking_time(struct parking_records_array_items *records_array) {
    int time_in_minutes = (60 - records_array->start_m) + (((records_array->end_h - records_array->start_h) - 1) * 60) + records_array->end_m;
    return time_in_minutes;
}
float find_tariff_by_time_limit(const char *time_limit, struct parking_pricess_array_items *prices) {
    struct parking_pricess_array_items *current_prices = prices;
    while (current_prices != NULL) {
        if (strcmp(current_prices->time_limit, time_limit) == 0) {
            return current_prices->tariff;
        }
        current_prices = current_prices->next_array_parking_pricess;
    }
    return 0;
}

float get_parking_fee(int time_in_minutes, struct parking_pricess_array_items *prices) {
 float result_prise = 0;
 float result_prise_1 = 0;
int hours_for_payment;
if(time_in_minutes < 15) {
    result_prise = 0;
    } else if (time_in_minutes >= 15 && time_in_minutes < 30) {
            result_prise = find_tariff_by_time_limit("30m", prices);
        } else if (time_in_minutes >= 30 && time_in_minutes < 60){
            result_prise = find_tariff_by_time_limit("1h", prices);
            } else if (time_in_minutes >= 60) {
                hours_for_payment = time_in_minutes / 60;
                if(time_in_minutes % 60 == 0) {
                    result_prise = find_tariff_by_time_limit("h+", prices) * hours_for_payment;
                } else {
                        result_prise = (find_tariff_by_time_limit("h+", prices) * hours_for_payment) + find_tariff_by_time_limit("1h", prices);
                    }
              }
if(time_in_minutes>= 60 && time_in_minutes < 180) {
    result_prise_1 = find_tariff_by_time_limit("3h", prices);
    } else if (time_in_minutes >= 180 && time_in_minutes < 360) {
        result_prise_1 = find_tariff_by_time_limit("6h", prices);
         } else if(time_in_minutes >= 360 && time_in_minutes < 1440) {
            result_prise_1 = find_tariff_by_time_limit("1d", prices);
         }
    printf("Duration of parking: %d\n", time_in_minutes);
    if(result_prise < result_prise_1) {
        printf("Result prise: %.2f\n", result_prise);
    } else {
        printf("Result prise: %.2f\n", result_prise_1);
    }
    if(result_prise < result_prise_1) {
    return result_prise;
} else {
   return result_prise_1;
}
}

float calculate_average_parking_fee(struct parking_records_array_items *records, struct parking_pricess_array_items *prices) {
float average_parking = 0;
int number = 0;
int time_in_minutes = 0;
struct parking_records_array_items *current_record = records;
while (current_record != NULL) {
    time_in_minutes = calculate_parking_time(current_record);
    float parking_fee = get_parking_fee(time_in_minutes, prices);
    average_parking += parking_fee;
    number ++;
    current_record = current_record->next_array_records;
}
printf("Average parking fee: %.2f\n", average_parking / number);
return average_parking / number;
}

float calculate_average_parking_time(struct parking_records_array_items *records) {
float average_parking_long = 0;
int parking_long_number = 0;
int time_in_minutes = 0;
struct parking_records_array_items *current_record = records;
while (current_record != NULL) {
    time_in_minutes = calculate_parking_time(current_record);
    average_parking_long += time_in_minutes;
    parking_long_number++;
    current_record = current_record->next_array_records;
}
printf("Average parking time: %.2f\n", average_parking_long / parking_long_number);
return average_parking_long / parking_long_number;
}

int main() {
    const char *input_files[100];
    const char *input_txt_files[100];

    initialize_input_files_with_sprintf(input_files, input_txt_files);
    
    const char *output_file = "parking_logs.csv";
    const char *output_txt_file_path = "prices.txt";

    int number_of_files = 100;
    int number_of_txt_files = 100;
    csv_files(output_file, number_of_files, input_files);
    txt_files(output_txt_file_path, number_of_txt_files, input_txt_files);

    struct parking_records_array_items *records_array = load_parking_records("parking_logs.csv");
    struct parking_records_array_items *result = records_array;
    while (result != NULL) {
      // printf("license_plate: %s, start_h: %d, start_m: %d, end_h:%d, end_m:%d\n", result->license_plate, result->start_h, result->start_m, result->end_h, result->end_m);
        result = result->next_array_records;
    }

    struct parking_pricess_array_items *records_txt_array = load_prices("prices.txt");
    struct parking_pricess_array_items *result_txt_array = records_txt_array;
    while (result_txt_array != NULL) {
      // printf("time_limit: %s, tariff: %.2f\n", result_txt_array->time_limit, result_txt_array->tariff);
        result_txt_array = result_txt_array->next_array_parking_pricess;
    }
    struct parking_pricess_array_items *prices = load_prices("prices.txt");
        for (int i = 0; i < number_of_files; i++) {
        const char *output_file = input_files[i];
        struct parking_records_array_items *records_array = load_parking_records(input_files[i]);
        if (records_array != NULL) {
            printf("Parking Logs: %s\n", output_file);
            struct parking_records_array_items *current_record = records_array;
            while (current_record != NULL) {
                int time_in_minutes = calculate_parking_time(current_record);
                get_parking_fee(time_in_minutes, prices);
                current_record = current_record->next_array_records;
            }
            printf("\n");
        }
    }
    float average_parking_fee = calculate_average_parking_fee(records_array, prices);
    float average_parking_time = calculate_average_parking_time(records_array);
    return 0;
}