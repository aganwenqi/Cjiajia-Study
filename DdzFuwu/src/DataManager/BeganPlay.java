package DataManager;
import java.io.IOException;
import java.io.OutputStream;
import java.util.HashMap;
import java.util.Vector;

import Quanju.G_Play;
import Quanju.G_TXType;
import Quanju.G_Ziduan;
import gonggong.Message;
import moshi.Xiancheng;
import net.sf.json.JSONArray;
import net.sf.json.JSONObject;
public class BeganPlay extends Thread {
   Vector three=new Vector<Xiancheng>();
   String RoomName;
   int fenshu=2;
   boolean hahaha=true;
   public JSONObject data=null;//每次出牌的数据
   public String whopoer="";//谁出的牌
   /*检测所有人有没准备*/
   boolean GetReady()
   {
	   boolean quite=false;
	   Xiancheng xc=null;
	   do
	   {
		   for(int i=0;i<three.size();i++)
		   {
			   xc=(Xiancheng)three.get(i);
			   if(xc.userdata.zhunbei==0)
			   {
				   quite=true;
				   break;
			   }
		   }
	   }while(false);
	   return quite;
   }
   void Agent()
   {
	   Xiancheng xca=null;
	   String playname="";
	   playname=data.getString(G_Play.G_playname);
	   System.out.println("德玛西亚dd"+data.toString());
	   for(int i=0;i<three.size();i++)
      	{
    		 xca=(Xiancheng)three.get(i);
    		 if(xca.userdata.Break&&playname.equals(xca.userdata.myname))
    		 break;
    		 xca=null;
      	}
   	 if(xca!=null)
   	 {  
   		 JSONObject data1=new JSONObject();
   	     data1.put(G_Ziduan.G_leixing,G_TXType.G_PlayCards);
   	     data1.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
   	     if(playname.equals(whopoer))
   	     {
   	     JSONArray jSONArray=new JSONArray();
   	     jSONArray.put(xca.userdata.poker.get(0));
   	     jSONArray.put(0);
   	     xca.userdata.poker.remove(0);
   	     data1.put(G_Play.G_Poker,jSONArray);
   	     data1.put(G_Ziduan.G_CardsType,1);	 
		 whopoer=playname;
   	     }
   	     else
   		 data1.put(G_Ziduan.G_CardsType,18);
   	 
   		 data1.put(G_Play.G_WhoPlayPoker,data.getString(G_Play.G_playname));
   		 data1.put(G_Play.G_playname,data.getString(G_Play.G_Twoname));
   		 data1.put(G_Play.G_Twoname,data.getString(G_Play.G_WhoPlayPoker));
		 for(int j=0;j<three.size();j++)
	       	{
			xca=(Xiancheng)three.get(j);
			dataManager.FaSong(xca, data1);
	       	} 
		 NextAgent();
		 data=null;
      }
   }
  boolean NextAgent()
   {
	   boolean quite=false;
	   Xiancheng xca=null;
	   String playname="";
	   playname=data.getString(G_Play.G_Twoname);
	   for(int i=0;i<three.size();i++)
     	{
   		 xca=(Xiancheng)three.get(i);
   		 if(xca.userdata.Break&&playname.equals(xca.userdata.myname))
   		 break;
   		 xca=null;
     	}
	   if(xca!=null)
	   	 {  
		   JSONObject data1=new JSONObject();
	   	     data1.put(G_Ziduan.G_leixing,G_TXType.G_PlayCards);
	   	     data1.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
	   	     if(playname.equals(whopoer))
	   	     {
	   	     JSONArray jSONArray=new JSONArray();
	   	     jSONArray.put(xca.userdata.poker.get(0));
	   	     jSONArray.put(0);
	   	     xca.userdata.poker.remove(0);
	   	     data1.put(G_Play.G_Poker,jSONArray);
	   	     data1.put(G_Ziduan.G_CardsType,1);	 
			 whopoer=playname;
	   	     }
	   	     else
	   		 data1.put(G_Ziduan.G_CardsType,18);
	   	     
	   		 data1.put(G_Play.G_WhoPlayPoker,data.getString(G_Play.G_Twoname));
	   		 data1.put(G_Play.G_playname,data.getString(G_Play.G_WhoPlayPoker));
	   		 data1.put(G_Play.G_Twoname,data.getString(G_Play.G_playname));
	   		for(int j=0;j<three.size();j++)
	       	{
			xca=(Xiancheng)three.get(j);
			dataManager.FaSong(xca, data1);
	       	} 
	   		quite=true;
	   	 }
	   return quite;
   }
   public  void run()
	{	
	   while(hahaha)
		{
		   /*断线代理及一些客服的异常处理*/
			try {
				Thread.sleep(1000);
				 System.out.println("德玛西亚"+whopoer);
				if(data!=null)
				Agent();
				Jiance();
		    	 } catch (InterruptedException e) {}
			
		}
	}
   public void Jiance()
   {
	   Xiancheng xca = null;
	   boolean jiancha=true;
	   int num=0;
	   num=three.size();
	   if(num>=1)
	   xca=(Xiancheng)three.get(0);
	   else
		   return;
	   
	   if(xca.userdata.HavaPlayer)
	   {
		   for(int i=0;i<num;i++)
		   	{
		   		xca=(Xiancheng)three.get(i);
		   		if(!xca.userdata.Break)
		   		{
		   			jiancha=false;
		   			break;
		   		}
		   	} 
			if(jiancha)
		   	{
		   		for(int i=0;i<num;i++)
		   	   	{
		   	   		xca=(Xiancheng)three.get(i);
		   	        xca.userdata.HavaPlayer=false;
		   	   	}
		   	}
	   }

   }
	public boolean setXiancheng(Xiancheng a)
	{
		boolean quite=false;
		if(three.size()<3)
		{
		System.out.println(RoomName+"::加入一个人角色");
		three.add(a);
		quite=true;
		}
		return quite;
	}
	public void deleteXiancheng(Xiancheng a)
	{
		three.remove(a);
	}
	public void setRoomName(String RoomName)
	{
		this.RoomName=RoomName;
	}
	public void setFangzhu()//房主重新设置
	{
		Xiancheng xca;
    	for(int i=0;i<three.size();i++)
    	{
    		xca=(Xiancheng)three.get(i);
    		if(!xca.userdata.Break)
    		{
    		xca.userdata.zhunbei=2;
    		break;
    		}
    	}
	}
    public synchronized boolean deleteXiancheng(Xiancheng xc,JSONObject data)
    {
//    	try {
//			this.join();
//		} catch (InterruptedException e) {
//			// TODO Auto-generated catch block
//			e.printStackTrace();
//		}
    	
    	int zhunbei=xc.userdata.zhunbei;
    	if(!three.remove(xc))return false;
        if(zhunbei==2)setFangzhu();
        
        if(!xc.userdata.Break)
    	dataManager.getRoom(RoomName,data);
    	System.out.println(RoomName+"::退出一个人角色");
    	if(three.size()<=0)
    	{
    	hahaha=false;
    	Message.RNS.remove(RoomName);
    	Message.jishu-=1;
    	hahaha=false;
    	System.out.println(RoomName+"房间已经撤销");
    	}
    	
    	//YouDizhu=false;
    	notify();
    	return true;
    }
    public void Fraction(int m_Moves,String Winname)
    {
    	if(m_Moves==11||m_Moves==14)
    			fenshu*=2;
    	else
    	{
    		fenshu+=2;
    		Xiancheng xc=null;
    		for(int i=0;i<three.size();i++)
    		{
    			xc=(Xiancheng)three.get(i);
    				if(xc.userdata.Y_N_address)break;
    		}
    		Denglu denglu=new Denglu();
    		if(xc.userdata.myname.equals(Winname))
    		{
    			for(int i=0;i<three.size();i++)
        		{
        			xc=(Xiancheng)three.get(i);
        				if(xc.userdata.Y_N_address)
        					denglu.SaveWin(1, fenshu, xc.userdata.myid);
        				else
        					denglu.SaveLoser(1, fenshu/2, xc.userdata.myid);
        		}
    		}
    		else
    		{
    			for(int i=0;i<three.size();i++)
        		{
        			xc=(Xiancheng)three.get(i);
        				if(xc.userdata.Y_N_address)
        					denglu.SaveLoser(1, fenshu, xc.userdata.myid);
        				else
        					denglu.SaveWin(1, fenshu/2, xc.userdata.myid);
        		}
    		}
    	}
    }
    public void updata(JSONObject data)
    {
    	String writemsg=data.toString();
    	System.out.println("分发的消息"+writemsg);
    	Xiancheng xca;
    	for(int i=0;i<three.size();i++)
    	{
    		xca=(Xiancheng)three.get(i);
    		if(xca==null||xca.userdata.Break)continue;
    		try {
				xca.os.write(writemsg.getBytes("UTF-8"));
				xca.os.flush();
			} catch (IOException e) {e.printStackTrace();}
    	}
    }
}
