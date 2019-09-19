package DataManager;

import java.sql.ResultSet;
import java.sql.SQLException;

import net.sf.json.JSONObject;
import shujuku.Shujuku;
import Quanju.*;
public class Denglu {
	Shujuku sh=null;
	public void close()
	{
		if(sh!=null)
		{sh.close();
		sh=null;}
	}
	public void SaveWin(int wl,int fraction,String userid)
	{
		String paras[]={String.valueOf(wl),String.valueOf(fraction),userid};
		String sql="update yonghu set Win=isnull(Win,0)+?,Fraction=isnull(Fraction,0)+? where userld=?" ;
		SQL_SERVER(sql,paras);
		close();
	}
	public void SaveLoser(int ll,int fraction,String userid)
	{
		String paras[]={String.valueOf(ll),String.valueOf(fraction),userid};
		String sql="update yonghu set Loser=isnull(Loser,0)+?,Fraction=isnull(Fraction,0)-? where userld=?" ;
		SQL_SERVER(sql,paras);
		close();
	}
	public boolean Register_YZ(String cleId)
	{
		ResultSet rs=null;
		boolean quite=false;
		String sql="select userld from yonghu c where c.userld=?" ;
				
		String paras[]={cleId};
		rs=SQL_SERVER(sql,paras);
		try {
			if(rs.next())
			{
				quite=true;
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}
		close();
		return quite;
	}
	public void Register(String cleId,String passwd)/*添加用户*/
	{
		String paras[]={cleId,"s"+cleId+"Chess","0","0","0"};
		String paras1[]={cleId,passwd};
		String sql="insert into yonghu values(?,?,?,?,?)" ;
		SQL_SERVER(sql,paras);
		sql="insert into private values(?,?)" ;
		SQL_SERVER(sql,paras1);
		
		close();
	}
	public void Modify(String cleId,String passwd,String name)/*修改用户资料*/
	{
		String paras[]={name,cleId};
		String paras1[]={passwd,cleId};
		String sql="update yonghu set userName=? where userld=?" ;
		SQL_SERVER(sql,paras);
		sql="update private set userpasswd=? where userld=?" ;
		SQL_SERVER(sql,paras1);
		
		close();
	}
	public String checkUser(String cleId,String passwd)
	{
		ResultSet rs=null;
		String zhiwei="";
		String sql="select userName from yonghu c,private l where c.userld=l.userld " +
				"and l.userld=? and l.userpasswd=?";
		String paras[]={cleId,passwd};
		rs=SQL_SERVER(sql,paras);
		try {
			if(rs.next())
			{
				zhiwei=rs.getString(1);
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}
		close();
		return zhiwei;
	}
	public void getUserMsg(JSONObject data,String cleId)
	{
		ResultSet rs=null;
		String zhiwei="";
		String sql="select Fraction=isnull(Fraction,0),Win=isnull(Win,0),Loser=isnull(Loser,0)"+
				"from yonghu where userld=?";
		String paras[]={cleId};
		rs=SQL_SERVER(sql,paras);
		try {
			if(rs.next())
			{
				zhiwei=rs.getString(1);
				data.put(G_Play.G_Fraction,rs.getString(1));
				data.put(G_Play.G_Win,rs.getString(2));
				data.put(G_Play.G_Loser,rs.getString(3));
				data.put(G_Ziduan.G_yn,G_TXType.G_Chenggong);
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}
		close();
	}
	public String[] getUserName_passwd(String cleId)
	{
		ResultSet rs=null;
		String user[]=new String[2];
		String sql="select c.userName,l.userpasswd from yonghu c,private l"+
				 " where c.userld=? and c.userld=l.userld";
		String paras[]={cleId};
		rs=SQL_SERVER(sql,paras);
		try {
			if(rs.next())
			{
				user[0]=rs.getString(1);
				user[1]=rs.getString(2);
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return user;
	}
	private ResultSet SQL_SERVER(String sql,String paras[])
	{
		ResultSet rs=null;
		try {
			sh=new Shujuku();
			rs=sh.query(sql, paras);
		
		} catch (Exception e) {}
		return rs;
	}
}
