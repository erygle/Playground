package Library;

public class Student extends Member{
    Book[] books;
    public Student(long id, String name, String surname, String schoolNumber, String citizenshipNumber) {
        super(id, name, surname, schoolNumber, citizenshipNumber);
    }
}
