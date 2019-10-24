package inclass.experiment.second;

import java.util.Scanner;

public class Store {
    private static final int maxTV = 50;
    private Television [] TV;
    private int TVCount;
    public static Scanner sc = new Scanner(System.in);
    public Store()
    {
        this.TVCount = 0;
        this.TV = new Television[maxTV] ;
    }

    protected void addTV(String tvBrand, String tvType, int tvPrice, int tvCount)
    {
        if(TVCount <= maxTV)
        {
            this.TV[this.TVCount] = new Television();
            this.TV[this.TVCount].setTV(tvBrand, tvType, tvPrice, tvCount);
            this.TVCount++;
        }
        else
        {
            System.out.println("以达到电视种类上限");
        }
        
    }

    protected void cellTV(int wTV)
    {
        this.TV[wTV].cellTVCount();
    }

    protected void buyTV(int wTV, int count)
    {
        this.TV[wTV].addTVCount(count);
    }

    protected void showTV()
    {
        for(int i = 1; i <= TVCount; i++)
        {
            System.out.println(i + ", " + TV[i - 1]);
        }
    }

    public void storeCellMenu()
    {
        boolean flag = true;
        while (flag) {
            String ex = "exit";
            System.out.println("一共有以下电视");
            showTV();
            System.out.println("请输入序号购买");
            int buyTV = sc.nextInt();
            cellTV(buyTV - 1);
            System.out.println("购买完毕,输入exit退出，输入其他继续");
            if(ex.equals(sc.next()))
            {
                flag = false;
            }
        }
    }   

    protected void storeMa()
    {
        boolean flag = true;
        while (flag) {
            String ex = "exit";
            System.out.println("增加电视输入1，增加电视数量输入2，查看库存输入3");
            int condition = sc.nextInt();
            switch (condition) {
                case 1:
                    System.out.println("请输入电视品牌、型号、价格、数量");
                    addTV(sc.next(), sc.next(), sc.nextInt(), sc.nextInt());
                    break;
                case 2:
                    showTV();
                    System.out.println("请输入增加数量的电视的序号及增加数量");
                    buyTV(sc.nextInt() - 1, sc.nextInt());
                    break;
                case 3:
                    showTV();
                    break;
                default:
                    System.out.println("请输入1或2");
                    break;
            }
            System.out.println("输入exit退出");
            if(ex.equals(sc.next()))
            {
                flag = false;
            }
        }
    }


}