class MainThreadPriority
{
    public static void main(String A[])
    {
        System.out.println("Inside main thread");
        
        Thread tobj=Thread.currentThread();

        String name=tobj.getName();

        System.out.println("Name of current thread is : "+name);

        System.out.println("Priority of current thread is : "+tobj.getPriority());    // default priority is 5
    }

}