# Zadanie 1 - Parkujeme

# Meno: 
# Spolupráca: 
# Použité zdroje: 
# Čas potrebný na vypracovanie: 


# def load_parking_records(file_path):
#     try:
#         file = open(file_path, 'r')
#         upkeep = file.readlines()
#     except FileNotFoundError as e:
#         print('File does not exist:', e)
#     except Exception as e:
#         print('An error occurred:', e)

#     list = []
#     for line in upkeep:
#         split = line.strip().split(',')
#         license_plate = str(split[0])
#         values1 = split[1:]
#         int_values1 = [int(value) for value in values1]
#         start_h = int_values1[0]
#         start_m = int_values1[1]
#         end_h = int_values1[2]
#         end_m = int_values1[3]
#         list.append((license_plate, start_h, start_m, end_h, end_m))
#     file.close()

#     return list


# def load_prices(file_path):
#     try:
#         file = open(file_path, 'r')
#         upkeep = file.readlines()
#     except FileNotFoundError as e:
#         print('File does not exist:', e)
#     except Exception as e:
#         print('An error occurred:', e)

#     dict = {}
#     for value in upkeep:
#         split = value.strip().split(': ')
#         values1 = split[1:]
#         float_values1 = [float(value) for value in values1]
#         price = float_values1[0]
#         parking_time = str(split[0])
#         dict[parking_time] = price

#     return dict


def calculate_parking_time(start_h, start_m, end_h, end_m):
    time_in_minutes = (60 - start_m) + (((end_h - start_h) - 1) * 60) + end_m
    return time_in_minutes


# def get_parking_fee(time_in_minutes, prices):  # 1b
#     """
#     Calculates and returns the price of parking for a given amount
#     of time based on pricing.
#     """
#     return 0.0


# def calculate_average_parking_fee(records, prices):  # 0.5b
#     """
#     Calculates the average amount paid for parking during the day.
#     """
#     return 0.0


# def calculate_average_parking_time(records):  # 0.5b
#     """
#     Calculates the average length of parking for the day.
#     """
#     return 0.0


# def calculate_average_stays(records):  # 0.5b
#     """
#     Calculates the average number a car was parked during the day.
#     """
#     return 0.0


# def get_most_common_region(records):  # 1b
#     """
#     Returns the code of the most common region of cars parked during the day.
#     """
#     return ""


# def get_busiest_hour(records):  # 0.5b
#     """
#     Returns the hour when the most cars were parked at the parking lot.
#     It considers cars that were parked before or at the given hour
#     and stayed at the parking lot until or after the given hour.
#     """
#     return 0


# def get_max_number_of_cars(records):  # 2b
#     """
#     Returns the highest number of cars parked at the parking lot in a given
#     minute.
#     """
#     return 0, list()


# def optimize_hourly_fee(records, prices):  # 2b
#     """
#     Returns the fee of additional hours that will maximize income for
#     the parking lot.
#     """
#     return 0.0
