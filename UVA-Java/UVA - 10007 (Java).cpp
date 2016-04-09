import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main {
	
	public static BigInteger[] ncr = new BigInteger[700];
	static Scanner IN = new Scanner(System.in);
	public static int sz = 305;
	
	public static void nCr()
	{
		ncr[1] = BigInteger.valueOf(1);
		for(int i=2;i<2*sz;i++)
			ncr[i] = ncr[i-1].multiply(BigInteger.valueOf(i)); 
	}
	
	public static void main(String args[])
    {
		nCr();
		int x;
		while (IN.hasNext()) {
			x = IN.nextInt();
			if(x==0)
				break;
			int tmp = 2 * x;
			System.out.println(ncr[tmp].divide(ncr[x+1]));
		}
    }
}
