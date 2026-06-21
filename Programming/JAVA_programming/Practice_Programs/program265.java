//using Char.At() method is pretty EXhausting hence we use a method which converts string into CAHaracter array in java


import java.util.*;


class program265
{
    @SuppressWarnings("unused")
    public static void main(String A[])
    {
    Scanner sobj = new Scanner(System.in);

    String Arr = null;

    System.out.println("Enter String: ");
    Arr = sobj.nextLine();
    
    System.out.println("length of String is: "+Arr.length());

    char str[] = Arr.toCharArray();

    int i=0;
    for(i = 0; i<str.length;  i++)
    {
        System.out.println(str[i]);
    }
    sobj.close();
    }
}