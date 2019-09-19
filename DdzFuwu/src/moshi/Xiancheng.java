package moshi;
import java.util.*;
import java.net.*;
import java.io.*;
import gonggong.*;
import Quanju.*;
import DataManager.*;
import net.sf.json.JSONArray;
import net.sf.json.JSONObject;
import java.lang.*;
public class Xiancheng extends Thread
{
	boolean hahaha=true;
    private Socket s; 
    InputStream is;
    public OutputStream os;
    /*要发送的字符串*/
    String writemsg=null;
    public LianjieXianchen ljxc;
    
    public UserData userdata=null;
    public void finalize()
    {
    	try {
    		this.hahaha=false;
    		os.flush();
			is.close();
			os.close();
			ljxc=null;
			s.close();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} 
    };
    
	public Xiancheng(Socket s) 
	{
		this.s=s;
		userdata=new UserData();
		ljxc=new LianjieXianchen(s,this);//启动一直检测连接线程
		ljxc.start();
		try 
		{
			is=s.getInputStream();
			os=s.getOutputStream();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}	
  
	public void run()
	{	
		while(hahaha)
		{
			try{

			int len = is.available();
			if(len <= 0) {
				continue;
			}
			byte[] buff = new byte[len];
			is.read(buff);
			String read = new String(buff);	
			
			JSONObject data =JSONObject.fromObject(read);
			jieshou(data);//接收
			if(writemsg!=null)
			{
				System.out.println(writemsg);
				os.write(writemsg.getBytes("UTF-8"));
				os.flush();
				writemsg=null;
			}
			Thread.sleep(100);
			}catch(Exception e)
			{
				System.out.println(e.toString());
			}

		}	
	}
	public void jieshou(JSONObject data)
	{
		System.out.println(data.toString());
		String leixing=data.getString(G_Ziduan.G_leixing);
		String yanzheng="";
		try{
		switch(leixing)
		{
		case G_TXType.G_Zhuce:
			 Zhu_Ce(data);
			 break;
		/*登录消息*/
		case G_TXType.G_Denglu:
			 fasong_name(data);
			 break;
		/*获取用户信息*/
		case G_TXType.G_GetMsg:
			get_usermsg(data);
			 break;
		case G_TXType.G_Xiugai:
			Xiu_gai(data);
			break;
		case G_TXType.G_UserMsg1:
			User_msg1(data);
			break;
		case G_TXType.G_lianjie:
			writemsg=data.toString();
			ljxc.count=0;
			break;
		case G_TXType.G_NewRoom:
			New_Room(data);
			break;
		case G_TXType.G_TuiRoom:
			Tui_Room(data);
			break;
		case G_TXType.G_getAllRoom:
			Get_Room(data);
			break;
		case G_TXType.G_ComeRoom:
			Come_Room(data);
			break;
		case G_TXType.G_zhunbei:
			Zhun_bei(data);
			break;
		case G_TXType.G_Began://开始
			Began_game(data);
			break;
		case G_TXType.G_PlayCards://打牌
			Play_Cards(data);
			break;
		case G_TXType.G_Closer://打牌
			Closer_Game(data);
			break;
		case G_TXType.G_lotoff://注销
			ClientEexit(data);
			break;
		default:
			break;
		}
		}catch(Exception e){}
	}
	public void Zhu_Ce(JSONObject data)
	{
		boolean quite=false;
		String userid=data.getString(G_Ziduan.G_id);
		String userpassword=data.getString(G_Ziduan.G_mm);
		Denglu denglu=new Denglu();
		if(userid.equals(""))
			quite=true;
		else
			quite=denglu.Register_YZ(userid);
		
		if(quite)
			data.put(G_Ziduan.G_yn,G_TXType.G_Shibai);
		else
		{
			data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
			denglu.Register(userid,userpassword);
		}
		writemsg=data.toString();
	}
	public void Xiu_gai(JSONObject data)
	{
		String username=data.getString(G_Ziduan.G_id);
		if(username.equals(userdata.myid))
		{
			data.put(G_Ziduan.G_yn,G_TXType.G_Shibai);
		}
		else
		{
		String userpassword=data.getString(G_Ziduan.G_mm);
		Denglu denglu=new Denglu();
		denglu.Modify(userdata.myid,userpassword,username);
		userdata.myname=username;
		data.put(G_Ziduan.G_name,username);
		data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
		}
		writemsg=data.toString();
	}
	public void User_msg1(JSONObject data)
	{
		Denglu denglu=new Denglu();
		String user[]=denglu.getUserName_passwd(userdata.myid);
	    if(user.length>=2)
	    {
	    data.put(G_Ziduan.G_name,user[0]);
	    data.put(G_Ziduan.G_mm,user[1]);
		data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
	    }
		writemsg=data.toString();
	}
	public boolean fasong_name(JSONObject data)
	{
		boolean quite=false;
		String username=data.getString(G_Ziduan.G_id);
		String name="";
		quite=Xianchengbaioshi.Yanzhen(username);
		if(quite)
		{
			name=dataManager.DenngluManager(data);
		}
		
		if(name.equals(""))
		{
		data.put(G_Ziduan.G_yn,G_TXType.G_Shibai);
		}
		else
		{/*成功*/
		userdata.myid=username;
		userdata.myname=name;
		data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
		data.put(G_Ziduan.G_name,userdata.myname);//用户名
		Xianchengbaioshi.addxiancheng(userdata.myid,this);
		Xianchengbaioshi.deletexiancheng(this);
		quite=true;
		}
		writemsg=data.toString();
		return quite;
	}
	public void ClientEexit(JSONObject data)//注销
	{
		Xianchengbaioshi.hm.remove(userdata.myid);
		data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
		userdata.myid = "";
		userdata.myname = "";
		System.out.println("德玛西亚人");
		writemsg=data.toString();
	}
	public void get_usermsg(JSONObject data)
	{
		Denglu denglu=new Denglu();
		denglu.getUserMsg(data, userdata.myid);
		writemsg=data.toString();
	}
	public void Get_Room(JSONObject data)
	{ 
		JSONArray data1=dataManager.getRoomluManager();
		if(data1!=null)
		{
		data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
		data.put(G_Ziduan.G_AllRoom,data1);
		}
		else
		data.put(G_Ziduan.G_yn,G_TXType.G_Shibai);
		writemsg=data.toString();
	}
	public void Come_Room(JSONObject data)/*进入房间*/
	{ 
		//writemsg="{\"YN\":\"CG\",\"RM\":[{\"PS\":false,\"ON\":\"Dlmax\"}],\"LX\":\"CR\",\"CR\":\"1\"}";
		boolean data1=false;
		BeganPlay bp=null;
		if(userdata.fanghao.equals(""))
		{
	    userdata.fanghao=data.getString(G_Ziduan.G_roomnumble);
		bp=(BeganPlay)Message.RNS.get(userdata.fanghao);
		/*进入这个房间*/
		data1=bp.setXiancheng(this);
		}
		else
		{
		bp=(BeganPlay)Message.RNS.get(userdata.fanghao);
		data1=true;	
		}
		
		if(data1)
		{       //打完牌后退回房间
			data1=dataManager.getRoom(userdata.fanghao,data);
			if(!data1)
			{
			data.put(G_Ziduan.G_yn,G_TXType.G_Shibai);
			bp.deleteXiancheng(this);
			userdata.fanghao="";
			writemsg=data.toString();
			}
		}
		
		else
		{
			data.put(G_Ziduan.G_yn,G_TXType.G_Shibai);
			userdata.fanghao="";
			writemsg=data.toString();
		}
	}
	public void New_Room(JSONObject data)
	{ 
		BeganPlay bp=new BeganPlay();
		userdata.fanghao=Message.setBeganPlay(userdata.myid,bp);
		bp.setRoomName(userdata.fanghao);
		bp.setXiancheng(this);
		userdata.zhunbei=2;
		data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
		data.put(G_Ziduan.G_roomnumble,userdata.fanghao);
		data.put(G_Play.G_playname,userdata.myname);
		data.put(G_Play.G_playstate,userdata.zhunbei);
		writemsg=data.toString();
		System.out.println("创建成功");
	}
	public void Tui_Room(JSONObject data)
	{ 
		BeganPlay bp=Message.getBeganPlay(userdata.fanghao);
		data.remove(G_Ziduan.G_leixing);
		data.put(G_Ziduan.G_leixing,G_TXType.G_zhunbei);
		if(bp.deleteXiancheng(this,data))
		{
		data=new JSONObject();
		data.put(G_Ziduan.G_leixing,G_TXType.G_TuiRoom);
		data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
		System.out.println(userdata.myid+"退出成功"+userdata.fanghao);
		userdata.zhunbei=0;
		userdata.fanghao="";
		}
		else
		{
			data.put(G_Ziduan.G_yn,G_TXType.G_Shibai);
			System.out.println(userdata.myid+"退出失败"+userdata.fanghao);
		}
		writemsg=data.toString();
	}
	public void Zhun_bei(JSONObject data)
	{ 
		boolean data1=false;
		userdata.zhunbei=data.getInt(G_Play.G_playstate);
		data1=dataManager.getRoom(userdata.fanghao,data);
		if(!data1)
		{
		data.put(G_Ziduan.G_yn,G_TXType.G_Shibai);
		writemsg=data.toString();
		}
	}
	public void Began_game(JSONObject data)
	{ 
		if(!dataManager.xifa(userdata.fanghao))//发牌
		{
			data.put(G_Ziduan.G_yn,G_TXType.G_Shibai);
			writemsg=data.toString();
			System.out.println("失败了啊");
		}else
		System.out.println("开始了啊");
	}
	
	public void Play_Cards(JSONObject data)
	{ 
		dataManager.playcards(data, userdata.fanghao, userdata.myid);
	}	
	public void Closer_Game(JSONObject data) throws InterruptedException
	{ 
		if(userdata.HavaPlayer)
		{
			userdata.Break=true;
			System.out.println("userdata.Break=true");
		}
		else
		{
			System.out.println("ljxc.stopAll()");
			ljxc.stopAll();
		}
	}
	public void Server_lever()
	{
		
		JSONObject data = new JSONObject();
		data.put(G_Ziduan.G_leixing,G_TXType.G_lever);
		data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
		writemsg=data.toString();
		try {
			os.write(writemsg.getBytes("UTF-8"));
			System.out.println(writemsg);
			//os.flush();
			ljxc.stopAll();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}


	}
}
