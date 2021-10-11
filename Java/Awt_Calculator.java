import java.applet.Applet;
import java.awt.BorderLayout;
import java.awt.Button;
import java.awt.CardLayout;
import java.awt.GridLayout;
import java.awt.Panel;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Awt_Calculator extends Applet implements ActionListener{
	
	int n1, n2;
	String op;
	Button b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,plus,minus,mod,div,mul,equals,back,C;
	TextField tf;
	
	public void init() {
		setLayout(new GridLayout(4,2));
		
		
		b0 = new Button("0");
		b1 = new Button("1");
		b2 = new Button("2");
		 b3 = new Button("3");
		 b4 = new Button("4");
		 b5 = new Button("5");
		 b6 = new Button("6");
		 b7 = new Button("7");
		 b8 = new Button("8");
		 b9 = new Button("9");
		 plus = new Button("+");
		 minus = new Button("-");
		 mul = new Button("*");
		 div = new Button("/");
		 mod = new Button("%");
		 equals=new Button("=");
		 back=new Button("DEL");
		 C=new Button("C");
		 tf = new TextField();
		 
		 
		add(b1);
		add(b2);
		add(b3);
		add(b4);
		add(b5);
		add(b6);
		add(b7);
		add(b8);
		add(b9);
		add(b0);
		add(plus);
		add(minus);
		add(mul);
		add(div);
		add(mod);
		add(equals);
		add(C);
		add(back);
		add(tf);
		b0.addActionListener(this);
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
		b5.addActionListener(this);
		b6.addActionListener(this);
		b7.addActionListener(this);
		b8.addActionListener(this);
		b9.addActionListener(this);
		plus.addActionListener(this);
		minus.addActionListener(this);
		mul.addActionListener(this);
		div.addActionListener(this);
		mod.addActionListener(this);
		equals.addActionListener(this);
		back.addActionListener(this);
		C.addActionListener(this);
	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if(e.getSource()==b0){
			tf.setText(tf.getText()+"0");
		}
		if(e.getSource()==b1){
			tf.setText(tf.getText()+"1");
		}
		if(e.getSource()==b2){
			tf.setText(tf.getText()+"2");
		}
		if(e.getSource()==b3){
			tf.setText(tf.getText()+"3");
		}
		if(e.getSource()==b4){
			tf.setText(tf.getText()+"4");
		}
		if(e.getSource()==b5){
			tf.setText(tf.getText()+"5");
		}
		if(e.getSource()==b6){
			tf.setText(tf.getText()+"6");
		}
		if(e.getSource()==b7){
			tf.setText(tf.getText()+"7");
		}
		if(e.getSource()==b8){
			tf.setText(tf.getText()+"8");
		}
		if(e.getSource()==b9){
			tf.setText(tf.getText()+"9");
		}
		
		if(e.getSource()==plus){
			op = "+";
			n1 = Integer.parseInt(tf.getText());
			tf.setText("");
		}
		if(e.getSource()==minus){
			
			op = "-";
			n1 = Integer.parseInt(tf.getText());
			tf.setText("");
		}
		if(e.getSource()==mul){
			
			op = "*";
			n1 = Integer.parseInt(tf.getText());
			tf.setText("");
		}
		if(e.getSource()==div){
			
			op = "/";
			n1 = Integer.parseInt(tf.getText());
			tf.setText("");
		}
		if(e.getSource()==mod){
			
			op = "%";
			n1 = Integer.parseInt(tf.getText());
			tf.setText("");
		}
		if(e.getSource()==equals){
			int result=0;
			n2 = Integer.parseInt(tf.getText());
			if(op.equals("+")){
				result=n1+n2;
			}
			else if(op.equals("-")){
				result=n1-n2;
			}
			else if(op.equals("*")){
				result=n1*n2;
			}
			else if(op.equals("/")){
				result=n1/n2;
			}
			else if(op.equals("%")){
				result=n1%n2;
			}
			tf.setText(String.valueOf(result));
		}
		if(e.getSource()==C){
			tf.setText("");
		}
		if(e.getSource()==back){
			tf.setText(tf.getText().substring(0, tf.getText().length()-1));
		}
	}

}
