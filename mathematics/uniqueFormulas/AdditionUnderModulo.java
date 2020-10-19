package mathematics.uniqueFormulas;

import java.util.Scanner;

public class AdditionUnderModulo {
	public static long additionUnderModulo(long a, long b) {
		//(a+b)%b=(a%m + b%m)%m
		int M= 1000000007;
		long res=(a%M +b%M)%M;
		return res;
		
	}

	public static void main(String[] args) {
		
		Scanner sc= new Scanner(System.in);
		int T= sc.nextInt();
		while(T--!=0) {
			long a=sc.nextLong();
			long b=sc.nextLong();
			long res=additionUnderModulo(a,b);
			System.out.println(res);
		}

	}

}
