package inclass.experiment.first;


public class GuessNumber{
    private Number anNumber, guNumber;
    private char [] flag;
    private int A, B;

    public GuessNumber(Number nb)
    {
        anNumber = nb;
        guNumber = new Number();
        flag = new char [4];
    }

    private void clearFlag()
    {
        A = 0;
        B = 0;
        flag = new char[] {'0','0','0','0'};
    }

    private void setFlag(int i,char a)
    {
        flag[i] = a;
    }

    private char getFlag(int i)
    {
        return flag[i];
    }

    private void compareA()
    {
        for(int i = 0; i < 4; i++)
        {
            if(anNumber.getNumber(i) == guNumber.getNumber(i))
            {
                setFlag(i, 'A');
                A++;
            }
        }
    }

    private void compareB()
    {
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                if(anNumber.getNumber(j) == guNumber.getNumber(i) && this.getFlag(i) == '0' && this.getFlag(j) == '0')
                {
                    this.setFlag(i, 'B');
                    B++;
                }
            }
        }
    }

    private boolean compareNumber()
    {
        this.clearFlag();
        compareA();
        compareB();
        System.out.print(A);
        System.out.print('A');
        System.out.print(B);
        System.out.println('B');

        // for(int i = 0; i < 4; i++)
        // {
        //     System.out.println(flag[i]);
        // }
        if(A == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public void guessNumber()
    {
        guNumber.setNumber();
        while(!compareNumber())
        {
            
            guNumber.setNumber();
        }
        System.out.println("You Win!");
    }

    public void showAnser()
    {
        anNumber.showNumber();
    }
}