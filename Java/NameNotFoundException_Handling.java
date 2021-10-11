class NameNotFoundException extends Exception {

    public NameNotFoundException(String message) {
        super(message);
    }

}

class CustomerName{
	
	String name;
	
	CustomerName(){
		
		name="A";
	}
	
	public boolean isName(String name)throws NameNotFoundException {

        if ("".equals(name)) {
            throw new NameNotFoundException("Name is empty!");
        }

        else if(this.name.equals(name))
        	return true;
        else
        	return false;
		
		
	}
}

public class Exp13 {

	public static void main(String[] args) {
		
		CustomerName obj = new CustomerName();

        try {
            System.out.println("This is the try block.");
            boolean b = obj.isName("");
            
            System.out.println("This line will not be executed.");

        } catch (NameNotFoundException e) {
            System.out.println("Exception caught.");
        } finally{
        	System.out.println("This block will be executed anyhow.");
        }

    }


}
