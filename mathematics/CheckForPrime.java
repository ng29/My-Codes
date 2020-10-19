package mathematics;
import java.util.*;

public class CheckForPrime {
	
	static boolean checkFPrimeNaive(int N) {
		for(int i=2; i<N-1; i++) {
			if(N%i==0) return false;
		}
		return true;
	} 
	
	public static boolean checkFPrimeEfficient(int N) {
		if(N<=1) return false;
		for(int i=2; i*i<=N; i++) {
			if(N%i==0) return false;
		}
		return true;
		
	}
	
	public static boolean checkFPrimeOptimized(int N) {
		if(N==1) return false;
		if(N==2 || N==3) return true;
		if(N%2==0 || N%3==0) return false;
		for(int i=5; i*i<=N; i+=6) {
			if(N%i==0 || N%(i+2)==0) return false;
		}
		return true;
	}
	
	
	public static void main(String[] args) {
			// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int T= sc.nextInt();
		while(T--!=0) {
				
			int N= sc.nextInt();
				
			System.out.println("CHOOSE \n1: Naive \n2: Efficient \n3:Optimized");
			int choice=sc.nextInt();
			switch(choice) {
				case 1:{
					long startTime = System.nanoTime();;
						
					System.out.println(checkFPrimeNaive(N));
						
					long endTime = System.nanoTime();;
					System.out.println("Time:" + (endTime-startTime));
					break;
				}
				case 2:{
					long startTime = System.nanoTime();;
					
					System.out.println(checkFPrimeEfficient(N));
		
					long endTime = System.nanoTime();;
					System.out.println("Time:" + (endTime-startTime));
					break;
				}
				case 3:{
					long startTime = System.nanoTime();;
						
					System.out.println(checkFPrimeOptimized(N));
						
					long endTime = System.nanoTime();;
					System.out.println("Time:" + (endTime-startTime));
					break;
					}
				}
			}
		}

}
