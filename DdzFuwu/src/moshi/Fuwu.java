package moshi;
import java.net.*;
import java.io.*;
import java.util.*;

import Quanju.G_TXType;
import Quanju.G_Ziduan;
import gonggong.*;
import java.lang.*;
public class Fuwu implements Runnable
{
	int m_port;
	public boolean quit;
	public ServerSocket ss;
	public Fuwu(int port)
	{
		System.out.println(port);
		m_port=port;
		quit=true;
	}
	public void run()
	{
		try {
			ss=new ServerSocket(m_port);
            Xiancheng xc;
			while(quit)
			{
				//System.out.println(new String("{\""+G_Ziduan.G_leixing+"\",\""+G_TXType.G_lianjie+"\"}"));
				Socket s=ss.accept();
				System.out.println("客服信息="+s.getInetAddress()+"端口"+s.getLocalPort());
				xc=new Xiancheng(s);
				Xianchengbaioshi.addxiancheng(xc);//预备
				xc.start();
				Thread.sleep(100);
			}				
		} catch (Exception e) {}
	}

}
