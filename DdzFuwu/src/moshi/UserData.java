package moshi;

import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.List;

public class UserData {
	public String fanghao="";
    /*扑克牌*/
    public List poker=null;
	/*成功后我的id和名字*/
	public String myid="";
    public String myname="";
    /*有没准备,0表示没准备，1表示准备了，2表示房主*/
    public int zhunbei=0;
    /*我是不是地主*/
    public boolean Y_N_address=false;
    
    /*有没有在打牌*/
    public  boolean HavaPlayer=false;
    /*有没有断线*/
    public  boolean Break=false;
}
