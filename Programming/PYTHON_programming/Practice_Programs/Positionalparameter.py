def Area(Radius, PI):
    Ans = PI*Radius*Radius
    return Ans

def main():
    Ret = Area(10.5, 3.14) #since this is positional value the input numbers are bydefault going get stored in the same order hya  way ne variables were defined before in the function
    print("Area of Circle is:", Ret)
    
    Ret = Area(13.6, 7.12)  #due to positional type whatever the value is entered it is going to get stored in the same way positional way
    print("Area of Circle is:", Ret)

if __name__ == "__main__":
    main()