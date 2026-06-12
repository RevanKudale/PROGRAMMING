import java.util.*;

class ArrayX
{
    public void Update(int Arr[], int iSize)
    {
        int iCnt = 0;
        for(iCnt=0; iCnt<iSize; iCnt++)
        {
            Arr[iCnt]++;
        }
    }
} 
class program146
{
     public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int Brr[] = {10, 20 ,30, 40, 50};
        int iCnt = 0;

        System.out.println("Array of elements before the function call: ");

        for(iCnt=0; iCnt<5; iCnt++)
        {
            System.out.print(Brr[iCnt] + " ");
        }
        System.out.println("\nArray of elements after the function call: ");
        ArrayX aobj = new ArrayX();
        aobj.Update(Brr,5);

        for(iCnt=0; iCnt<5; iCnt++)
        {
            System.out.print(Brr[iCnt] + " ");
        }
        sobj.close();
    }

   
} 



