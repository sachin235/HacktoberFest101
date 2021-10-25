import java.applet.Applet;
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Container;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;
import java.io.PrintStream;
import javax.swing.JButton;
import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class GameApplet extends Applet
implements MouseListener, ActionListener, WindowListener
{
    JFrame f;
    int flag = 2;
    int n;
    int m;
    int i = 0;
    static int bug = 0;
    char[] ch = new char[9];
    JButton first;
    JButton second;
    String s1 = "";
    
    public GameApplet()
    {
        this.f = new JFrame("Tic Tac Toe");
        this.first = new JButton("CLEAR");
        this.second = new JButton("EXIT");
        this.f.add(this.first);
        this.f.add(this.second);
        this.f.addWindowListener(this);
        this.f.getContentPane().setBackground(Color.BLUE);
        this.f.setLayout(null);
        this.f.setVisible(true);
        this.f.setSize(800, 600);
        this.first.setBounds(650, 50, 90, 60);
        this.second.setBounds(650, 250, 90, 60);
        
        this.f.addMouseListener(this);
        for (this.i = 0; this.i < 9; this.i += 1)
        this.ch[this.i] = 'B';
        this.first.addActionListener(this);
        this.second.addActionListener(this);
        
        String message = "Please click on the frame   !!!!! \n    \nto start the game \n";
        
        JOptionPane pane = new JOptionPane(message);
        JDialog dialog = pane.createDialog(new JFrame(), "Dilaog");
        dialog.show();
        Graphics g = this.f.getGraphics();
        g.drawLine(200, 0, 200, 600);
        g.drawLine(400, 0, 400, 600);
        g.drawLine(0, 200, 600, 200);
        g.drawLine(0, 400, 600, 400);
        g.drawLine(600, 0, 600, 600);
    }
    
    public void keyPressed(KeyEvent k)
    {
        System.out.print("");
    }
    
    public void keyTyped(KeyEvent k) {
        this.s1 += k.getKeyChar();
    }
    
    public void keyReleased(KeyEvent k) {
        System.out.print("");
    }
    
    public void actionPerformed(ActionEvent ae)
    {
        if (ae.getSource() == this.first)
        {
            this.f.setVisible(false);
            bug = 0;
            new GameApplet();
        }
        if (ae.getSource() == this.second)
        {
            System.exit(0);
        }
    }
    
    public void windowClosing(WindowEvent de)
    {
    System.exit(0); }
    
    public void windowOpened(WindowEvent de) { }
    
    public void windowClosed(WindowEvent de) { }
    
    public void windowActivated(WindowEvent de) { }
    
    public void windowDeactivated(WindowEvent de) { }
    
    public void windowIconified(WindowEvent de) { }
    
    public void windowDeiconified(WindowEvent de) {  }
    
    public void mouseClicked(MouseEvent e) { Graphics2D g2;
        Graphics g = this.f.getGraphics();
        g.drawLine(200, 0, 200, 600);
        g.drawLine(400, 0, 400, 600);
        g.drawLine(0, 200, 600, 200);
        g.drawLine(0, 400, 600, 400);
        g.drawLine(600, 0, 600, 600);
        this.flag -= 1;
        int x = e.getX();
        int y = e.getY();
        if (this.flag == 1)
        {
            if ((x < 200) && (y < 200)) { this.m = 0; this.n = 0; this.ch[0] = 'R'; }
            if ((x > 200) && (x < 400) && (y < 200)) { this.m = 200; this.n = 0; this.ch[1] = 'R'; }
            if ((x > 400) && (x < 600) && (y < 200)) { this.m = 400; this.n = 0; this.ch[2] = 'R'; }
            if ((x < 200) && (y > 200) && (y < 400)) { this.m = 0; this.n = 200; this.ch[3] = 'R'; }
            if ((x > 200) && (x < 400) && (y > 200) && (y < 400)) { this.m = 200; this.n = 200; this.ch[4] = 'R'; }
            if ((x > 400) && (x < 600) && (y > 200) && (y < 400)) { this.m = 400; this.n = 200; this.ch[5] = 'R'; }
            if ((x < 200) && (y > 400) && (y < 600)) { this.m = 0; this.n = 400; this.ch[6] = 'R'; }
            if ((x > 200) && (x < 400) && (y > 400) && (y < 600)) { this.m = 200; this.n = 400; this.ch[7] = 'R'; }
            if ((x > 400) && (x < 600) && (y > 400) && (y < 600)) { this.m = 400; this.n = 400; this.ch[8] = 'R'; }
            g.setColor(new Color(77, 176, 230));
            g2 = (Graphics2D)g;
            g2.setStroke(new BasicStroke(10.0F));
            g.drawOval(this.m + 10, this.n + 10, 159, 159);
        }
        
        if (this.flag == 0)
        {
            if ((x < 200) && (y < 200)) { this.m = 0; this.n = 20; this.ch[0] = 'P'; }
            if ((x > 200) && (x < 400) && (y < 200)) { this.m = 200; this.n = 20; this.ch[1] = 'P'; }
            if ((x > 400) && (x < 600) && (y < 200)) { this.m = 400; this.n = 20; this.ch[2] = 'P'; }
            if ((x < 200) && (y > 200) && (y < 400)) { this.m = 0; this.n = 200; this.ch[3] = 'P'; }
            if ((x > 200) && (x < 400) && (y > 200) && (y < 400)) { this.m = 200; this.n = 200; this.ch[4] = 'P'; }
            if ((x > 400) && (x < 600) && (y > 200) && (y < 400)) { this.m = 400; this.n = 200; this.ch[5] = 'P'; }
            if ((x < 200) && (y > 400) && (y < 600)) { this.m = 0; this.n = 400; this.ch[6] = 'P'; }
            if ((x > 200) && (x < 400) && (y > 400) && (y < 600)) { this.m = 200; this.n = 400; this.ch[7] = 'P'; }
            if ((x > 400) && (x < 600) && (y > 400) && (y < 600)) { this.m = 400; this.n = 400; this.ch[8] = 'P'; }
            g2 = (Graphics2D)g;
            g2.setStroke(new BasicStroke(10.0F));
            g.setColor(new Color(77, 176, 230));
            g.drawLine(this.m + 10, this.n + 13, this.m + 169, this.n + 164);
            g.drawLine(this.m + 169, this.n + 10, this.m + 10, this.n + 169);
            this.flag += 2;
        }
        
        for (this.i = 0; this.i < 3; this.i += 1)
        {
            if ((this.ch[this.i] != 'B') &&
            (this.ch[(this.i + 3)] == this.ch[this.i]) && (this.ch[(this.i + 6)] == this.ch[this.i]))
            {
                new Board().win();
                bug = 1;
            }
        }
        
        for (this.i = 0; this.i < 7; this.i += 1)
        {
            if (this.ch[this.i] != 'B')
            {
                if ((this.ch[this.i] == this.ch[(this.i + 1)]) && (this.ch[this.i] == this.ch[(this.i + 2)]))
                {
                    new Board().win();
                    bug = 1;
                }
                this.i += 2;
            }
            else {
                this.i += 2;
            }
        }
        if ((this.ch[4] != 'B') && ((
        ((this.ch[0] == this.ch[4]) && (this.ch[4] == this.ch[8])) || ((this.ch[2] == this.ch[4]) && (this.ch[4] == this.ch[6])))))
        {
            new Board().win();
            bug = 1;
        }
        
        for (this.i = 0; (this.i < 9) &&
        (this.ch[this.i] != 'B'); this.i += 1)
        {
            if (this.i == 8)
            {
                if (bug == 0)
                new Board().draw();
                bug = 0;
            }
        }
    }
    
    public void mouseReleased(MouseEvent e)
    {
        System.out.print("");
    }
    
    public void mouseEntered(MouseEvent e)
    {
        System.out.print("");
    }
    
    public void mouseExited(MouseEvent e) {
        System.out.print("");
    }
    
    public void mousePressed(MouseEvent e) {
        System.out.print("");
    }
    
    public static void main(String[] args)
    {
        new GameApplet();
    }
}












class Board  implements WindowListener
{
    public void win()
    {
        String message = "Congratulations !!!!! \n    \nYou win \n";
        
        JOptionPane pane = new JOptionPane(message);
        JDialog dialog = pane.createDialog(new JFrame(), "Dilaog");
        dialog.show();
    }
    
    public void draw()
    {
        String message = "Players the result is  !!!!! \n    \nSTALEMATE \n";
        
        JOptionPane pane = new JOptionPane(message);
        JDialog dialog = pane.createDialog(new JFrame(), "Dilaog");
        dialog.show();
    }
    
    public void windowClosing(WindowEvent we)
    {
        System.exit(0);
    }
    
    public void windowOpened(WindowEvent we)
    {
    }
    
    public void windowClosed(WindowEvent we)
    {
    }
    
    public void windowActivated(WindowEvent we)
    {
    }
    
    public void windowDeactivated(WindowEvent we)
    {
    }
    
    public void windowIconified(WindowEvent we)
    {
    }
    
    public void windowDeiconified(WindowEvent we)
    {
    }
}
