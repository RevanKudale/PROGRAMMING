#Accept : one parameter
#Return : one value

def Marvellous(Value1):
    print("Inside Marvellous the passed value from main() is:",Value1) 
    return 21

def main():
    Ret = Marvellous(11)            #pishvi cha nav aahe Ret 
    print("Return Value is:",Ret)   #ani mg return value hee Ret madhe yenar
    

if __name__ == "__main__": #code strts from the line from 12
    main()
    