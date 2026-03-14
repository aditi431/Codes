# A built-in data type that stores set of values
# It can store elements of different types(integer,float,string,etc)
# strings are immutable(cannot be modified) like we have "hello" we cant change str[0] = "y"
# But List are mutable(can be modified) like student = ["adi",98.5] we can change student[0] = "aditi"
marks = [67,54,7,52,4,65]
print(marks)
print(type(marks))
print(marks[0])
print(marks[1])
print(len(marks))

student = ["adi",98.5,"USA"]
print(student[0])
student[0] = "Aditi"
print(student[0])


# List Slicing 
# Similar to string slicing

#listname[start_idx : end_idx] end idx not included
marks = [87,45,23,42,54,45]
print(marks[1:4]) #sublist
print(marks[ :4])
print(marks[1:])
print(marks[-3:-1])




