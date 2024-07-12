package mp3;

import java.io.IOException;

import javax.sound.sampled.LineUnavailableException;
import javax.sound.sampled.UnsupportedAudioFileException;

public class player {
    public static void main(String[] args) throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        new mainFrame();
    }
}
