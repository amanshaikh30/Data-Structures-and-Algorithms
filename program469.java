import java.io.*;
import java.util.*;

class program469
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of Directory : ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists()) 
        {
            System.out.println("Directory is present");

            File Arr[] = fobj.listFiles();

            System.out.println("Number of files in the directory are : "+Arr.length);
        
            int i = 0;

            for(i = 0; i < Arr.length; i++)
            {
                System.out.println("File Name is : "+Arr[i].getName()+"\tFile Size is : "+Arr[i].length());
            }
        }
        else 
        {
            System.out.println("Directory is not present"); 
        }
    } 
} 