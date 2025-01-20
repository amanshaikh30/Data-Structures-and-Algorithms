import java.util.*;

class Rectangle
{
    public float CalculateArea(float A, float B)
    {
        float fResult = 0.0f;
        fResult = A * B;
        return fResult;
    } 
}

class program235
{
    public static void main(String Arg[]) 
    {
        float fNo1 = 0.0f, fNo2 = 0.0f;
        float fAns = 0.0f;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Length : ");
        fNo1 = sobj.nextFloat();

        System.out.println("Enter Width : ");
        fNo2 = sobj.nextFloat();

        Rectangle robj = new Rectangle();          

        fAns = robj.CalculateArea(fNo1,fNo2); 

        System.out.println("Area is : "+fAns);
    }
}
