# Zadanie 1 - Parkujeme

# Meno: 
# Spolupráca: 
# Použité zdroje: 
# Čas potrebný na vypracovanie: 


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


def get_parking_fee(time_in_minutes, prices):
    flag = 0
    hours_for_payment = time_in_minutes / 60
    hours_for_payment = int(hours_for_payment)

    if(time_in_minutes < 15):
        result_prise = 0.0
    elif(time_in_minutes >= 15 and time_in_minutes < 30):
        result_prise = prices["30m"]
    elif(time_in_minutes >= 30 and time_in_minutes <= 60):
        result_prise = prices["1h"]
    elif(time_in_minutes > 60 and time_in_minutes <= 180):
        result_prise = prices["h+"] * hours_for_payment + prices["1h"]
    elif(time_in_minutes > 180 and time_in_minutes <= 360):
        result_prise = prices["h+"] * (hours_for_payment - 2) + prices["3h"]
    elif(time_in_minutes > 360 and time_in_minutes <= 1440):
        result_prise = prices["h+"] * (hours_for_payment - 5) + prices["6h"]

    if(time_in_minutes >= 60 and time_in_minutes <= 180):
        result_prise1 = prices["3h"]
        flag = 1
    elif(time_in_minutes > 180 and time_in_minutes <= 360):
        result_prise1 = prices["6h"]
        flag = 1
    elif(time_in_minutes > 360 and time_in_minutes <= 1440):
        result_prise1 = prices["1d"]
        flag = 1

    if 'result_prise1' in locals(): 
        if(result_prise1 < result_prise and flag == 1):
            return result_prise1
    return result_prise

def calculate_average_parking_fee(records, prices):
    average_parking = 0.0
    number = 0
    for count in records:
        time_in_minutes = calculate_parking_time(count[1], count[2], count[3], count[4])
        parking_fee = get_parking_fee(time_in_minutes, prices)
        parking_fee = float(parking_fee)
        average_parking += parking_fee
        number += 1
    return average_parking / number;



def calculate_average_parking_time(records):
    average_parking_long = 0
    parking_long_number = 0
    time_in_minutes = 0
    for count in records:
        time_in_minutes = calculate_parking_time(count[1], count[2], count[3], count[4])
        average_parking_long += time_in_minutes
        parking_long_number += 1
    return float(average_parking_long / parking_long_number)


def calculate_average_stays(records):
    cols_arr = list()
    average_stays_number = 0
    for cols in records:
        if(cols[0] not in cols_arr):
            cols_arr.append(cols[0])
            average_stays_number += 1
    if(average_stays_number > 0):
        return len(records) / average_stays_number
    else:
        return 0
        
    
def get_most_common_region(records):
    dict_region = {}

    for record in records:
        license_plate = record[0]
        region = license_plate[0] + license_plate[1] 
        if region in dict_region:
            dict_region[region] += 1
        else:
            dict_region.update({region: 1})
        
    most_common_region = ""
    main_count = 0
    for region, count in dict_region.items():
        if(count > main_count):
            main_count = count
            most_common_region = region
    return str(most_common_region)

def get_busiest_hour(records):  # 0.5b
    hours = {}
    max_count = 0
    most_index = 0

    for hour in range(1, 23):
        hours[hour] = 0


    for hour_records in records:
        start_hour = hour_records[1]
        end_hour = hour_records[3] + 1

        for i in range(start_hour, end_hour):
            if(i in hours):
                hours[i] += 1
            else:
                hours[i] = 1
                
            if(hours[i] > max_count):
                max_count = hours[i]
                most_index = i

    return most_index

def get_max_number_of_cars(records):
    hours = {hour: 0 for hour in range(60)}
    count_end_hour = 0
    index_end_hour = 0

    for hour in records:
        start_hour = hour[1]
        start_minute = hour[2]
        break
    
    for hour in range(1, 23):
        hours[hour] = 0

    for hour in records:
        end_hour = hour[3] + 1
        if(end_hour > count_end_hour):
            count_end_hour = end_hour
            index_end_hour = (end_hour - 1)
            end_minute = ((hour[4] + 1) - 1) + index_end_hour
    
    list = []
    car_count = 0

    for every_hour in range(start_hour, index_end_hour + 1):
        for i in range(60):
            for record in records:
                if(int(start_hour) * 60 + int(start_minute) <= record * 60 and record * 60 < end_minute):
                    car_count = car_count + 1
                    list.append((car_count))

    most_index = max(list) 

    return most_index, list()


def optimize_hourly_fee(records, prices):  # 2b
    if(prices["1h"] == 1.00):
        favorable_price = prices["1h"]
    else:
        favorable_price = prices["1h"] - 0.1
    return float(favorable_price)
