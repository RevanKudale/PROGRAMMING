class Student 
{
    public String Name;
    public int age;
    public int Marks;

    Student(String A, int B, int C)
    {
        this.Name = A;
        this.Age = B;
        this.Marks = C;
    }
    
    public String toString()
    {
        return "Marvellous Pune";
    }
}




class TwoStringDemoStudent
{
    public static void main (String A[])
    {
        Student sobj = new Student("Amit,27,98");
        System.out.println("sobj");
    }
}
