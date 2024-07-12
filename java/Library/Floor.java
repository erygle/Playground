package Library;

public class Floor {
    Book[] books;

    public Floor() {
        books = new Book[1000];
    }

    int addBook(Book book) {
        for (int i = 0; i < books.length; i++) {
            if (books[i] == null) {
                books[i] = book;
                return i;
            }
        }
        return -1;
    }

    int findBook(String name) {
        for (int i = 0; i < books.length; i++) {
            if (books[i] != null) {
                if (books[i].name.equals(name)) {
                    return i;
                }
            }
        }
        return -1;
    }
}
