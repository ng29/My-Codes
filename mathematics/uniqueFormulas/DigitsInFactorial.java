package mathematics.uniqueFormulas;

import java.util.Scanner;
import mathematics.Factorial;

public class DigitsInFactorial {

static int digitsInFactorial(int n) {
		
		if(n<0) return 0;
		if(n<=1) return 1;
		
		final double value_e= 2.71828182845904;
		final double valuePI= 3.141592654;
		
		double x= (Math.log10(2*valuePI*n))/2.0
					+ n*(Math.log10(n/value_e));
					return (int)Math.floor(x)+1;
		
	}

	public static void main(String[] args) {
		
		Scanner sc= new Scanner(System.in);
		int T= sc.nextInt();
		while(T--!=0) {
				
			int n= sc.nextInt();	
			Factorial ob= new Factorial();
			long fact= ob.factorialIterative(n);
			System.out.println(fact);
			long start= System.nanoTime();
			int res=digitsInFactorial(n);
			System.out.println(res);
			long end=System.nanoTime();
			System.out.println("Time:" + (end-start));
		}
	}

}
