package mathematics;
import java.util.*;


class EucledianBasic{
	public int eucledianBasic(int a, int b) {
		while(a!=b) {
			if(a>b) a=a-b;
			else b=b-a;
		}
		return a;
	}
}

class EucledianOptimized{
	public int eucledianOptimized(int a, int b) {
		if(b==0) {
			return a;
		}
		else {
			return eucledianOptimized(b, a%b);
		}
	}
}


public class GCD {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int T= sc.nextInt();
		while(T--!=0) {
			int a=sc.nextInt();
			int b= sc.nextInt();
			System.out.println("CHOOSE \n1: Basic Euclidean \n2: Efficient Eucledian");
			int choice=sc.nextInt();
			switch(choice) {
			case 1:{
				EucledianBasic ob1= new EucledianBasic();
				System.out.println(ob1.eucledianBasic(a,b));
				break;
			}
			case 2:{
				EucledianOptimized ob2= new EucledianOptimized();
				System.out.println(ob2.eucledianOptimized(a,b));
				break;
			}
		}

		}

	}
}
