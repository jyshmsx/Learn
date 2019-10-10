package inclass.experiment.first;

//定义Number类，用以存储数字
public class Number{
    protected int [] nu;

    public Number()
    {
        nu = new int [4];
    }

    public void setNumber()
    {
        int n;
        do
        {
            System.out.println("请输入一个四位数");
            n = BullsAndCows.sc.nextInt();
        }while(!checkNuber(n));
        
        for(int i = 0; i < 4; i++)
        {
            int wh =(int)(Math.pow((double)10, (double)(3 - i)));
            nu[i] = n / wh;
            n -= nu[i] * wh;
        }
    }

    private boolean checkNuber(int n)
    {
        return (n > 1000 & n < 10000);
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