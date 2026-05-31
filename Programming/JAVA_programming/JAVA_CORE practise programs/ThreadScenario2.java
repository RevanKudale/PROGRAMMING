class Demo implements Runnable
{
    public void run()
    {
        System.out.println("inside Run method");
    }
}
class ThreadScenario2
{
    public static void main(String A[])
    {   
        System.out.println("Main Thread is running.....");

        Demo dobj =new Demo(); //demo cha object created

        Thread tobj=new Thread(dobj); //tobj cha object created and demo cha object pass kela

        tobj.start(); //start method call kela to run method call hoil and thread create hoil




    }

}