
try:
    result = 10 / 0
    file = open("file.txt", "r")
    result2 = file.readlines()
except Exception as e:
    print("Custom Zero divizion")
finally:
    file.close()
    print("file is closed")