package mathematics;

import java.util.Scanner;

public class ComputingPower {
	
	static int computingPowerNaive(int n, int p) {
		int res=1;
		for(int i=0; i<p; i++) {
			res=res*n;
		}
		return res;
	}

	private static int computingPowerEfficient(int n, int p) {
		if(p==0) return 1;
		
		int temp= computingPowerEfficient(n,p/2);
		temp=temp*temp;
		if(p%2==0) {
			return temp;
		}
		else {
			return temp*n;
		}
	}
	
	public static void main(String[] args) {

	Scanner sc= new Scanner(System.in);
	int T= sc.nextInt();
	while(T--!=0) {
			
		int n=sc.nextInt();
		int p= sc.nextInt();
		System.out.println("CHOOSE \n1: Naive \n2: Efficient");
		int choice=sc.nextInt();
		switch(choice) {
			case 1:{
				long startTime = System.nanoTime();;
					
				int res=computingPowerNaive(n,p);
				System.out.println(res);	
				long endTime = System.nanoTime();;
				System.out.println("Time:" + (endTime-startTime));
				break;
			}
			case 2:{
				long startTime = System.nanoTime();;
				
				int res=computingPowerEfficient(n, p);
				System.out.println(res);
				long endTime = System.nanoTime();;
				System.out.println("Time:" + (endTime-startTime));
				break;
			}
			
			}
		}
	}

	

}
