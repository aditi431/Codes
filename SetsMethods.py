# Hashable - immutable
# unhashable - mutable - list , dict , sets


collection = set()
collection.add(1)
collection.add(2)
collection.add(2)
collection.remove(1)
collection.add((1,2,3))
# collection.clear() #empties the set
print(collection.pop())
 # removes random value
print(collection.pop())
print(collection)

# union 
set1 = {1,2,3}
set2 = {3,4,5}
print(set1.union(set2))

# Intersection 

print(set1.intersection(set2))


