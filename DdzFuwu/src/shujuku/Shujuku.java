package shujuku;
import java.util.*;
import java.sql.*;

public class Shujuku 
{
	Connection ct=null;
	PreparedStatement ps=null;
	ResultSet rs=null;
	
	String driver="com.microsoft.sqlserver.jdbc.SQLServerDriver";
	String url="jdbc:sqlserver://localhost:1433;DatabaseName=playcards";
	String user="sa";
	String passwd="ganwenqi12";
	
	public Shujuku()
	{
		try {
			Class.forName(driver);
			ct=DriverManager.getConnection(url,user,passwd);
			
		} catch (Exception e) 
		{
			System.out.println(e.toString());
		}
	}
	public ResultSet query(String sql,String []paras)
	{
		try {
			ps=ct.prepareStatement(sql);

			for(int i=0;i<paras.length;i++)
			{
				ps.setString(i+1, paras[i]);
			}
			
			rs=ps.executeQuery();
		} catch (Exception e) {}
		
		return rs;
	}
	public void close()
	{
		try {
			if(rs!=null) rs.close();
			if(ps!=null) ps.close();
			if(ct!=null) ct.close();
		} catch (Exception e) {}
	}
}
