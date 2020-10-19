package mathematics;
import java.util.*;

class LCMNaive{
	public int lcmNaive(int a, int b) {
		int res = Math.max(a, b);
		while(true) {
			if(res%a==0 && res%b==0) {
				break;
			}
			res++;
		}
		return res;
	}
}

//a*b= gcd *lcm
class LCMEfficient{
	public int lcmEfficient(int a, int b) {
		int res= a*b;
		EucledianOptimized ob= new EucledianOptimized();
		res= res/ ob.eucledianOptimized(a,b);
		return res;
	}
}
public class LCM {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int T= sc.nextInt();
		while(T--!=0) {
			int a= sc.nextInt();
			int b= sc.nextInt();
			
			System.out.println("CHOOSE \n1: Basic Euclidean \n2: Efficient Eucledian");
			int choice=sc.nextInt();
			switch(choice) {
			case 1:{
				LCMNaive ob1= new LCMNaive();
				System.out.println(ob1.lcmNaive(a,b));
				break;
			}
			case 2:{
				LCMEfficient ob2= new LCMEfficient();
				System.out.println(ob2.lcmEfficient(a, b));
				break;
			}
		}
		}
	}

}
