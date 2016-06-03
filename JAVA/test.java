/************test************************/

public class S{
	public void prin(String s)
	{
		System.out.println(s);
	}
}

public class test{
	S s = new S();
	public static void main(String args[])
	{
		System.out.println("hello world!");
		s.prin("this is a class");
	}
}
