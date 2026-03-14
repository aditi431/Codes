# nums = [1,4,9,25,36,49,64,81,100]
# for val in nums:
#     print(val)

# Search : 
nums = (1,4,9,25,16,36,49,64,81,100)
n = int(input("Enter n : "))
idx  = 0
for val in nums:
    if(val == n):
        print(n,"found at",idx)
    idx +=1
   




