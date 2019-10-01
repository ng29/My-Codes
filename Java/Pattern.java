import java.util.Scanner;
public class Pattern
{
    public static void main(String[] args)
    {
             
	Scanner sc=new Scanner(System.in);
	System.out.print("Enter N: ");
	int n=sc.nextInt();	 
              System.out.print("Enter Symbol: ");
	
           char c = sc.next().charAt(0);
 
	for(int i=1;i<=n;i++)
               {
	        for(int j=0;j<n-i;j++)
                
                       {
                               System.out.print(" ");
                       }
                       for(int j=0;j<(i*2)-1;j++)
                
                       {
                               System.out.print(c);
                       }
                      System.out.println();
               }             
 
 
                
    }
}
