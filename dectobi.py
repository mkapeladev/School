liczba = int(input("podaj liczbe: "))
i = 0
tab = []
while liczba != 0:
    tab.append(liczba % 2)
    liczba //= 2
    i += 1
tabr = tab[::-1]
print(tabr)


