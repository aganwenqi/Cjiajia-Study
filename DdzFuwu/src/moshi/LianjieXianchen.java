package moshi;
import gonggong.*;
import net.sf.json.JSONObject;

import java.net.Socket;

import DataManager.BeganPlay;
import DataManager.dataManager;
import Quanju.*;
public class LianjieXianchen extends Thread{
	private Socket s;
	private Xiancheng myxc;
	public int count=0;
	public boolean hahaha=true;
	public LianjieXianchen(Socket s,Xiancheng myxc) 
	{
		this.s=s;
		this.myxc=myxc;
	}	
  
	public void run()
	{	
		while(hahaha)
		{
			try {
				count++;
				Thread.sleep(4000);
				//Xianchengbaioshi .getCount();
				System.out.println(count);
				if(count>=5)
				{
				myxc.userdata.Break=true;
				stopAll();
				}
			} catch (InterruptedException e) {}
		}
	}
	public void stopAll() throws InterruptedException
	{
		if(!myxc.userdata.HavaPlayer)
		{
		this.hahaha=false;
		Xianchengbaioshi.deletexiancheng(myxc);
		Xianchengbaioshi.deletehmxiancheng(myxc.userdata.myid);
		BeganPlay bp=Message.getBeganPlay(myxc.userdata.fanghao);
		if(bp!=null)
		{
			 /* ÕÀ∑ø«Î«Û */
			JSONObject data=new JSONObject();
			data.put(G_Ziduan.G_leixing,G_TXType.G_zhunbei);
			data.put(G_Ziduan.G_roomnumble,myxc.userdata.fanghao);
		    bp.deleteXiancheng(myxc,data);
		}
		myxc.finalize();
		myxc=null;
		}
		//else if(myxc.userdata.HavaPlayer)
	//	{
		//	BeganPlay bp=Message.getBeganPlay(myxc.userdata.fanghao);
		//	bp.Jiance();
		//}
	}
}
