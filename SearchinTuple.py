nums = (1,4,9,25,36,49,64,81,100)
ele = int(input("Enter element to search : "))
i = 0
while i<len(nums):
    if(nums[i]==ele):
        print(ele,"is found at index",i)
        break
        
    else:
        print("Element not found")
    i +=1