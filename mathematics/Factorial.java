package mathematics;

import java.util.*;
import java.io.*;


public class Factorial {
	
	public static long factorialIterative(int N) {
	     // Your code here
	     long res=1;
	     for(int i=2; i<=N; i++){
	         res= res*i;
	     }
	     return res;
	 }
	
	public static long factorialrec(int N) {
		
		if(N==0)
			return 1;
		else
			return N*factorialrec(N-1);
	}
	
	
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int T = sc.nextInt();
    while (T-- > 0) {
   	 int N;
        N = sc.nextInt();	
   	 System.out.println("CHOOSE \n1: Basic Euclidean \n2: Efficient Eucledian");
			int choice=sc.nextInt();
			switch(choice) {
				case 1:{

			         System.out.println(factorialIterative(N));
					break;
				}
				case 2:{

					System.out.println(factorialrec(N));
					break;
				}
			}
        
    }
}
}


