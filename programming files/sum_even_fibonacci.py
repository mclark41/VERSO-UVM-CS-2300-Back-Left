a, b = 0, 1  # Define starting values
sum_even = 0
while b < 4000000: # Sets upper limit
    if b % 2 == 0: # Uses the fact that all even numbers are divisible by 2 to check it is even
        sum_even += b # Adds b to the sum
    a, b = b, a+b # Updates the values

print(sum_even) # Prints the result

# answer should be 4613732
