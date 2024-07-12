package GUI;

import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class myFrame1 extends JFrame implements ActionListener{
    JButton button = new JButton();
    JLabel label = new JLabel();
    myFrame1(){
        ImageIcon image2 = new ImageIcon("GUI/Pics/gulucuk.png");
        label.setIcon(image2);
        label.setBounds(200,200,100,100);
        label.setVisible(false);
        
        button.setBounds(125, 100, 250, 100);
        //button.addActionListener(e -> System.out.println("Hi"));
        button.addActionListener(this);
        button.setText("BUTTON");
        button.setFocusable(false);
        button.setFont(new Font("Comic Sans",Font.PLAIN,25));
        button.setForeground(Color.MAGENTA);
        button.setBackground(Color.YELLOW);
        button.setBorder(BorderFactory.createEtchedBorder());
        
        this.setSize(500,500);
        this.setTitle("Frame");
        this.add(button);
        this.add(label);
        this.setLayout(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //this.setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);
        //this.setResizable(false);
        ImageIcon image = new ImageIcon("GUI/Pics/dd.png");
        this.setIconImage(image.getImage());
        this.getContentPane().setBackground(new Color(242,122,122));  
        this.setVisible(true);
    }
    
    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource()==button){
            System.out.println("Hello");
            //button.setEnabled(false);
            label.setVisible(true);
            
        }
        // TODO Auto-generated method stub
        //throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    }
}
