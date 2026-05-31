import java.util.*;


class DigitX
{
    public int CountDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10; // Extract the last digit
            if( iDigit == 7)
            {
                iCount++;
            }
            iNo = iNo / 10; // Remove the last digit
            
        }
        return iCount;
        }
        
}

class program85
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = dobj.CountDigits(iValue);
        System.out.println("Number of digits are: " + iRet);

        sobj.close();
    }
}
