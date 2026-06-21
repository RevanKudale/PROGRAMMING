def Area(PI=3.14, Radius):     #Error SyntaxError: parameter without a default follows parameter with a default
    Ans = PI*Radius*Radius
    return Ans

def main():
    Ret = Area(10.5)
    print("The Area of circle is:", Ret)

    Ret = Area(10.5, 7.12)
    print("The Area of circle is:", Ret)
    

if __name__ == "__main__":
    main()