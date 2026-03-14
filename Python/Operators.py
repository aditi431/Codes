"""
Operators : Performs a certain operation between operands

Arithmetic (+ , - , * , / , % ,**)
Relational / Comparison (== , != , > , < , >= ,<=)
Assignment (= , += , -= , *= , /= , %= , **=)
Logical (not,and,or)

"""
# Arithmetic Operators
a = 5
b = 2

# print(a+b)
# print(a-b)
# print(a*b)
# print(a/b)
# print(a%b)
# print(a**b)
# print(a//b)

# Relational Operators - returns boolean value
print(a==b)
print(a != b)
print(a>=b)
print(a>b)
print(a<=b)
print(a<b)

# Assignment Operators

num = 10
num += 10
print(num)
num -= 10
print(num)
num *= 10
print(num)
num /= 10
print(num)
num **=2
print(num)
num %=10
print(num)

# Logical Operators
print(not False)
print(not True)
print(not (a>b))

val1 = True
val2 = False
print("and operator : ",val1 and val2) # True only when both is true
print("Or operator : ",val1 or val2) # False when both is false
print("OR operator : ", (a==b) or (a>b))
print("And operator : ", (a==b) and (a>b))










