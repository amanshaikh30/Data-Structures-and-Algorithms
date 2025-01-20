import java.util.*;

class Employee
{
    public int Eno;
    public String Ename;
    public int Eage;
    public String Eaddress;
    public int Esalary;

    public Employee(int A, String B, int C, String D, int E)
    {
        Eno = A;
        Ename = B;
        Eage = C;
        Eaddress = D;
        Esalary = E;
    }

    public void DisplayInformation()
    {
        System.out.println("Employee no : "+Eno+" Name : "+Ename+" Address : "+Eaddress+" Age : "+Eage+" Salary : "+Esalary);
    }
}

class MarvellousDBMS
{
    public LinkedList <Employee>lobj;

    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS started successfully...");
        lobj = new LinkedList<Employee>();
    }

    protected void finalize()
    {
        System.out.println("Deallocating all resources of Marvellous DBMS...");
        lobj.clear();
        lobj = null;
    }

    // insert into table employee values(1,"Aman",21,"Pune",100000)
    public void InsertIntoTable(int no, String name, int age, String address, int salary)
    {
        Employee eobj = new Employee(no,name,age,address,salary);
        lobj.addLast(eobj);
        System.out.println("Record inserted successfully into the table");
    }
}

class program553
{
    public static void main(String Arg[])
    {
        MarvellousDBMS mobj = new MarvellousDBMS();

        mobj.InsertIntoTable(1,"Sagar",27,"Pune",11000);

        mobj = null;
        System.gc();
    }
} 
