import java.io.*;
import java.util.*;

class program450
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

            if(fobj.exists())
            {
                System.out.println("File is already existing in the folder!");
            }
            else
            {
                bret = fobj.createNewFile();

                if(bret == true)
                {
                    System.out.println("File successfully created");

                    FileOutputStream foobj = new FileOutputStream(fobj);
                    foobj.write("Alhamdulillah...");
                }
                else
                {
                    System.out.println("Unable to create the file");
                }
            }
        }
        catch(Exception eobj) 
        {
            System.out.println("Exception occured..."+eobj);
        }
    }
}
