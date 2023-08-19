from assignment1 import *
def load_parking_records(file_path):
    try:
        file = open(file_path, 'r')
        upkeep = file.readlines()
    except FileNotFoundError as e:
        print('File does not exist:', e)
    except Exception as e:
        print('An error occurred:', e)

    dictionary = {}
    for allKeys in upkeep:
        split = allKeys.strip().split(',')
        number = split[0]
        values = split[0:]

        dictionary[number] = str(values)

        number1 = split[0]
        values1 = split[1:]
        int_values1 = [int(value) for value in values1]
        start_h = int_values1[0]
        start_m = int_values1[1]
        end_h = int_values1[2]
        end_m = int_values1[3]
        dictionary[number1] = int_values1
    
    license_plate = []
    int_info = []


    for plate, values1 in dictionary.items():
       license_plate.append(plate)
       start_h, start_m, end_h, end_m = values1
       int_info.append((start_h, start_m, end_h, end_m))

    return license_plate, int_info


    
output = load_parking_records("samples\parking_logs_01.csv")

for license_plate in output[0]:
    print("license_plate", license_plate)

for start_h, start_m, end_h, end_m in output[1]:
    print("start_h:", start_h)
    print("start_m:", start_m)
    print("end_h:", end_h)
    print("end_m:", end_m)