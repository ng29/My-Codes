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
	private String name;
	private String age; 
	private String course;
	private String phone;
	
	//Setter
	Student(String name, String age, String course, String phone)
	{
		this.name=name;
		this.age=age;
		this.course=course;
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
	
	public String getPhone()
	{
		return phone;
	}
	
}

class Mandatory{
	
	static void raiseEx()throws MandEx
	{
		throw new MandEx("This was a Mandatory Field");
	}
	
	public static void main(String args[])
	{
		String name, age, course, phone;
		Student S;
		Scanner sc= new Scanner(System.in);
		try{
			System.out.print("\nEnter Name: ");
			name=sc.nextLine();
			if(name.length()==0)
				raiseEx();
			System.out.print("Enter Age: ");
			age=sc.nextLine();
			if(age.length()==0)
				raiseEx();
			System.out.print("Enter Course: ");
			course=sc.nextLine();
			if(course.length()==0)
				raiseEx();
			System.out.print("Enter Phone: ");
			phone=sc.nextLine();
			if(phone.length()==0)
				raiseEx();
			S= new Student(name, age, course, phone);
		System.out.println("\nName: "+S.getName());
		System.out.println("Age: "+S.getAge());
		System.out.println("Course: "+S.getCourse());
		System.out.println("Phone: "+S.getPhone()+"\n");
		}catch(Exception e){
		}
	}
}










