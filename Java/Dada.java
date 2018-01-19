class Base extends Dada{
int x=50;
}
class Dada{
int x=70;
}
class Child extends Base{
int x=20;
void show(){
System.out.println(x);
System.out.println(super.x);
System.out.println(((Dada)this).x);
}
public static void main(String args[]){
Child c1=new Child();
c1.show();
System.out.println(((Dada)c1).x);
}
}
