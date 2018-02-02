import java.awt.Frame;
import java.awt.TextField;
import java.awt.Button;

class Calculator
{
    Frame f;
    TextField tf;
    Button b[][]=new Button[6][5];

    Calculator()
    {
	int i,j,x,y=175;
	f=new Frame("Calculator");
	String vob[][]=  {{"MC","MR","MS","M+","M-"},
			{"<-","CE","C","+/-","sqrt"},
			{"7","8","9","/","%"},
			{"4","5","6","*","1/x"},
			{"1","2","3","-"," "},
			{"0","00",".","+","="}};

	tf= new TextField();
	tf.setBounds(20,40,290,110);
	f.add(tf);

	for(i=0;i<b.length;i++)
	{
	    x=20;
	    for(j=0;j<b[i].length;j++)
	    {
		b[i][j]= new Button(""+vob[i][j]);
		b[i][j].setBounds(x,y,46,25);
		f.add(b[i][j]);
		x=x+60;
	    }
	    y=y+35;
	}

	f.setLayout(null);
	f.setSize(330,400);
	f.setVisible(true);

    }

    public static void main(String... s)
    {
	new Calculator();
    }
	    
	    
	    

}
