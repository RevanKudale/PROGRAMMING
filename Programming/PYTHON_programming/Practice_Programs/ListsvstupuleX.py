#----------------------------------------------
#           tupule          lists 
#-----------------------------------------------
#Ordered         yes             yes
#indexed         yes             yes
#Mutuable        no              yes
#Heterogeneous   yes            yes
#-----------------------------------------------

def main():
    Data1 = [10, 3.14, True, "Pune"]   #list #int #float #boolean #string
    Data2 = (10, 3.14, True, "Pune")   #tupule 
#This proves that  both of the data types support heterogenousity
    print(Data1)
    print(Data2)

    print(Data1[0])
    print(Data2[0])

if __name__ == "__main__":
    main()