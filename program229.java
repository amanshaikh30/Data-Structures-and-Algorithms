import java.util.*;

class program229
{
    public static void main(String Arg[])
    {
        int No1 = 10, No2 = 11, Ans = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        No1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        No2 = sobj.nextInt();

        Ans = No1 + No2;

        System.out.println("Addition is : "+Ans);
    }
}

/*
    nextInt()       =>  Accept int
    nextFloat()     =>  Accept float
    nextDouble()    =>  Accept double
    nextBoolean()   =>  Accept boolean
    nextLine()      =>  Accept char
*/