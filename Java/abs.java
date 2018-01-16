abstract class Base{
int x,y;
void show(){
System.out.println(x);
System.out.println(y);
}
abstract void display();
void register(){
b.display();
}
}
class Child extends Base{
void get(int x, int y){
this.x=x;
this.y=y;
}
void  display(){
System.out.println("default");
}
public static void main(String args[]){
Child c1 = new Child();
c1.register(c1);
}
}
