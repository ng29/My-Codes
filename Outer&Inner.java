class Outer
{
	private String outerDM;
	Outer()
	{
		outerDM="Outer Class";
	}	
	public void showOuter()
	{
		System.out.println(outerDM);
	}
	
	public class Inner
	{
		private String innerDM;
		Inner()
		{
			innerDM="Inner Class";
		}
		public void showInner()
		{
		System.out.println(innerDM);
		}
		
	}
	
}

class RunOuter
{
	public static void main(String args[])
	{
		Outer obj= new Outer();
		obj.showOuter();
		Outer.Inner obj1= obj.new Inner();
		obj1.showInner();
	}
}
