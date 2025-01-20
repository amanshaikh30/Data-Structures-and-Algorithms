import java.util.*;

class program255
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0, i = 0;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize]; 

        System.out.println("Enter the Elements : ");
        for(i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }        

        System.out.println("Elements of the array are : ");
        for(i = 0; i < iSize; i++)
        {
            System.out.println(Arr[i]); 
        }
    }
} 