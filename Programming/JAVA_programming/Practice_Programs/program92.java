import java.util.*;


class DigitX
{
    public int ReverseNumber(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10; // Extract the last digit
            iRev = iRev * 10 + iDigit; // Build the reversed number   
            iNo = iNo / 10; // Remove the last digit
        }
        return iRev;
    }
} 
    
class program92
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = dobj.ReverseNumber(iValue);
        System.out.println("Reversed number is: " + iRet);

        sobj.close();
    }
}
