package inclass.experiment.second;

public class TVSystem {
    
    public static void main(String[] args) {
        Store tb;
        tb = new Store();
        int choose = 1;
        boolean flag = true;
        do {
            if(flag)
            {
                System.out.println("第一次进入，默认进入商家系统");
                flag =  false;
            }
            else
            {
                System.out.println("输入1进入商家系统，2进入买家系统，输入其他退出");
                choose = Store.sc.nextInt();
            }
            if(choose == 1)
            {
                tb.storeMa();
            }
            else if(choose == 2)
            {
                tb.storeCellMenu();
            }
            
        } while (choose == 1 || choose == 2);
    }
}