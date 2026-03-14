# Recursion - When a function calls itself repeatedly

def show(n): # recursive function
    if(n==0): # base case
        return
    print(n)
    show(n-1)

show(5)