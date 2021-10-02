def Fibonacci(N):
    if N == 1:
        return A
    elif N == 2:
        return B
    else:
        return (Fibonacci(N-1))**2 + Fibonacci(N-2)

line = input().strip().split()
A, B, N = int(line[0]), int(line[1]), int(line[2])

print(Fibonacci(N))
