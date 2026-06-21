def Display(*Data):         #this * is varible no of arguements
    print(Data)
    print(type(Data))           #class tupule which means inner data canot be changed

def main():
    Display(10,45.5, False, "python", 20,30)          
#this function can display whatsoever the number of values we have asked to the display function
if __name__ == "__main__":
    main()