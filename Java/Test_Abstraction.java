abstract class Shape
{
    abstract void numberOfSides();
}

class Trapezoid extends Shape
{

    @Override
    void numberOfSides() 
    {
       System.out.println(" No. of sides in Trapezoid : "+2);
    }
    
}

class Triangle extends Shape
{

    @Override
    void numberOfSides() 
    {
       System.out.println(" No. of sides in Triangle : "+3);
    }
    
}

class Rectangle extends Shape
{

    @Override
    void numberOfSides() 
    {
       System.out.println(" No. of sides in Rectangle : "+4);
    }
    
}

class Hexagon extends Shape
{

    @Override
    void numberOfSides() 
    {
       System.out.println(" No. of sides in Hexagon : "+6);
    }
    
}

public class Test_Abstraction 
{
    public static void main(String args[])
    {
    Trapezoid t1 = new Trapezoid();
    Triangle  t2 = new Triangle();
    Rectangle t3 = new Rectangle();
      Hexagon t4 = new Hexagon();
      
      t1.numberOfSides();
      t2.numberOfSides();
      t3.numberOfSides();
      t4.numberOfSides();
   }
}
