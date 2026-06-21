def Bigbazar():
    print("Inside Bigbazar")

    def Amul():
        print("Inside Amul IceCream parlor")

def main():
    Bigbazar()          #ALLOWED
    Amul()              #ERROR
    Bigbazar.Amul()     #ERROR
    
   
if __name__ == "__main__": #code strts from the line from 12
    main()
    