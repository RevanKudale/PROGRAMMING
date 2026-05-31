import java.util.*;


class DigitX
{
    public int SumDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10; // Extract the last digit
            iSum += iDigit; // Add the digit to the sum
            iNo = iNo / 10; // Remove the last digit
        }
        return iSum;
    }
} 
        


class program89
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = dobj.SumDigits(iValue);
        System.out.println("Sum of digits is: " + iRet);

        sobj.close();
    }
}
