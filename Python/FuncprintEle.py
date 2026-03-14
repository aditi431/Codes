List = [1,3,5,6,8,3]
heroes = ["thor","Iron man","dr doom","Spider man"]

def print_ele(list):
    for i in range(0,len(list)): # or for item in list :
        print(list[i],end= " ")  # print(item,end = " ")
    print("\n")

print_ele(List)
print_ele(heroes)
