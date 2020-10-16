interface A
{
	static int a=0;
	public void display();
}

class B implements A
{
	public int b;
	public B()
		{
			b=20;
		}
		public void display()
		{
			System.out.println("Interface defined method called");
		}
		public void show(int b)
		{
			display();
			System.out.println("The value of parameter: "+b);
			System.out.println("The value of D.M.: "+this.b);
		}

}

class runB
{
	public static void main(String args[])
	{
		B obj= new B();
		//C obj2= new C();
		obj.show(10);
	}

}

