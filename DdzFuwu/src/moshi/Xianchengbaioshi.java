package moshi;
import java.util.*;

import Quanju.G_Ziduan;

public class Xianchengbaioshi 
{
	public static int count=0;
	public static HashMap hm=new HashMap<String, Xiancheng>();//��½�ɹ���
	public static Vector<Xiancheng> yn=new Vector<Xiancheng>();//ÿ���û����̵߳ĵǼ�
	public static void addxiancheng(String uid,Xiancheng xt)
	{
		hm.put(uid, xt);
	}
	public static Xiancheng getxiancheng(String uid)
	{
		return (Xiancheng)hm.get(uid);
	}
	public static void deletehmxiancheng(Object uid)
	{
		 hm.remove(uid);
	}
	public static void addxiancheng(Xiancheng xt)
	{
		count++;
		yn.add(xt);
	}
	public static boolean deletexiancheng(Object uid)
	{
		boolean bl=yn.remove(uid);
		if(bl)
		count--;
		return bl;
	}
	public static void getCount()
	{
		System.out.println("hm:"+hm.size());
		System.out.println("yn:"+yn.size());
	}
	public static boolean Yanzhen(String id)
	{
		boolean quite=true;
		quite=!hm.containsKey(id);
		if(id.equals(""))quite=false;
		return quite;
	}
}