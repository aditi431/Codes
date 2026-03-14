# def INR():
#     usd = int(input("Enter USD : "))
#     ToINR = usd*86.71
#     print("INR is : ",ToINR)

# INR()


def converter(usd_val):
    inr_val = usd_val*86.71
    print(usd_val,"USD = ",inr_val,"INR")

converter(5)