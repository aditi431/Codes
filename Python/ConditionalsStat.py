# if-elif-else (syntax)
'''
if(condition):
    Statement1
elif(condition):
    Statement2
else:
    StatementN

'''
age = 19
if(age >= 18):
    print("Can vote")


light = "green"
if(light == "red"):
    print("stop")
elif(light=="yellow"):
    print("Ready to go")
else:
    print("Go")

#if always checks condition but elif only checks when if is false
#eg:
num = 5
if(num>2):
    print("greater than 2")
#if(num>3):
    
    #print("greater than 3")
elif(num>3):
    print("greater than 3")


# when all the above conditions of else is false then else runs
# in python there is indentation in place of curly braces




