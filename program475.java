import java.io.*;
import java.util.*;

class program475
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("\n---------------------------------------------------------");
        System.out.println("-----------Marvelous Packer UnPacker CUI Module----------");
        System.out.println("---------------------------------------------------------");
        Scanner sobj = new Scanner(System.in);

        System.out.println("--------------------Packing Activity---------------------\n");

        System.out.println("Enter the name of Directory : ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists()) 
        {
            System.out.println("Directory is successfully opened!");

            File Arr[] = fobj.listFiles();

            System.out.println("Total Number of files in the directory are : "+Arr.length);
        
            int i = 0, j = 0;

            String Header = "";

            for(i = 0; i < Arr.length; i++) 
            {
                Header = Arr[i].getName()+" "+Arr[i].length();
                System.out.println(Header);

                for(j = Header.length(); j < 100; j++)
                {
                    Header = Header + " ";
                }

                System.out.println("Header length is : "+Header.length());

                Header = "";
            }
        }
        else 
        {
            System.out.println("Directory is not present"); 
        }
        System.out.println("---------------------------------------------------------");
    } 
} 