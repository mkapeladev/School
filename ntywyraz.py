def nty(n):
    if n == 1:
        return 1
    elif n == 2:
        return 0.5
    return -nty(n-1) * nty(n-2)
print(nty(int(input("podaj wyraz który ma obliczyć: "))))