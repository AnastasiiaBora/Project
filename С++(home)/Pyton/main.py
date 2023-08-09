num_str = input("Enter a number:") 
num_str = int(num_str)
for i in range(2, num_str, 1):
   if(num_str % i == 0):
      print("Composite number") 
      break
   else:
      print("Prime number")
      break
      
if(num_str == 2):
   print("Prime number")
elif(num_str < 2):
      print("Please enter a different number")