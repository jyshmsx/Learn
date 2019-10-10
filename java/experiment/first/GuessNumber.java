package inclass.experiment.first;

//GuessNumber类，进行Number类的比较。
public class GuessNumber{
    private Number anNumber, guNumber;
    private char [] flag;
    private char [] flagA;
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
        flagA = new char [] {'0', '0', '0', '0'};
    }

    private void compareA()
    {
        for(int i = 0; i < 4; i++)
        {
            if(anNumber.getNumber(i) == guNumber.getNumber(i))
            {
                flag[i] = 'A';
                flagA[i] = 'A';
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
                if(anNumber.getNumber(j) == guNumber.getNumber(i) && this.flag[i] == '0' && flagA[j] == '0')
                {
                    flag[i] = 'B';
                    flagA[j] = 'B';
                    B++;
                }
            }
        }
    }

    private void showAnser()
    {
        System.out.print(A);
        System.out.print('A');
        System.out.print(B);
        System.out.println('B');
    }


    private boolean compareNumber()
    {
        this.clearFlag();
        compareA();
        compareB();
        showAnser();
        return A == 4;
    }

    public void guessNumber()
    {
        do{
            System.out.print("猜测数字: ");
            guNumber.setNumber();
        }while(!compareNumber());
        System.out.println("You Win!");
    }

}