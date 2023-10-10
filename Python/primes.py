# -*- coding: utf-8 -*-

from functools import reduce

def is_prime(n):
    if n <= 1:
        return False
    return all(n % i != 0 for i in range(2, int(n ** 0.5) + 1))

def check_prime(num):
    if is_prime(num):
        return f"{num} é um número primo."
    else:
        return f"{num} não é um número primo."

# insert the numbers
numbers = [2, 4, 7, 10, 13, 15, 20, 30, 50]

results = list(map(check_prime, numbers))
print(results)

primes = list(filter(is_prime, numbers))
print("São primos: ", primes)

total = reduce(lambda x, y: x + y, primes)
print("A soma total dos primos é: ", total) 
