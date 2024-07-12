package Library;

public class Library {
    String name;
    Floor[] floors;

    public Library(String name, int floorCount) {
        this.name = name;
        this.floors = new Floor[floorCount];
        for (int i = 0; i < floorCount; i++) {
            this.floors[i] = new Floor();
        }
    }

    int addBook(Book book, int floorIndex) {
        return floors[floorIndex].addBook(book);
    }

    int[] findBook(String bookName) {
        for (int i = 0; i < floors.length; i++) {
            if (floors[i] != null) {
                int index = floors[i].findBook(bookName);
                if (index != -1) {
                    return new int[]{i, index};
                }
            }
        }
        return null;
    }
}
