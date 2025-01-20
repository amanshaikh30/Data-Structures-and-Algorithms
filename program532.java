import java.util.*;

class program532
{
    public static void BubbleSort(int Brr[])
    {
        int i = 0, j = 0, temp = 0;

        for(i = 0; i < Brr.length; i++)
        {
            for(j = 0; j < Brr.length - i - 1; j++)
            {
                if(Brr[j] > Brr[j+1])
                {
                    temp = Brr[j];
                    Brr[j] = Brr[j + 1];
                    Brr[j + 1] = temp;
                }
            }
            System.out.println("Data after Pass : "+(i+1));

            for(int k = 0; k < Brr.length; k++)
            {
                System.out.print(Brr[k]+"\t");
            }
            System.out.println();
        }
    }
    
    public static void main(String Arg[])
    {
        int iSize = 0, i = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the values : ");

        for(i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Elements of the Array are : ");

        for(i = 0; i < iSize; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();

        BubbleSort(Arr);

        System.out.println("Elements of the Array after sorting : ");

        for(i = 0; i < iSize; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }
}