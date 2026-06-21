#Accept : multiple parameters
#Return : 21,51

def multiplication(No1, No2):
    return No1*No2

def Division(No1, No2):
    return No1/No2

def main():
    Ret1 = multiplication(10, 5)
    print("The multiplication is:",Ret1)
    
    Ret2 = Division(12, 6)
    print("The division is:",Ret2)    
    

if __name__ == "__main__": #code strts from the line from 12
    main()
    