import java.util.*;

class program140
{
    public static void main(String A[])

    {
        Scanner sobj = new Scanner(System.in);
        
        int Arr[] = {10,20,30,40,50};
        //BAD PROGRAMMING PRACTICE
        for(int iCnt = 0; iCnt < Arr.length; iCnt++) //worst programming practise y are not suppose to initialise the iCnt variable in the for loop because it is local to the for loop and we cannot access it outside the for loop because it is out of scope
        {
            System.out.println(Arr[iCnt]);
        }
       // System.out.println(iCnt); //we cannot use iCnt here because it is local to the for loop and we cannot access it outside the for loop because it is out of scope
        

        sobj.close();

    }
}