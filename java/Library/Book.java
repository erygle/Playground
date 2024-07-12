package Library;

public class Book {
    static long idCounter;

    long id;
    String name;
    String author;
    int publishDate;
    boolean isBorrowed;

    public Book(String name, String author, int publishDate) {
        this.id = idCounter;
        this.name = name;
        this.author = author;
        this.publishDate = publishDate;
        idCounter++;
    }

    @Override
    public String toString() {
        return "Book{" +
                "id=" + id +
                ", name='" + name + '\'' +
                ", author='" + author + '\'' +
                ", publishDate=" + publishDate +
                '}';
    }
}
