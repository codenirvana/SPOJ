/* package whatever; // don't place package name! */
import java.math.BigInteger;
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		String A , B;
		BigInteger a,b,c;
		while(n--!=0){ 
			a = scan.nextBigInteger(); b=scan.nextBigInteger();
			System.out.println( a.multiply(b) );
		}
	}
}