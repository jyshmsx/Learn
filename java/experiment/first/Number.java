package inclass.experiment.first;


public class Number{
    protected int [] nu;

    public Number()
    {
        nu = new int [4];
    }

    public void setNumber()
    {
        System.out.println("请输入一个四位数");
        int n;
        n = BullsAndCows.sc.nextInt();
        for(int i = 0; i < 4; i++)
        {
            int wh =(int)(Math.pow((double)10, (double)(3 - i)));
            nu[i] = n / wh;
            n -= nu[i] * wh;
        }
    }

    public void showNumber()
    {
        for(int i = 0; i < 4; i++)
        {
            System.out.print(nu[i]);
        }
        System.out.println();
    }

    public int getNumber(int i)
    {
        return nu[i];
    }

}