class Base{
void show(){
System.out.println("base");
}
}
class Child extends Base{
void show(){
System.out.println("child");
}
void display(){
System.out.println("display");
}
public static void main(String args[]){
Base b=new Child();
b.show();
}
}
