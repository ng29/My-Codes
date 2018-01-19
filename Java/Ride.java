interface My{
public default void show(){
System.out.println("my");
}
}

interface My1{
public default void show(){
System.out.println("my1");
}
}

class Child implements My,My1   {
public void show(){
System.out.println("show");
}

public static void main(String args[]){
My M=new Child();
M.show();
}
}
