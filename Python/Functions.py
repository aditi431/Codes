"""
Block of statements that performs a specific task.

def func_name(param 1, param 2..):
    some work
    return val

func_name(arg 1,arg 2) # function call

functions are used to reduce redundancy(repeation) of code

"""
# function definition

# def sum(a,b):
#     s  = a+b
#     print(s)
#     return s

def sum(a,b): #parameters
    return a+b

print(sum(4,6)) # function call ; arguments

def print_hello():
    print("Hello")


print_hello()
print_hello()
print_hello()
print_hello()

output = print_hello()
print(output) # None because print_hello returns nothing