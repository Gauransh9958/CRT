C = input().strip()

if C == 'z':
    print('a')
else:
    next_char = chr(ord(C) + 1)
    print(next_char)
