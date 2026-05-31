class Demo extends Thread
{
    public void run()
    {
        int i=0;
       try
        {
            for(i=0;i<10;i++)
            {

            System.out.println("inside Run method of: "+Thread.currentThread().getName()+ " : " +i );
            Thread.sleep(3000);   // sleep() method is used to pause the execution of the thread for a specified time in milliseconds.
            }
        }
        catch(Exception eobj)
        {
        }
    }
}
class MultiThreadingSleep
{
    public static void main(String A[]) throws Exception
    {   
        System.out.println("Main Thread is running.....");
        Demo dobj1 = new Demo();          
        Demo dobj2 = new Demo();

        dobj1.setName("First Thread");      // setName() method is used to set the name of the thread
        dobj2.setName("Second Thread");     // setName() method is used to set the name of the thread

        dobj1.start();                      //starting the thread by calling start() method which internally calls the run() method
        dobj2.start();

        dobj1.join();                       // join() method is used to wait for the thread to die. 
        dobj2.join();    // It means that the main thread will wait until the thread dobj1 and dobj2 finishes its execution

        System.out.println("Main Thread Ends");
    }

}