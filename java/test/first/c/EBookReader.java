package inclass.test.first.c;

public class EBookReader {
    EBook ebk;
    EBookReader(EBook ebk)
    {
        this.ebk = ebk;
    }
    public void pageTurning()
    {
        ebk.bookMark++;
        System.out.println("当前是第" + ebk.bookMark + "页");
    }
    
}