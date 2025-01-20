import java.io.*;
import java.util.*;

class program448
{
    public static void main(String Arg[]) 
    {
        try
        {
            boolean bret = false;

            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the File name that you want to create : ");
            String name = sobj.nextLine();

            File fobj = new File(name);
            
            bret = fobj.createNewFile();

            if(bret == true)
            {
                System.out.println("File successfully created");
            }
            else
            {
                System.out.println("Unable to create the file");
            }
        }
        catch(Exception eobj) 
        {
            System.out.println("Exception occured..."+eobj);
        }
    }
}
