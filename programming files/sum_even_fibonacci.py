a, b = 0, 1
sum_even = 0

while b < 4000000:
    #if b is even add it to total sum 
    if b % 2 == 0:
        sum_even += b
    #add the current integer to the previous integer
    a, b = b, a+b
#print out sumEven
print(sum_even)

# answer should be 4613732
