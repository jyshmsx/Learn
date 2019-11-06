package inclass.test.first.c;

public class Book {
    protected String bookName;
    protected String publishDate;
    protected String author;
    protected int pages;
    protected String ISBN;

    Book(String bookName, String publishDate,String author, int pages, String ISBN)
    {
        this.bookName = bookName;
        this.publishDate = publishDate;
        this.author = author;
        this.pages = pages;
        this.ISBN = ISBN;
    }
}