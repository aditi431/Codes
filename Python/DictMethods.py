"""
myDict.keys() returns all keys
myDict.values() returns all values
myDict.items() returns all(key,val) pairs as tuples
myDict.get("key") returns key acc to value
myDict.update(newDict) inserts the specified items to the dictionary

"""

info = {"key":"value","name":"Aditi","learning":"coding","age":19,"is_adult" : True,"marks": 94.4 }
# keys :
print(info.keys())
print(list(info.keys()))
print(len(list(info.keys())))
print(len(info))
# values
print(list(info.values()))

# items
print(info.items())
pairs  = list(info.items())
print(pairs[0])

# get : 
#print(info["name2"]) # error
print(info.get("name2")) #returns none

# update : 
info.update({"city" : "delhi"})
print(info)





