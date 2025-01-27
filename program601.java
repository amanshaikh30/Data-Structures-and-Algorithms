class program601
{
    public static void main(String Arg[])
    {
        int array[] = {10,20,30,40,50};
        int min = array[0];

        for(int i : array)
        {
            if(i < min)
            {
                min = i;
            }
        }
        System.out.println("Smallest Number is : "+min);
    }
}