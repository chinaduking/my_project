import java.util.Scanner;

public class findindex{

	public static int strStr(String source,String target)
	{
		if(source == null || target == null) return -1;

		for(int i =0;i<source.length()-target.length()+1;i++)
		{
			int j =0;
			for(;j<target.length();j++)
			{
			    if(source.charAt(i+j) != target.charAt(j)) break;
			}
			if(j == target.length()) return i;
		}
		return -1;
	}

	public static void main(String args[])
	{	
		int num;
		String source = null;
		String target = null;

		System.out.println("please input your source:");
		Scanner source_temp = new Scanner(System.in);
		source = source_temp.next();

		System.out.println("please input you target:");
		Scanner target_temp = new Scanner(System.in);
		target = target_temp.next();

		num = strStr(source,target);
		System.out.println("Output:");
		System.out.println(num);
	}

}
