# built to benchmark sum of n number in C++ vs python

import sum_module
import dsapp
import time

def sum(n):
    sum =0
    for i in range(n):
        sum += i
    return sum


start = time.time()
print("Sum in C++:", sum_module.compute_sum(123456789))
end = time.time()
print("C++ Time taken:", end - start)

start = time.time()
print("Sum in python:", sum(123456789)) 
end = time.time()
print("Python Time taken:", end - start)    


