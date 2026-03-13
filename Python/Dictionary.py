# Dictionaries are used to store data values in key:value pairs
# They are unordered , mutable(changeable) & dont allow duplicate keys

info = {"key":"value","name":"Aditi","learning":"coding","age":19,"is_adult" : True,"marks": 94.4 }
print(info)

Dict = {"name":"Aditi","subjects":["python","C"],"Topics":("dict","set")}
print(Dict)
# Key can be strings,int , float,boolean or tuple which are immutable
print(type(info))

# Strings , list and tuple has ordered values i.e they has index for each value
# Dictionary has no index so there is no order in dictionary

# Access :
print(info["name"])

print(Dict["subjects"])



# Mutable : 
info["name"] = "Vidhi"
info["Surname"] = "Sharma" # new pair is added
print(info)

# Empty dictionary
null_dict = {}
print(null_dict)
null_dict["name"] ="apnacollege"
print(null_dict)