import java.util.*;

class StackDemo
{
    public static void main(String A[])
    {
        Stack<String>sobj = new Stack<>();
        sobj.push("Pune");
        sobj.push("Mumbai");
        sobj.push("Kolhapur");
        System.out.println("sobj size is : "+sobj.size());
        System.out.println("Stack elements are : "+sobj);
    
        System.out.println(sobj.pop());
        System.out.println(sobj);

        System.out.println(sobj.peek());
        System.out.println(sobj);
        
        sobj.push("Nashik");
        sobj.push("satara");

        Iterator<String> iobj = sobj.iterator();
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
        if(sobj.search("Mumbai") != -1)
        {
            System.out.println("Mumbai is found in stack");

        }
        else
        {
            System.out.println("Mumbai is not found in stack");
        }
    }



}
