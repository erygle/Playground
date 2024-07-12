package Library;

/**
 * Kitap Yönetim Sistemi - Ödev
 *
 * Kitap yönetim sisteminde sizden beklenen öğrenci ve öğretmenlerin fonksiyonlarını tammamlamanız.
 * 1. Öğretmenler öğrencileri kütüphaneye kaydedebilmeli veya silebilmeli.
 * 2. Öğrenciler kitap ödünç alabilmeli. Ödün alınan kitaplar kitap iade edilene kadar başka öğrenci
 * tarafından alınamamalı.
 * 3. Öğrencilerin aldıkları kitaplar kendi kitap dizileri içinde tutulmalı
 * 4. İade edilen kitaplar ordan silinip kütüphaneye geri dönmeli
 */
public class Main {
    public static void main(String[] args) {

        Book book = new Book("Alice Harikalar Diyarinda", "", 2014);
        System.out.println(book);
        Book book2 = new Book("Surely You're Joking Mr. Feynman", "Richard P. Feynman", 2020);
        System.out.println(book2);
        Library library = new Library("İhsan Varol Kütüphanesi", 4);
        library.addBook(book, 0);
        library.addBook(book2, 0);
        int[] index = library.findBook("Alice Harikalar Diyarinda");
        if (index == null) {
            System.out.println("Kitap bulunamadi");
        }
        System.out.println(library.floors[index[0]].books[index[0]]);
    }
}