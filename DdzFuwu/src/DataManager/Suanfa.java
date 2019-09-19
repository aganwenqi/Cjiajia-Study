package DataManager;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import net.sf.json.JSONArray;

public class Suanfa {
  public static int WhoDiZhu()//获取随机地主
  {
	  int quite=0;
	  float fd=(float) Math.random();
	  if(fd<0.3)
		  quite=1;
	  else if(fd>=0.3&&fd<=0.6)
		  quite=2;
	  else
		  quite=3;
	  return quite;
  }
  public static boolean Licensing_list(List list1,List list2,List list3)//分发牌
  {
	  List list = new ArrayList();
	  int i,j=0;
		 for(i=1;i<=54;i++)
		 {
			 list.add(i);
		 }
		  Collections.shuffle(list);//洗牌
		  for(i=0;i<54;i++)
		  {
			  j=(int)list.get(i);
			  if(i<=19)
			  list1.add(j);
			  else if(i>19&&i<=36)
			  list2.add(j); 
			  else
			  list3.add(j);  
		  }
	    if(i==54)
	    {
	    	Collections.sort(list1);//排序
	    	Collections.sort(list2);
	    	Collections.sort(list3);
	    	return true;
	    }
		  return false;
  }
  public static JSONArray Poker_JSONArray(List list)//转换后的扑克
  {
	  JSONArray jsonArray=new JSONArray();
	  int j=0;
	  for(Object i:list)
	  {
		  j=(int)i;
		  jsonArray.put(j);
	  }
	  return jsonArray;
  }
}
