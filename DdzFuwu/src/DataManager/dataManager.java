package DataManager;

import java.io.IOException;
import java.io.ObjectOutputStream;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Vector;
import moshi.Xiancheng;
import Quanju.G_Play;
import Quanju.G_TXType;
import Quanju.G_Ziduan;
import gonggong.Message;
import net.sf.json.*;
import shujuku.Shujuku;

public class dataManager {
	public static void chushihua(Vector three)
	{
		Xiancheng xc=null;
		for(int i=0;i<three.size();i++)
		{
			xc=(Xiancheng)three.get(i);
			if(xc.userdata.zhunbei!=2)
				xc.userdata.zhunbei=0;
			xc.userdata.Y_N_address=false;
			xc.userdata.Break=false;
			xc.userdata.HavaPlayer=true;
		}
	}
	  public static void FaSong(Xiancheng xca,JSONObject data)
	    {
	    	try {
	    		if(!xca.userdata.Break)
	    		{
	    		System.out.println(data.toString());
	    		xca.os.write(data.toString().getBytes("UTF-8"));
	    		xca.os.flush();
	    		}
				} catch (IOException e) {e.printStackTrace();}
	    }
	  
     public static String DenngluManager(JSONObject data)
     {
    	 String cleId=data.getString(G_Ziduan.G_id);
    	 String passwd=data.getString(G_Ziduan.G_mm);
    	 String id=new Denglu().checkUser(cleId, passwd);
    	 return id;
     }
     public static JSONArray getRoomluManager()
     {
    	 HashMap hm=Message.RNS;
    	 JSONArray jsonArray=null;
    	 if(hm.size()!=0)
    	 {
 		Iterator it=hm.keySet().iterator();
 		jsonArray = new JSONArray();
 		while(it.hasNext())
 		{
 			String onRoom=it.next().toString();
 		    System.out.println("房间:"+onRoom);	
 		    jsonArray.put(onRoom);
 		}
    	 }
 		return jsonArray;
     }
     public static boolean getRoom(String str,JSONObject data)
     {
    	 boolean quite=false;
    	 HashMap hm=Message.RNS;
 		Iterator it=hm.keySet().iterator();
 		JSONObject jsonArray =null;
 		JSONArray jsonArray1 =new JSONArray();
 		while(it.hasNext())
 		{
 			String onRoom=it.next().toString();
 			System.out.println("房间:"+onRoom);
 			if(onRoom.equals(str))
 			{
 			quite=true;
 			break;
 			}	
 		}
 	   if(quite)
 	   {
 		   /*获取这个房间*/
 		  BeganPlay bpl=(BeganPlay)hm.get(str);
 		  bpl.setFangzhu();//重新设置房主
 		  Xiancheng xc;
 		  for(int i=0;i<bpl.three.size();i++)
 		  {
 			 jsonArray = new JSONObject();
 			 xc=(Xiancheng)bpl.three.get(i);
 			 
 			 //检测房主
 			 if(xc.userdata.Break)continue;
 			 jsonArray.put(G_Play.G_playname,xc.userdata.myname) ;
 			 jsonArray.put(G_Play.G_playstate,xc.userdata.zhunbei);
 			 jsonArray1.put(jsonArray);
 		  }
 		 
 		 data.put(G_Ziduan.G_RoomMsg,jsonArray1);
		 data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
		 bpl.updata(data);//向所有人发送
 	   }
 		return quite;
     }
     
     public static boolean xifa(String fanghao)
     {
    	  boolean quite=false;
    	  do
    	  {
    	  BeganPlay bp=Message.getBeganPlay(fanghao);int j=0; Xiancheng play=null;
    	  if(bp==null||bp.three.size()!=3)break;
    	  if(bp.GetReady())break;
    	  Vector three=bp.three;
    	  chushihua(three);
    	  bp.fenshu=2;
    	  
		  List list1 = new ArrayList();
		  List list2 = new ArrayList();
		  List list3= new ArrayList();
		  Suanfa.Licensing_list(list1, list2, list3);
		//  if(!bp.YouDizhu)
		 // {
			j=Suanfa.WhoDiZhu();
			j=1;
			if(j==1)
			play=(Xiancheng) three.get(0);  
			else if(j==2)
			play=(Xiancheng) three.get(1); 
			else if(j==3)
			play=(Xiancheng) three.get(2);
			play.userdata.Y_N_address=true;
		 // }
		  j=0;
		  for(int i=0;i<three.size();i++)
		  {
				play=(Xiancheng)three.get(i);
	 			if(play.userdata.Y_N_address)
	 			play.userdata.poker=list1;
	 			else
	 			{
	 			 if(j==0)
	 			 {
	 			 play.userdata.poker=list2;
	 			 j=2;
	 			 }
	 			 else
	 			 play.userdata.poker=list3; 
	 			}
		  }
		 quite=true;
		 Agent(bp,fapai(three));
		 bp.start();
    	  }while(false);
    	 return quite;
     }
     public static JSONObject fapai(Vector three)
     {
    	JSONArray jsonArray=null;
    	JSONObject data =null;
    	JSONObject data1 =null;
    	JSONArray data2 =null;
    	JSONObject data3 =null;
     	Xiancheng xca,xca1;
     	String onename="",twoname="";
     	for(int i=0;i<three.size();i++)
     	{
     		xca=(Xiancheng)three.get(i);
     		data=new JSONObject();
     		data2 = new JSONArray();
     		if(i==1)
     	{
     			for(int j=2;j>=0;j--)
                {
         		xca1=(Xiancheng)three.get(j);
         		
         		data1 = new JSONObject();
         		jsonArray=Suanfa.Poker_JSONArray(xca1.userdata.poker);
         		data1.put(G_Play.G_Poker,jsonArray);
    			data1.put(G_Play.G_playstate,xca1.userdata.Y_N_address);
    			data1.put(G_Play.G_playname, xca1.userdata.myname);
    			data2.put(data1);
    			j--;
             	}
     			xca1=(Xiancheng)three.get(2);
     			onename=xca1.userdata.myname;
     			xca1=(Xiancheng)three.get(0);
     			twoname=xca1.userdata.myname;
     	}
     		else
     	{
     		for(int j=0;j<three.size();j++)
         	{
     		xca1=(Xiancheng)three.get(j);
     		if(xca!=xca1)
     		 {
     		data1 = new JSONObject();
     		jsonArray=Suanfa.Poker_JSONArray(xca1.userdata.poker);
     		data1.put(G_Play.G_Poker,jsonArray);
			data1.put(G_Play.G_playstate,xca1.userdata.Y_N_address);
			data1.put(G_Play.G_playname, xca1.userdata.myname);
			data2.put(data1);
			  if(onename.equals(""))
			  {
			  xca1=(Xiancheng)three.get(j);
 			  onename=xca1.userdata.myname;
 			  xca1=(Xiancheng)three.get(j+1);
 			  twoname=xca1.userdata.myname;
			  }
     		 }
         	}
     	}
     		jsonArray=Suanfa.Poker_JSONArray(xca.userdata.poker);
     		data.put(G_Ziduan.G_leixing,G_TXType.G_Began);
        	data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
     		data.put(G_Play.G_Poker,jsonArray);
     		data.put(G_Ziduan.G_RoomMsg,data2);
     		data.put(G_Play.G_playstate,xca.userdata.Y_N_address);
     		data.put(G_Play.G_playname, xca.userdata.myname);
            FaSong(xca, data);
            if(xca.userdata.Y_N_address)
            {
            	data3 =new JSONObject();
            	data3.put(G_Play.G_WhoPlayPoker,twoname);
            	data3.put(G_Play.G_playname, xca.userdata.myname);
            	data3.put(G_Play.G_Twoname, onename);
            }
     	}
     	return data3;
     }
     public static void Agent(BeganPlay bp,JSONObject data)
     {
    	 do{
    		 if(bp==null||data==null)break;
         bp.whopoer=data.getString(G_Play.G_playname);
         bp.data=data;
    	 }while(false);
     }
     public static boolean playcards(JSONObject data,String fanghao,String myid) 
     {
    	 BeganPlay bp=Message.getBeganPlay(fanghao);
    	 Vector three=bp.three;
    	 Xiancheng xca,xca1 = null;int a;
    	 bp.data=data;
    	 JSONArray data2=data.getJSONArray(G_Play.G_Poker);
    	 data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
    	 a=data.getInt(G_Ziduan.G_CardsType);
    	 
    	 for(int i=0;i<three.size();i++)
      	{
    		 xca=(Xiancheng)three.get(i);
    		 if(xca.userdata.myid.equals(myid))
    			 {xca1=xca;
    			 continue;
    			 }
    		 FaSong(xca, data);
      	}
    	 if(a==11||a==14||a==16)
    	 {
    	 bp.Fraction(a,data.getString(G_Play.G_WhoPlayPoker));
    	  if(a==16)
    	  {
    	 bp.data=null;
    	 for(int i=0;i<three.size();i++)
       	    {
    		 xca=(Xiancheng)three.get(i);
    		 xca.userdata.HavaPlayer=false;
    	    /* if(xca.userdata.Break)
				try {
					xca.ljxc.interrupt();
					xca.ljxc.stopAll();
				} catch (InterruptedException e) {e.printStackTrace();	}*/
         	}
    	  }
    	 }
    	 if(a!=18&&a!=15&&a!=17)
    		 bp.whopoer=data.getString(G_Play.G_WhoPlayPoker);
    	 for(int i=0;i<data2.length();i++)
    		 xca1.userdata.poker.remove(data2.getInt(i));
    	 return true;
     }
}
