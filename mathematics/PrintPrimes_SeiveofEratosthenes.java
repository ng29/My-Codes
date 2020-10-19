package mathematics;

import java.util.Arrays;
import java.util.Scanner;

public class PrintPrimes_SeiveofEratosthenes {
	
	
	private static void printprime(int n) {
		for(int i=2; i<=n; i++) {
			CheckForPrime ob= new CheckForPrime();
			if(ob.checkFPrimeEfficient(i)) {
				System.out.print(i+" ");
			}
		}
		
	}

	private static void seiveofEratosthenes(int n) {
		if(n<=1) return;
		 boolean isPrime[] = new boolean[n+1]; 
	     Arrays.fill(isPrime, true);          
		 
	        for(int i = 2; i*i <=n; i++) {
	            if(isPrime[i]) 
	            { 
	                // Update all multiples of p 
	                for(int j = i*i; j <= n; j += i) 
	                    isPrime[j] = false; 
	            } 
	        } 
	          
	        // Print all prime numbers 
	        for(int i = 2; i <= n; i++) 
	        { 
	            if(isPrime[i]) 
	                System.out.print(i + " "); 
	        } 
	}

	
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int T= sc.nextInt();
		while(T--!=0) {
				
			int n= sc.nextInt();	
				
			System.out.println("CHOOSE \n1: Naive \n2: Efficient");
			int choice=sc.nextInt();
			switch(choice) {
				case 1:{
					long startTime = System.nanoTime();;
						
					printprime(n);
					System.out.println();	
					long endTime = System.nanoTime();;
					System.out.println("Time:" + (endTime-startTime));
					break;
				}
				case 2:{
					long startTime = System.nanoTime();;
					
					seiveofEratosthenes(n);
					System.out.println();
					long endTime = System.nanoTime();;
					System.out.println("Time:" + (endTime-startTime));
					break;
				}
			
				}
			}

	}


}
