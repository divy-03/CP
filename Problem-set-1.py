# Q1: Write python program to print list of numbers using range and for loop.
n = int(input("Enter range: "))
numbers = []

# Loop to generate a list of numbers using range
for i in range(1, n+1, 1):
    numbers.append(i)

# Print the list of numbers
print(numbers)


# Q2: Write python program to print first n prime numbers
n = int(input("Enter the value of n: "))
primes = []
num = 2

# Loop to find the first n prime numbers
while len(primes) < n:
    is_prime = True

    # Check for prime number
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            is_prime = False
            break
    if is_prime:
        primes.append(num)
    num += 1

# Print the first n prime numbers
print(f"The first {n} prime numbers are: {primes}")

# Q3: Write python program to multiply matrices.
# Example matrices
matrix_a = [
    [1, 2, 3],
    [4, 5, 6],
]

matrix_b = [
    [7, 8],
    [9, 10],
    [11, 12],
]

# Check if matrices can be multiplied
if len(matrix_a[0]) != len(matrix_b):
    print("Matrices cannot be multiplied. Invalid dimensions.")
else:
    # Initialize the result matrix with zeros
    result_matrix = [[0 for _ in range(len(matrix_b[0]))]
                     for _ in range(len(matrix_a))]

    # Perform matrix multiplication
    for i in range(len(matrix_a)):
        for j in range(len(matrix_b[0])):
            for k in range(len(matrix_b)):
                result_matrix[i][j] += matrix_a[i][k] * matrix_b[k][j]

    # Print the matrices and the result
    print("Matrix A:")
    for row in matrix_a:
        print(row)

    print("\nMatrix B:")
    for row in matrix_b:
        print(row)

    print("\nResultant Matrix:")
    for row in result_matrix:
        print(row)


# # Q4: Write python program to let user enter some data in string and then verify data and print welcome to use
# # Get user input
# user_data = input("Enter some data: ")

# # Verify if the string contains only characters and not symbols
# if user_data.isalpha():
#     print(f"Welcome to the program, user! You entered: {user_data}")
# else:
#     print("Invalid data. Please enter a string with only characters and no symbols.")

# # Q5: Write a program to iterate the first 10 numbers, and in each iteration, print the sum of the current and previous number.
# for i in range(1, 10, 1):
#     # Calculate the sum
#     sum = i + (i + 1)

#     # Print the result using f-string
#     print(f"Sum of {i} + {i + 1} : {sum}")


# # Q6: Write a Python program that iterates the integers from 1 to 50. For multiples of three print "Fizz" instead of the number and for multiples of five print "Buzz". For numbers that are multiples of three and five, print "FizzBuzz".
# for i in range(1, 51):
#     s = ""
#     if i % 3 == 0:
#         s += "Fizz"
#     if i % 5 == 0:
#         s += "Buzz"
#     if s == "":
#         print(i)
#     else:
#         print(s)


# # Q8: Write a Python program that accepts a sequence of lines (blank line to terminate) as input and prints the lines as output (all characters in lower case).
# lines = []

# # Accept input lines until a blank line is entered
# while True:
#     line = input("Enter a line: ")

#     # Check for a blank line to terminate
#     if not line:
#         break

#     # Add the line to the list
#     lines.append(line)

# # Print the input lines in lowercase
# print("\nInput lines in lowercase:")
# for line in lines:
#     print(line.lower())

# # Q9: Write a Python program to find numbers between 100 and 400 (both included) where each digit of a number is an even number. The numbers obtained should be printed in a comma-separated sequence.
# evens = []

# for i in range(100, 401):
#     if i % 2 == 0:
#         evens.append(i)

# print(evens)

# # Q10: Write a Python program to check whether an alphabet is a vowel or consonant.
# char = input("Enter a character: ")

# if char in ['a', 'e', 'i', 'o', 'u']:
#     print("{} is vowel".format(char))
# else:
#     print("{} is consonant".format(char))
