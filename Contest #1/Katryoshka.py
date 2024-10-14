def main():
    eyes, mouths, bodies = map(int, input().split())

    Katryoshkas = 0

    if eyes == 0 or mouths == 0:
        Katryoshkas = 0
    elif mouths == 0 and eyes >= 2:
        Katryoshkas = min(eyes // 2, bodies)
    elif mouths > 0 and eyes > 0 and bodies > 0:
        if mouths < eyes and mouths < bodies:
            Katryoshkas = mouths
            bodies -= Katryoshkas
            eyes -= Katryoshkas
            Katryoshkas += min(eyes // 2, bodies)
        else:
            Katryoshkas = min(eyes, bodies)

    print(Katryoshkas)

if __name__ == "__main__":
    main()
