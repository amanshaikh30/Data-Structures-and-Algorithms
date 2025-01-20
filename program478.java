import java.io.*;
import java.util.*;

class program478
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

        System.out.println("Enter the name of packed file that you want to create : ");
        String PackName = sobj.nextLine();

        File Packobj = new File(PackName);
        boolean bRet = false;

        bRet = Packobj.createNewFile();

        if(bRet == true)
        {
            System.out.println("Packed file gets successfully created with the name : "+PackName);
        }
        else
        {
            System.out.println("Unable to proceed as pack file is not created");
            return;
        }

        FileOutputStream fopackobj = new FileOutputStream(Packobj);

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

                for(j = Header.length(); j < 100; j++)
                {
                    Header = Header + " ";
                }

                fopackobj.write(Header.getBytes(),0,100);

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