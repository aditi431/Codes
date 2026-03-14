
# n = 5
# for i in range(0,n):
#     print("  "*i,end=" ")
#     for j in range((n-i),0,-1):
#         print("*", end= " ")
#     print()

abc = input("Enter string : ")
# abc = "Hello tony stark , peter parker and captain marvel who are my fav"
count = 1

for i in range(0,len(abc)):
    if(abc[i] == " "and abc[i+1].isalnum()):
        count +=1
print(count)

# # Compound interest
# P = int(input("Enter the Principle : "))
# r = int(input("Enter rate : "))
# n = int(input("Enter n : "))
# t = int(input("Enter t : "))

# CI = (P*(1 + (r/n))**(n*t))
# print(CI)

# # greater 

# a = int(input("enter a : "))
# b = int(input("enter b : "))
# c = int(input("enter c : "))

# if(a>b and a>c):
#     print(a,"is greter")
# elif(b>a and b>c):
#     print(b,"is greater")
# else:
#     print(c,"is greater")

# # Multiplication table
# n = int(input("Enter n : "))

# for i in range(1,11):
#     print(n,"X",i,"=",n*i)


