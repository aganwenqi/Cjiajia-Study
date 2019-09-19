package jiemian;
import javax.swing.*;

import gonggong.Message;
import moshi.*;
import net.sf.json.JSONArray;

import java.awt.*;
import java.awt.event.*;
import java.io.IOException;
import java.util.Iterator;
import java.util.Vector;

public class Jiemian extends JFrame implements ActionListener
{

	JPanel jp1;
	JButton jb1,jb2;
	JTextField id,port;
	JLabel label1,label2;
	Fuwu fuwu = null;
	public static void main(String[] args)
	{
		Jiemian jm= new Jiemian();
	}
	public Jiemian()
	{
		Container jframe=this.getContentPane();
		jframe.setLayout(new GridLayout(3,1,7,7));
		JPanel lp1,lp2,lp3;
		lp1=new JPanel();
		jb1=new JButton("启动服务器");
		jb1.addActionListener(this);
		jb2=new JButton("关闭服务器");
		jb2.addActionListener(this);
		lp1.add(jb1);lp1.add(jb2);jframe.add(lp1);
		jframe.add(lp1);
		
		label1=new JLabel("服务器Name:");
		label2=new JLabel("服务器PORT:");
		id=new JTextField();
		port=new JTextField();
		id.setColumns(20);
		port.setColumns(10);
		lp2=new JPanel();
		lp3=new JPanel();
		lp2.add(label1);
		lp2.add(id);
		lp3.add(label2);
		lp3.add(port);
		jframe.add(lp2,"CENTER");jframe.add(lp3,"LEFT");
		
		this.setSize(350,168);
		this.setLocation(318,186);
		this.setResizable(false);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setVisible(true);
		
	}
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource()==jb1 )
		{
			String str="";
			int a;
			str=port.getText();
			if(str.equals(""))
			a=7777;
			else
			a=Integer.parseInt(str);
		
			fuwu = new Fuwu(a);
		    new Thread(fuwu).start();
			//jb1.setBackground(Color.RED);
			jb1.setEnabled(false);
			jb2.setEnabled(true);
		}	
		else if(e.getSource()==jb2)
		{
			exitAll();
		}
	}
	public void exitAll()
	{
		fuwu.quit = false;
		try 
		{
			fuwu.ss.close();
		} catch (IOException e) 
		{
			e.printStackTrace();
		}
		fuwu = null;
		Message.RNS.clear();
		
		Vector<Xiancheng> ve=new Vector<Xiancheng>();
		for(int i = 0; i<Xianchengbaioshi.yn.size(); i++)
		{
			Xiancheng xc = Xianchengbaioshi.yn.get(i);
			xc.Server_lever();
			ve.add(xc);
		}
		Iterator it=Xianchengbaioshi.hm.keySet().iterator();
 		while(it.hasNext())
 		{
 			String key=it.next().toString();
 			Xiancheng xc = (Xiancheng)Xianchengbaioshi.hm.get(key);
 			if(!ve.remove(xc))
 				xc.Server_lever();
 		}
		Xianchengbaioshi.yn.clear();
		Xianchengbaioshi.hm.clear();
		jb1.setEnabled(true);
		jb2.setEnabled(false);
	}
}
