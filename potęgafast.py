podstawa = int(input("Podaj podstawe: "))
wykladnik = int(input("Podaj wykładnik: "))
wynik = 1

while wykladnik > 0:
    if wykladnik % 2 == 1:
        wynik *= podstawa
    podstawa  += podstawa
    wykladnik //= 2
print(wynik)
