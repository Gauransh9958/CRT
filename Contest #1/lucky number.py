N = int(input().strip())

tens_digit = N // 10
units_digit = N % 10

if (tens_digit != 0 and units_digit % tens_digit == 0) or (units_digit != 0 and tens_digit % units_digit == 0):
    print("YES")
else:
    print("NO")
