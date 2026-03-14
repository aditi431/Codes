# String is data type that stores a sequence of characters 
# Basic operation : Concatenation , length of string - spaces are not ignored when we count length

# escape sequence characters - gives formatting - tab , nextline
#Strings are immutable

# str1 = "Aditi"
# len1 = len(str1)
# print(len1)

# str2 = "Sharma"
# len2 = len(str2)
# print(len2)
# final = str1 + " " + str2
# print(len(final))
# print(final) #Concatenation

# Indexing : 
# str = "Aditi"
# ch = str[0]
# print(ch)

# str[1] = "e" can't be modified can access only

'''SLICING - FOR ML -to find relevant info from data
 slicing - Accessing parts of a string

 str[starting_idx : ending_idx] # ending idx is not included

 str = "ApnaCollege"
 str[1 : 4] is "pna"
 str[ :4] is same as str[0:4]
 str[1 :] is same as str[len(str)]

'''
# a = "apna college"
# print(a[1:4])
# print(a[0:])

# Special case of slicing - Negative index - backward counting
# A   p  p  l  e - 
# -5 -4 -3 -2 -1

# b = "apple"
# print(b[-3:-1])  # last index not included

w = "Welcome to ws"
print(w[0])
print(w[1])
print(w[8])
print(w[9])
print(w[6])
print(w[-1])




