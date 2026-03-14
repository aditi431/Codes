age = int(input("Enter age : "))
if(age>=18):
    if(age>=80):     #nesting
        print("Cannot drive")
    else:
        print("Can drive")
else:
    print("Cannot drive")