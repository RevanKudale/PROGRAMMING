class Base
{
    int i,j;
    public void fun()
    { System.out.println("Base class fun");}

     public void gun()
    { System.out.println("Base class gun");}

    public void Sun()
    { System.out.println("Base class Sun");}
    


} 
 
 class Derived extends Base
 {
    public int x,y;
    public void gun()
    {System.out.println("inside derived gun");}

    public void Sun()
    {System.out.println("inside derived gun");}

    public void Run()
    {System.out.println("inside derived gun");}
 }
 class RMD 

        public static void main(StringA[])
    {
        Base bobjBase = new Derived();
       // Derived dobjDerived = new Derived();

        Derived dobjDerived=new base();
        bobj.fun();
        bobj.gun();
        bobj.sun();
        bobj.run();
    }

