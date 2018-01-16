class InsufficientFundsException extends Exception{
private double amount;
public InsufficientFundsException(double amount){
this.amount=amount;
}
public double getAamount(){
return amount;
}
}
class CheckingAccount{
private double balance;
private int number;
public CheckingAccount(int number){
this.number=number;
}
public void deposit(double amount){
balance+=amount;
}
public void withdraw(double amount)
throws InsufficientFundsException
{
if(amount<=balance){
balance-=amount;
}
else
{
double needs=amount-balance;
throw new InsufficientFundsException(needs);
}
}
public double getBalance(){
return balance;
}
public int getNumber(){
return number;
}
}
public class BankDemo{
public static void main(String args[]){
CheckingAccount c= new CheckingAccount(101);
System.out.println("Depositing $500...");
c.deposit(500.00);
try{
System.out.println("Withdrawing $100...");
c.withdraw(100.00);
System.out.println("Depositing $600...");
c.withdraw(600.00);
}
catch(InsufficientFundsException e){
System.out.println("Sorry  but short $.."+ e);
e.printStackTrace();
}
}
}
