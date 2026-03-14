# type conversion : # Automatic conversion by python interpreter 

a = 2
b = 4.25
sum = a + b
print(sum)
# python convert int to superior value i.e float- 2.0 + 4.25

# type casting : manual conversion

# a = "2"  Error arises 
# b = 4.25 
# print(a+b)

a = int("2") # strings like name cannot be converted to float or int
b = 4.25
print(type(a))
print(a+b)

c = 4.7
c = str(4.7)
print(type(c))



