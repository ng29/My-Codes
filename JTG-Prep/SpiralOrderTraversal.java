import java.util.Deque;
import java.util.LinkedList;
import java.util.Stack;

public class Spiral{
	public void spiralorder(Node root){
		if(root==null)
			return;
			
		Stack<Node>s1=new Stack<>();
		Stack<Node>s2=new Stack<>();
		s1.push(root);
		while(!s1.isEmpty() ||  !s2.isEmpty() ){
			while(!s1.isEmpty()){
				root=s1.pop();
				System.out.println(root.data);
				if(root.left!=null)	s1.push(root.left);
				if(root.right!=null)	s1.push(root.right);
			}
			
			while(!s2.isEmpty()){
				root=s2.pop();
				System.out.println(root.data);
				if(root.right!=null)	s2.push(root.right);
				if(root.left!=null)	s2.push(root.left);
			}
		}
	}
	public static void main(String args[]){
		Tree bt=new Tree(); 
		Node root = null;
        root = bt.addNode(10, root);
        root = bt.addNode(30, root);
        root = bt.addNode(25, root);
        root = bt.addNode(35, root);
        root = bt.addNode(-10, root);
        root = bt.addNode(0, root);
        root = bt.addNode(-20, root);
        root = bt.addNode(-15, root);
        root = bt.addNode(45, root);
        
        Spiral s= new Spiral();
        System.out.println("Two stack method");
        s.spiralorder(root);
	}
}
