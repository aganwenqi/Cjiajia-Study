package gonggong;
import java.util.*;
import DataManager.*;
import shujuku.Shujuku;

import java.io.FileInputStream;

public class Message{
	//���洴���˵ķ������
	public static HashMap RNS=new HashMap<String, BeganPlay>();
	//���㴴���˼�������
	public static int jishu=0;

	public static String setBeganPlay(String fanghao,BeganPlay a)
	{
		jishu+=1;
		RNS.put(fanghao,a);
		System.out.println("����һ������");
		return fanghao;
	}
	public static BeganPlay getBeganPlay(String a)
	{
		return (BeganPlay)RNS.get(String.valueOf(a));
	}
}
