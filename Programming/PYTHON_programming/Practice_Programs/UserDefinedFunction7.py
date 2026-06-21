def Calculation(No1, No2):
    Mult = No1*No2
    Div = No1/ No2
    return Mult, Div

def main():
    
    Value1 = int(input("Enter the first number:"))
    Value2 = int(input("Enter the second number:"))

    Ret1 , Ret2 = Calculation(Value1, Value2)
    print("The Multiplication is:", Ret1)
    print("The Division is:", Ret2)

if __name__ == "__main__": #code strts from the line from 12
    main()
    