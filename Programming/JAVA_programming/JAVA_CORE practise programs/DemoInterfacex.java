interface Circle
{
    //characterstics 
    float pi=3.14f;                                     //public static final by default

    //behaviour (public abstract by default)
    float area(float radius );                         //public abstract by default
    float circumference(float radius);                 //public abstract by default

}
class Marvellous implements Circle
{
    public float area(float radius ) 
    {
        return Circle.pi*radius*radius;
    }          

    public float circumference(float radius)
    {
        return 2*Circle.pi*radius;
    }
}



class DemoInterfacex
{
   public static void main(String[] A)
{
    Marvellous mobj = new Marvellous(); 
    float Ret = 0.0f;

    Ret = mobj.area(10.5f);
    System.out.println("Area of circle is : " + Ret);

    Ret = mobj.circumference(10.5f);
    System.out.println("Circumference of circle is : " + Ret);
}
    

}