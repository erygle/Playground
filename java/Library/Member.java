package Library;

public class Member {
    long id;
    String name;
    String surname;
    String schoolNumber;
    String citizenshipNumber;

    public Member(long id, String name, String surname, String schoolNumber, String citizenshipNumber) {
        this.id = id;
        this.name = name;
        this.surname = surname;
        this.schoolNumber = schoolNumber;
        this.citizenshipNumber = citizenshipNumber;
    }

    @Override
    public String toString() {
        return "Member{" +
                "id=" + id +
                ", name='" + name + '\'' +
                ", surname='" + surname + '\'' +
                ", schoolNumber='" + schoolNumber + '\'' +
                ", citizenshipNumber='" + citizenshipNumber + '\'' +
                '}';
    }
}
