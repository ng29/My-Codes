import java.util.Scanner;

class One
{
	One(int num)
	{	int temp;
		int rev=0;
		while(num>0)
		{temp=num%10;
		 num=num/10;
		 rev=rev*10+temp;
		}
		System.out.println("\nReversal is: "+rev);
	}
}
class Two extends One//extends One
{
	Two(int num)
	{
		super(num);
		for(int i=2;i<num/2;i++)
		{if(num%i==0){System.out.println("\nNot a Prime Number"); return;}}
		System.out.println("\nPrime Number");
	}
}
class Three extends Two
{
	Three(int num)
	{	
		super(num);
		int temp,save=num;
		int rev=0;
		while(num>0)
		{temp=num%10;
		 num=num/10;
		 rev=rev*10+temp;
		}
		if(rev==save)
		{System.out.println("\nPalindrome\n");}
		else
		{System.out.println("\nNot a palindrome\n");}
	}
}
class Four
{
	public static void main(String args[])
	{
	Scanner sc= new Scanner(System.in);
	System.out.println("\nEnter a number: ");
	int num=sc.nextInt();
	Three obj3=new Three(num);
	}
}
