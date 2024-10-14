def main():
    a, b, c, d = map(int, input().split())

    p1 = a + b - c
    p2 = a - b + c
    p3 = a * b - c
    p4 = a - b * c
    p5 = a * b + c
    p6 = a + b * c

    if d in (p1, p2, p3, p4, p5, p6):
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()
