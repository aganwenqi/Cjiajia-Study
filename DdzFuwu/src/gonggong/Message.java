package gonggong;
import java.util.*;
import DataManager.*;
import shujuku.Shujuku;

import java.io.FileInputStream;

public class Message{
	//保存创建了的房间号码
	public static HashMap RNS=new HashMap<String, BeganPlay>();
	//计算创建了几个房间
	public static int jishu=0;

	public static String setBeganPlay(String fanghao,BeganPlay a)
	{
		jishu+=1;
		RNS.put(fanghao,a);
		System.out.println("创建一个房间");
		return fanghao;
	}
	public static BeganPlay getBeganPlay(String a)
	{
		return (BeganPlay)RNS.get(String.valueOf(a));
	}
}
