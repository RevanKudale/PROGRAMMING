import java.util.*;


class DigitX
{
    public boolean CheckPalindrome(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = 0; // Store the original number for comparison

        iTemp = iNo; // Store the original number

        while(iNo != 0)
        {
            iDigit = iNo % 10; // Extract the last digit
            iRev = (iRev * 10) + iDigit; // Build the reversed number   
            iNo = iNo / 10; // Remove the last digit
        }

       if(iRev == iTemp) // Compare the reversed number with the original number
       {
           return true; // It's a palindrome
       }
       else
       {
           return false; // Not a palindrome
       }
    }
} 
    
class program93

{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        bRet = dobj.CheckPalindrome(iValue);
        if(bRet == true)
        {
            System.out.println("Number is palindrome");
        }
        else
        {
            System.out.println("Number is not palindrome");
        }

        sobj.close();
    }
}
