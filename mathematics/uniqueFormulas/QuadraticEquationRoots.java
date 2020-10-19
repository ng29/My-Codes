package mathematics.uniqueFormulas;

import java.util.Scanner;

public class QuadraticEquationRoots {
	static void quadraticRoots(int a, int b, int c) {
		
		double d= b*b-4*a*c;
		if(d<0) {
			System.out.println("Imaginary");
		}
		else {
			int x1= (int)Math.floor((-b+ Math.sqrt(d))/2.0);
			int x2=(int)Math.floor((-b-Math.sqrt(d))/2.0);
			System.out.println(x1+" "+x2);
		}
		
	}
	public static void main(String[] args) {
		
		Scanner sc= new Scanner(System.in);
		int T= sc.nextInt();
		while(T--!=0) {
			
			int a= sc.nextInt();
			int b= sc.nextInt();
			int c=sc.nextInt();
			
			long start=System.nanoTime();
			quadraticRoots(a,b,c);		
			long end= System.nanoTime();
			System.out.println("Time: "+(end-start));
				
		}

	}

}
