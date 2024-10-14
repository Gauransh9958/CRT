X, P = map(float, input().split())

original_price = P / (1 - X / 100)

print(f"{original_price:.2f}")
