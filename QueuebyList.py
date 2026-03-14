# First in first out 

l = []
while True:
    n = int(input('''
    1 Enqueue
    2 Dequeue
    3 Front
    4 Rear
    5 Display Queue
    6 Exit

    
    '''))

    if n == 1:
        e = input("Enter Element : ")
        l.append(e)
        print(l)

    elif n == 2:
        if len(l) == 0:
            print("Empty Queue")
        else:
             r = l.remove(l[0]) # del l[0]
             print(l)

        
       
    
    elif n == 3:
        if len(l) == 0:
            print("Empty Queue")

        else:


        
            print("Front element is : ",l[0])

    elif n == 4:
        if len(l) == 0:
            print("Empty Queue")

        else:

            print("Rear Element is : ",l[-1])

    elif n == 5:
        if len(l) == 0:
            print("Empty Queue")

        else:


            print("Queue is",l)

    elif n == 6:
        break
        

    else:
        print("Invalid Choice")

    

    

    

