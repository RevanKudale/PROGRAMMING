def Area(Radius, PI):
    Ans = PI*Radius*Radius
    return Ans

def main():
    Ret = Area(PI=3.14, Radius=10.5) #this is keyword arguement where we can define what value goes in what variabale
    print("The Area of circle is:",Ret)
    

if __name__ == "__main__":
    main()