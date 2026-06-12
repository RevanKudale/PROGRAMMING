import java.util.*;

class HashtableDemoX
{
    public static void main(String A[])
    {
        Hashtable <String, Integer> hobj = new Hashtable<String, Integer>();
        hobj.put("PPA",27000);
        hobj.put("LB",28000);
        hobj.put("PYTHON",29000);
        hobj.put("LB",28500);

        Enumeration eobj = hobj.keys();
        while(eobj.hasMoreElements()) // hasMoreElements() method is used to check whether there are more elements in the enumeration or not.
        {
            System.out.println(eobj.nextElement());
        }
    }
}
