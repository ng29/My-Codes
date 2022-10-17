import java.util.Scanner;
import java.lang.Exception;

class MandEx extends Exception{
	public MandEx(String error)
	{
		super(error);
		System.out.println(getError());
	}
	public String getError(){
		return (super.getMessage());
	}
}
class Student{
	private String marks[];
	
	//Setter
	Student(String name, String roll, int course, String DOB, String phone)
	{
		this.name=name;
		this.age=age;
		this.course=course;
		this.DOB=DOB;
		this.phone=phone;		
	}
	
	//Getters
	public String getName()
	{
		return name;
	}
	
	public String getAge()
	{
		return age;
	}
	
	public String getCourse()
	{
		return course;
	}
	
	public String getDOB()
	{
		return DOB;
	}
	
	public String getPhone()
	{
		return phone;
	}
	
}

class Mandatory{
	
	static void raiseEx()throws MandEx
	{
		throw new MandEx("Mandatory Field");
	}
	
	public static void main(String args[])
	{
		String name, age, course, DOB, phone, sub1;
		Student S[];
		Scanner sc= new Scanner(System.in);
		try{
			System.out.print("Enter Name: ");
			name=sc.nextLine();
			if(name.length()==0)
				raiseEx();
			System.out.print("Enter Roll No.: ");
			roll=sc.nextLine();
			if(age.length()==0)
				raiseEx();
			System.out.print("Enter Marks of Subject 1: ");
			sub1=sc.nextLine();
			if(course.length()==0)
				raiseEx();
			System.out.print("Enter Marks of Subject 2: ");
			sub2=sc.nextLine();
			if(course.length()==0)
				raiseEx();
			System.out.print("Enter Marks of Subject 3: ");
			sub3=sc.nextLine();
			if(course.length()==0)
				raiseEx();
			System.out.print("Enter Marks of Subject 4: ");
			sub4=sc.nextLine();
			if(course.length()==0)
				raiseEx();
			System.out.print("Enter Marks of Subject 5: ");
			sub5=sc.nextLine();
			if(course.length()==0)
				raiseEx();
			
			S[]= new Student(name, age, course, DOB, phone);
		System.out.println("Name: "+S.getName());
		System.out.println("Age: "+S.getAge());
		System.out.println("Course: "+S.getCourse());
		System.out.println("DOB: "+S.getDOB());
		System.out.println("Phone: "+S.getPhone());
		}catch(Exception e){
		}
	}
}
