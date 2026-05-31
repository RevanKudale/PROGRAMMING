class Demo extends Thread
{
    public void run()
    {
        int i=0;
        for(i=0;i<1000;i++)
        {
            System.out.println("inside Run method of: "+Thread.currentThread().getName()+ " : " +i );
            
        }
    }
}
class MultiThreadingLoop
{
    public static void main(String A[])
    {   
        System.out.println("Main Thread is running.....");
        Demo dobj1 = new Demo();          
        Demo dobj2 = new Demo();

        dobj1.setName("First Thread");      // setName() method is used to set the name of the thread
        dobj2.setName("Second Thread");     // setName() method is used to set the name of the thread

        dobj1.start();                       //starting the thread by calling start() method which internally calls the run() method
        dobj2.start();
        
    }

}