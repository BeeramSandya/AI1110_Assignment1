numbers = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]


def checkprime(n):
    if n == 2:
        return 1
    for m in range(2, n):
        if n % m == 0: return 0
        else: return 1

def checkdiv4(n):
    if n % 4 == 0: return 1
    else: return 0

def checkdiv6(n):
    if n % 6 == 0: return 1
    else: return 0

def checkodd(n):
    if n % 2 != 0: return 1
    else: return 0

i1 = 0
i2 = 0
i3 = 0
i4 = 0
for n in numbers:
    i1 = i1 + checkprime(n)
    i2 = i2 + checkdiv4(n)
    i3 = i3 + checkdiv6(n)
    i4 = i4 + checkodd(n)

print("Probability of getting a card bearing a prime number is " + str(i1/10))
print("Probability of getting a card bearing a number that is divisible by 4 is " + str(i2/10))
print("Probability of getting a card bearing a number which is multiple of 6 is " + str(i3/10))
print("Probability of getting a card bearing a number which is odd is " + str(i4/10))