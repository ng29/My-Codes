package mathematics;

import java.util.Scanner;

class TrailingNaive{
	public int trailingNaive(int N) {
		
		Factorial ob= new Factorial();
		
		long res=ob.factorialrec(N);
		int result=0;
		while(res%10==0) {
			
			result++;
			res/=10;
		}
		
		return result;
	}
	
}

class TrailingEfficient{
	public int trailingEfficient(int N) {
		
		int res=0;
		for(int i=5; i<=N; i*=5) {
			res= res+ N/i;
		}
		return res;
	}
}



public class TrailingZerosInFactorial {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int T= sc.nextInt();
		while(T--!=0) {
			int N= sc.nextInt();
			System.out.println("CHOOSE \n1: Naive \n2: Efficient");
			int choice=sc.nextInt();
			switch(choice) {
			case 1:{
				long startTime = System.nanoTime();;
				
				TrailingNaive obj = new TrailingNaive();
				System.out.println(obj.trailingNaive(N));
				
				long endTime = System.nanoTime();;
				System.out.println("Time:" + (endTime-startTime));
				break;
			}
			case 2:{
				long startTime = System.nanoTime();;
				
				TrailingEfficient obj2= new TrailingEfficient();
				System.out.println(obj2.trailingEfficient(N));
				
				long endTime = System.nanoTime();;
				System.out.println("Time:" + (endTime-startTime));
				break;
			}
		}
	}

}
}

