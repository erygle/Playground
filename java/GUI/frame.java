package GUI;

import java.awt.Color;
import java.awt.Font;

import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.border.Border;

public class frame {
    public static void main(String[] args) {
        //new myFrame1();
        ImageIcon image = new ImageIcon("GUI/Pics/frk.png");
        Border border = BorderFactory.createLineBorder(new Color(121,78,255),3);
        
        JLabel label = new JLabel();
        label.setIcon(image);
        label.setText("Hello :-]");
        label.setHorizontalTextPosition(JLabel.CENTER);
        label.setVerticalTextPosition(JLabel.TOP);
        label.setForeground(new Color(121,78,255));
        label.setFont(new Font("MV Boli",Font.PLAIN,50));
        label.setIconTextGap(10);
        label.setBackground(Color.DARK_GRAY);
        label.setOpaque(true);
        label.setBorder(border);
        label.setVerticalAlignment(JLabel.CENTER);
        label.setHorizontalAlignment(JLabel.CENTER);
        //label.setBounds(125,125,250,250);

        
        
        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        //frame.setLayout(null);
        frame.setVisible(true);
        //frame.getContentPane().setBackground(Color.CYAN);
        frame.add(label);
        frame.pack();

    }
    
}
