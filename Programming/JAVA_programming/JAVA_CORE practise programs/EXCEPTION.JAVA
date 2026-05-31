import java.util.*;
class EXCEPTION
{
    public static void main (String A[])
    {
        Scanner sobj=new Scanner(System.in);

        int No1=0,No2=0,Ans=0;

        System.out.println("enter first number:");
        No1=sobj.nextInt();

        System.out.println("enter second number: ");
        No2=sobj.nextInt();

        try
        {
            System.out.println("inside try block");
             Ans=No1/No2;
        }
        catch(ArithemeticException obj)
        {
            System.out.println("inside catch block");
            System.out.println("Exception occured : "+obj);
        }
        System.out.println("Division is : "+Ans);





    }
}