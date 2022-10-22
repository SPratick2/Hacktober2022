numbers = []
n=int(input("Enter num"))
for i in range(0,n):
  i=int(input())
  numbers.append(i)
max_value = None
for num in numbers:
    if (max_value is None or num > max_value):
        max_value = num
print('Maximum value:', max_value)
