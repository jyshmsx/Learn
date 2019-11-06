package inclass.test.first.c;


public class EBook extends Book{
    int bookMark;
    double copyRight;
    EBook(String bookName, String publishDate,String author, int pages, String ISBN, double copyRight)
    {
        super(bookName, publishDate, author, pages, ISBN);
        this.bookMark = 0;
        this.copyRight = copyRight;
    }
    
}