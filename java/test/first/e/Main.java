package inclass.test.first.e;

/**
 * Main
 */
public class Main {
    public static void main(String[] args) {
        int n = 10, m = 5;
        Compute com = new ComputeMulti();
        UseCompute uCom =  new UseCompute();
        uCom.useCom(com, n, m);
        com = new ComputeMi();
        uCom.useCom(com, n, m);
        com = new ComputePlus();
        uCom.useCom(com, n, m);
        com = new ComputeE();
        uCom.useCom(com, n, m);
    }
}