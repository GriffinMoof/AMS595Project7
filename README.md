# AMS595Project7


Problem1:  It will prompt the user to enter a number, if it is -1 or 1, it will print either “negative one” or “positive one”. If the number isn't -1 or 1 it will print “other number.”

Problem2_to_5--------------------------------------------------------------------------------------------------------------------

print_vector: The function takes an input of a vector that stores integers. The function will then loop through the vector 
and print each number in a single line, separated by spaces. The function will then end the line.

Fibonacci: I initialized two integer variables, fib1 = 1 and fib2 = 2. I also initialised coin = 0 so that I could start a new 
line every 10 fibonacci numbers. The while loop will go until fib1 reaches a number greater than 4,000,000. Inside the loop, it
starts by printing fib1 and then checking if count is divisible by 0 so it can end the line and start a new one. I then put fib1
into a temporary value, put fib2 into fib1 and calculate a new fib2 with temp + fib2. 

is_prime:  The function takes an integer n as an input and outputs a boolean value based on whether or not the integer is a prime number. It will loop through numbers 2 to n and check if n%i ==0. If this holds true the function will returnfalse. If the loop goes through every number function will return true. 

factorize: The function takes an integer n as an input and outputs a vector containing all factors of the number. It will loop through numbers 1 to n and check if n%i == 0. If this holds true the number i will get inserted into our vector. Onceall numbers have been checked, the function will return the vector. 


prime_factorize: The function takes an integer n as an input and outputs a vector containing all prime factors of the number. It will loop through numbers 1 to n and check if n%i == 0 and isprime(i) == true. If both hold the integer i will get  inserted into our vector. Once all numbers have been checked, the function will return the vector. 

pascal: the function pascal takes an integer n and produces the first n rows of pascals triangle. The function begins by
initializing two vectors, prev and current. The vector current contains the first row of pascals triangle.The function uses an
iterative method. It will loop from numbers 0 to n, one iteration per row. The loop will start by printing the values in the 
vector current. It will then set prev to current and then clear current of any numbers. We than insert 1 into current and start a
second loop that will iterate through the previous row and calculate the current row of pascals triangle. Once the loop finishes
we add 1 to the end of current and start the next iteration of the outer for loop. 
