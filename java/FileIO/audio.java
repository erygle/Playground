package FileIO;
import java.io.File;
import java.io.IOException;
import java.util.Scanner;
import javax.sound.sampled.*;

public class audio {
    public static void main(String[] args) throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        Scanner scanner = new Scanner(System.in);

        File file = new File("FileIO/angel-tears.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        String response = "";
        while(!response.equals("Q")){
            System.out.println("P : Play\nS : Stop\nR : Reset\nQ : Quit\nChoice : ");
            response = scanner.next();
            response = response.toUpperCase();
            switch (response) {
                case "P":
                    clip.start();
                    break;
                case "S":
                    clip.stop();
                    break;
                case "R":
                    clip.setMicrosecondPosition(0);
                    break;
                case "Q":
                    clip.close();
                    System.out.println("Program is ending...");
                    System.exit(1);
                    
                default:
                    System.out.println("Invalid Value.");
                    break;
            }
            
        }
        
    }
}
