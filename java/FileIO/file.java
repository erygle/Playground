package FileIO;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.io.FileReader;
public class file {
    public static void main(String[] args) {
        
        try {//                                ****************************File Read****************************
            FileReader reader = new FileReader("FileIO/lotr.txt");
            int data = reader.read(); 
            while(data != -1){
                System.out.print((char)data);
                data = reader.read();
            }reader.close();
        
        }
        catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        
        
        
        
        
        
        
        
        
        /*try {//                                ****************************File Write****************************
            FileWriter writer = new FileWriter("FileIO/message.txt");
            writer.write("Who kill Sarah Palmer.");
            writer.write("\nGoddamn right.");
            writer.append("\nIt is end of the message.");
            writer.close();
        } 
        catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }*/
        
        
        
        
        //                                       ****************************File Existing****************************
        /*File file = new File("FileIO/message.txt");
        
        if(file.exists()){
            System.out.println("File exists.");
            System.out.println(file.getAbsolutePath());
            System.out.println(file.getPath());
            System.out.println(file.getParent());
            System.out.println(file.isFile());
            //file.delete();
        }
        else System.out.println("File does not exist.");*/
    }
}
