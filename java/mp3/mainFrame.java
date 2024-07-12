package mp3;

import java.awt.Color;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import java.util.Scanner;

import java.io.IOException;

import javax.sound.sampled.*;
import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

import FileIO.file;

public class mainFrame extends JFrame implements ActionListener {
    int height = 400;
    int width = 300;
    int sety = height-110;

    Scanner scanner = new Scanner(System.in);
    JLabel label = new JLabel();
    ImageIcon thumbnail = new ImageIcon("mp3/Pics/angel-tears.jpeg");
    
    //******************************************************************************Song Define
    File file = new File("mp3/angel-tears.wav");
    AudioInputStream audio = AudioSystem.getAudioInputStream(file);
    Clip song = AudioSystem.getClip();
    //******************************************************************************
    

    //******************************************************************************Button Defines
    JButton resume = new JButton();
    ImageIcon resumeIcon = new ImageIcon("mp3/Pics/resume.png");
    JButton play = new JButton();
    ImageIcon playIcon = new ImageIcon("mp3/Pics/play.png");
    JButton replay = new JButton();
    ImageIcon replayIcon = new ImageIcon("mp3/Pics/replay.png");
    JButton quit = new JButton();
    ImageIcon quitIcon = new ImageIcon("mp3/Pics/quit.png");
    //******************************************************************************
    mainFrame() throws UnsupportedAudioFileException, IOException, LineUnavailableException{
        play.setBounds(10,sety,50,50);
        play.setOpaque(true);
        play.setIcon(playIcon);
        play.addActionListener(this);

        resume.setBounds(80,sety,50,50);
        resume.setOpaque(true);
        resume.setIcon(resumeIcon);
        resume.addActionListener(this);

        replay.setBounds(160,sety,50 ,50 );
        replay.setOpaque(true);
        replay.setIcon(replayIcon);
        replay.addActionListener(this);

        quit.setBounds(230,sety,50,50);
        quit.setOpaque(true);
        quit.setIcon(quitIcon);
        quit.addActionListener(this);

        Image thumbImage = thumbnail.getImage();
        Image thumbTemp = thumbImage.getScaledInstance(260, 260, java.awt.Image.SCALE_SMOOTH);
        thumbnail = new ImageIcon(thumbTemp);
        label.setIcon(thumbnail);
        label.setVisible(true);
        label.setBounds(15,20,260,260);

        song.open(audio);

        //JFrame frame = new JFrame();
        this.setSize(width,height);
        this.setVisible(true);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.getContentPane().setBackground(Color.DARK_GRAY);
        this.setTitle("MP3 Player");
        this.setLayout(null);
        this.add(play);
        this.add(resume);
        this.add(replay);
        this.add(quit);
        this.add(label);
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == play){
            System.out.println("Play");
            song.start();
        }else if (e.getSource() == resume){
            System.out.println("Stop");
            song.stop();
        }else if(e.getSource() == replay){
            System.out.println("Replay");
            song.setMicrosecondPosition(0);
        }else{
            System.out.println("Quitting..");
            song.close();
            System.exit(1);
        }

        // TODO Auto-generated method stub
        //throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
        
    }
}

