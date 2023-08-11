def dictionary_flip():
    old = {
        15: "Tom", 
        17: "Bob",
        21: "Bill"
    }

    new = old.copy()
    for key, value in new.items():
        print(f"User: {value}  Age: {key} ")

def word_frequency_count(text):
    if text in dictionary:
        dictionary[text] += 1
    else:
        dictionary.update({text: 1})

def merge_dictionaries():
    dictionary1 = {
        15: "Tom", 
        17: "Bob",
        21: "Bill"
    }
    dictionary2 = {
        15: "Rob", 
        19: "Max",
        25: "Ken"
    }
    dictionary3 = dictionary1.copy()
    dictionary3.update(dictionary2)
    print(dictionary3)

def maximum_product_of_two_numbers(list_of_numbers):
    larger_number = float('-inf')
    larger_number2 = float('-inf')
    i = 0 
    j = 0
    for i in list_of_numbers:
        if(i > larger_number):
            larger_number = i
    for j in range(larger_number - 1, 0, -1):
        if(j > larger_number2):
            larger_number2 = j

    return larger_number * larger_number2

def move_zeros_to_the_end(list_of_numbers):
    for i, element_value in enumerate(list_of_numbers):
        if(element_value == 0):
            list_of_numbers.append(list_of_numbers.pop(i))
    return list_of_numbers

def check_for_duplicates(list_of_numbers):
    for i, element_value in enumerate(list_of_numbers):
        if(list_of_numbers.count(element_value) > 1):
            return True
        
    return False
    

dictionary_flip()
text = input("Enter a text:") 
dictionary = {}
split = text.split()
for text in split:
    word_frequency_count(text)
for allKeys in dictionary:
    print(allKeys, end = ":")
    print(dictionary[allKeys])
merge_dictionaries()
list_of_numbers = [2, 0, 6, 0, 4, 7]
print(maximum_product_of_two_numbers(list_of_numbers))
print(move_zeros_to_the_end(list_of_numbers))
print(check_for_duplicates(list_of_numbers))