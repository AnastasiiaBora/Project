from assignment1 import *

def load_parking_records(file_path):
    try:
        file = open(file_path, 'r')
        upkeep = file.readlines()
    except FileNotFoundError as e:
        print('File does not exist:', e)
    except Exception as e:
        print('An error occurred:', e)

    list = []
    for line in upkeep:
        split = line.strip().split(',')
        license_plate = str(split[0])
        values1 = split[1:]
        int_values1 = [int(value) for value in values1]
        start_h = int_values1[0]
        start_m = int_values1[1]
        end_h = int_values1[2]
        end_m = int_values1[3]
        list.append((license_plate, start_h, start_m, end_h, end_m))
    file.close()

    return list

def load_prices(file_path):
    try:
        file = open(file_path, 'r')
        upkeep = file.readlines()
    except FileNotFoundError as e:
        print('File does not exist:', e)
    except Exception as e:
        print('An error occurred:', e)

    dict = {}
    for value in upkeep:
        split = value.strip().split(': ')
        values1 = split[1:]
        float_values1 = [float(value) for value in values1]
        price = float_values1[0]
        parking_time = str(split[0])
        dict[parking_time] = price

    return dict

def calculate_parking_time(start_h, start_m, end_h, end_m):
    time_in_minutes = (60 - start_m) + (((end_h - start_h) - 1) * 60) + end_m
    return time_in_minutes

print(load_parking_records("samples\parking_logs_01.csv"))   
price = load_prices("samples\prices_01.txt")

for parking_time, price in price.items():
    print(parking_time, end = ": ")
    print(price)


print(calculate_parking_time(7, 45, 11, 23))