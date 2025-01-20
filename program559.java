import java.util.*;

class Employee
{
    public int Eno;
    public String Ename;
    public int Eage;
    public String Eaddress;
    public int Esalary;

    public static int Counter;

    static
    {
        Counter = 1;
    }

    public Employee(String B, int C, String D, int E)
    {
        Eno = Counter++; 
        Ename = B;
        Eage = C;
        Eaddress = D;
        Esalary = E;
    }

    public void DisplayInformation()
    {
        System.out.println(Eno+"\t"+Ename+"\t\t"+Eaddress+"\t\t"+Eage+"\t\t"+Esalary);
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

    public void InsertIntoTable(String name, int age, String address, int salary)
    {
        Employee eobj = new Employee(name,age,address,salary);
        lobj.addLast(eobj);
        System.out.println("Record inserted successfully into the table");
    }

    // Select * from Employee;
    public void SelectStarFrom()
    {
        System.out.println("------------------------------------------------------------------------");
        System.out.println("No\t Name \t\t Age \t\t Address \t Salary ");
        System.out.println("------------------------------------------------------------------------");

        for(Employee eref : lobj)
        {
            eref.DisplayInformation();
        }

        System.out.println("------------------------------------------------------------------------");
    }

    // Select * from employee where Eno = 3;
    public void SelectSpecific(int id)
    {
        for(Employee eref : lobj)
        {
            if(eref.Eno == id)
            {
                eref.DisplayInformation();
                break;
            }
        }
    }

    // Select * from employee where Ename = "Amit";
    public void SelectSpecific(String str)
    {
        for(Employee eref : lobj)
        {
            if(str.equals(eref.Ename))
            {
                eref.DisplayInformation();
                break;
            }
        }
    }

    // delete from employee where Eno = 2;
    public void DeleteData(int no)
    {
        int index = 0;
        boolean bFlag = false;

        for(Employee eref : lobj)
        {
            if(eref.Eno == no)
            {
                bFlag = true;
                break;
            }
            index++;
        }

        if(bFlag == false)
        {
            System.out.println("Unable to remove the element as element is not present!");
        }
        else
        {
            lobj.remove(index);
        }
    }
}

class program559
{
    public static void main(String Arg[])
    {
        MarvellousDBMS mobj = new MarvellousDBMS();

        mobj.InsertIntoTable("Sagar",27,"Pune",11000);
        mobj.InsertIntoTable("Amit",28,"Mumbai",21000);
        mobj.InsertIntoTable("Pooja",26,"Satara",51000);
        mobj.InsertIntoTable("Nikhil",28,"Nashik",18000);

        mobj.DeleteData(2);

        mobj.SelectStarFrom();

        mobj = null;
        System.gc();
    }
} 
