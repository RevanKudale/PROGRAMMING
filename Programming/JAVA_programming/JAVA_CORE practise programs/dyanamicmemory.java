import java.util.Scanner;

class dyanamicmemory
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);
        int size=0;
        
        System.out.println("enter number of elements:");
        size = sobj.nextInt();

        //dynyamic memory allocation
        float marks[]=new float[size];
        
        //use the memory
        for(int i=0; i<size; i++)
        {
            System.out.println("enter marks for student "+(i+1)+":");
            marks[i]=sobj.nextFloat();
        }
        
        System.out.println("\nMarks entered:");
        for(int i=0; i<size; i++)
        {
            System.out.println("Student "+(i+1)+": "+marks[i]);
        }
        
        marks=null;
        System.gc(); //garbage collector
        sobj.close();

    }






}