package mathematics;

import java.util.*;
public class PrimeFactors {
	
	 static void primeFactorsNaive(int n) {
		for(int i=2; i<=n; i++) {
			CheckForPrime obj= new CheckForPrime();
			if(obj.checkFPrimeOptimized(i)) {
				int x=i;
				while(n%x==0) {
					System.out.print(i+" ");
					x=x*i;
				}
			}
		}
		System.out.println();
	}
	
	static void primeFactorsEfficient(int n) {
		for(int i=2; i*i<n; i++) {
			int x= i;
			while(n%i==0) {
				System.out.print(i+" ");
				n=n/i;
			}
		}
		if(n>1){
			System.out.println(n);
		}
		System.out.println();
	}
	
	static void primeFactorsOptimized(int n) {
		if(n<=1) return;
		while(n%2==0) {
			System.out.print("2 ");
			n=n/2;
		}
		while(n%3==0) {
			System.out.print("3 ");
			n=n/3;
		}
		for(int i=5; i*i<=n; i+=6) {
			if(n%i==0) {
				System.out.print(i+" ");
				n=n/i;
			}
			if(n%(i+2)==0) {
				System.out.print(i+2+ " ");
				n=n/(i+2);
			}
		}
		if(n>3)
			System.out.println(n);
		System.out.println();
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int T= sc.nextInt();
		while(T--!=0) {
				
			int n=sc.nextInt();
				
			System.out.println("CHOOSE \n1: Naive \n2: Efficient \n3:Optimized");
			int choice=sc.nextInt();
			switch(choice) {
				case 1:{
					long startTime = System.nanoTime();;
						
					primeFactorsNaive(n);
						
					long endTime = System.nanoTime();;
					System.out.println("Time:" + (endTime-startTime));
					break;
				}
				case 2:{
					long startTime = System.nanoTime();;
					
					primeFactorsEfficient(n);
		
					long endTime = System.nanoTime();;
					System.out.println("Time:" + (endTime-startTime));
					break;
				}
				case 3:{
					long startTime = System.nanoTime();;
						
					primeFactorsOptimized(n);
						
					long endTime = System.nanoTime();;
					System.out.println("Time:" + (endTime-startTime));
					break;
					}
				}
			}
	}

}
