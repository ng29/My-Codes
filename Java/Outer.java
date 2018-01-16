class Outer{
int x=10;
static int y =20;
class Inner{
void show(){
System.out.println(x);
System.out.println(y);
}
}
public static void main(String args[]){
Outer o = new Outer();
System.out.println(o.x);
Outer.Inner i = o .new Inner();
i.show();
}
}
