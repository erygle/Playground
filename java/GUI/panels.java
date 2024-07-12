package GUI;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Image;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class panels {
    public static void main(String[] args) {
        ImageIcon image = new ImageIcon("GUI/Pics/gulucuk.png");
        JLabel label = new JLabel();
        label.setText("Hello");
        label.setIcon(image);
        label.setHorizontalAlignment(JLabel.CENTER);
        label.setVerticalAlignment(JLabel.CENTER);
        label.setHorizontalTextPosition(JLabel.RIGHT);
        label.setVerticalTextPosition(JLabel.TOP);
        label.setBounds(50,50,50,50);
        
        JLabel label2 = new JLabel();
        label2 = label;

        JPanel bluePanel = new JPanel();
        bluePanel.setBackground(Color.BLUE);
        bluePanel.setBounds(0, 0, 200, 200);
        bluePanel.setLayout(new BorderLayout());
        
        JPanel redPanel = new JPanel();
        redPanel.setBackground(Color.RED);
        redPanel.setBounds(200, 0, 200, 200);
        redPanel.setLayout(new BorderLayout());
        
        JPanel greenPanel = new JPanel();
        greenPanel.setBackground(Color.GREEN);
        greenPanel.setBounds(0, 200, 400, 200);
        greenPanel.setLayout(new BorderLayout());


        JFrame frame = new JFrame();
        frame.setLayout(null);
        frame.setSize(600,600);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        greenPanel.add(label2);
        bluePanel.add(label);
        frame.add(bluePanel);
        frame.add(greenPanel);
        frame.add(redPanel);
        
    }
}
