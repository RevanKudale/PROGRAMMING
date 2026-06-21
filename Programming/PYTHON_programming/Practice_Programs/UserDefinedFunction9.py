#HOW to CAll the AMUL() function from BIGBAZAR FUNCTION()

def Bigbazar():
    print("Inside Bigbazar(this is the outer function)")

    def Amul():
        print("Inside Amul IceCream parlor")
        print("Y have Successfully the inner function which is Amul")

    Amul() #we can call the inner function only when the outer function is already called which is called at line on 12
    Amul()

def main():
    Bigbazar()          
              
if __name__ == "__main__": 
    main()
    