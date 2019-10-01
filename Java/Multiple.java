// Java program to illustrate the 
// concept of Multiple inheritance 
import java.util.*; 
import java.lang.*; 
import java.io.*; 

interface one 
{ 
	public void print_geek(); 
} 

interface two 
{ 
	public void print_for(); 
} 

interface three extends one,two 
{ 
	public void print_geek(); 
} 
class child implements three 
{ 
	@Override
	public void print_geek() { 
		System.out.println("Geeks"); 
	} 

	public void print_for() 
	{ 
		System.out.println("for"); 
	} 
} 

// Drived class 
public class Main 
{ 
	public static void main(String[] args) 
	{ 
		child c = new child(); 
		c.print_geek(); 
		c.print_for(); 
		c.print_geek(); 
	} 
} 
