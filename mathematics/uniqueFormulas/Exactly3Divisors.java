package mathematics.uniqueFormulas;
import java.util.*;
import mathematics.CheckForPrime;

public class Exactly3Divisors {
	
	public static int exactly3Divisors(int n) {
		int counter=0;
		n=(int)Math.sqrt(n);
		CheckForPrime ob= new CheckForPrime();
		for(int i=1; i<=n; i++) {
			if(ob.checkFPrimeEfficient(i)) {
				counter++;
			}
		}
		return counter;
		
	}

	public static void main(String[] args) {
			
		Scanner sc= new Scanner(System.in);
		int T= sc.nextInt();
		while(T--!=0) {
				
			int n= sc.nextInt();
			
			long start= System.nanoTime();
			int res=exactly3Divisors(n);
			System.out.println(res);
			long end= System.nanoTime();
			System.out.println("Time:"+(end-start));
		}
	}

}
