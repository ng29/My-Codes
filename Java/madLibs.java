import java.util.Random;
import java.util.Scanner;

public class madLibs {
	Scanner s=  new Scanner(System.in);
	String story;
	String name;
	String adjective1;
	String adjective2;
	String noun1;
	String noun2;
	String noun3;
	String adverb;
	String randomNums;
	Random rand =  new Random();
	// getters for all the above properties

	public String getStory(){
		return story;
	}
	public String getName(){
		return name;
	}
	public String getAdjective1(){
		return adjective1;
	}
	public String getAdjective2(){
		return adjective2;

	}
	public String getNoun1(){
		return noun1;
	}
	public String getNoun2(){
		return noun2;
	}
	public String getNoun3(){
		return noun3;
	}
	public String getAdverb(){
		return adverb;
	}
	public String getRandomNums(){
		return randomNums;
	}


	// Setters 

	public void setStory(String newStory){
		this.story=newStory;
	}
	public void setName(String newName){
		this.name=newName;
	}
	public void setAdjective1(String newAdjective1){
		this.adjective1= newAdjective1;
	}
	public void setAdjective2(String newAdjective2){
		this.adjective2=newAdjective2;
	}
	public void setNoun1(String newNoun1){
		this.noun1=newNoun1;
	}

	public void setNoun2(String newNoun2){
		this.noun2=newNoun2;
	}
	public void setNoun3(String newNoun3){
		this.noun3=newNoun3;
	}
	public void setAdverb(String newAdverb){
		this.adverb= newAdverb;
	}

	public void setRandomNums(){
		// As the numbers are random, we are not going to take the value from outside but do something in order to generate random numbers.
int num= Math.abs(rand.nextInt())%1000;
int [] numHolder= new int [3];
for(int i=0;i<numHolder.length;i++){
	numHolder[i]=num+i;
}
randomNums= "not "+numHolder[0]+"not "+numHolder[1]+"not "+numHolder[2]+" .";


	}
	// First thing we need to do is to print out instructions for the user to how to play the game and rules
	public void printInstructions(){
		System.out.println("Welcome to the MadLibs game.If you type in words, we will give you a story."+
				"Start by typing in your name.");
		//1.go and create a game instance
	}

	public void putTogetherStory(){
		String story;
		int num= Math.abs(rand.nextInt())%2;
		if(num==0){
		
		story="Priya and her best friend "+getName()+" went to Kingdom of Dreams today!.\n"
				+ " They saw a "+ getNoun1()+" in a show at the Magic Kingdom.\n"
				+" and ate a "+getAdjective1()+" feast for dinner. The next day 1\n"
				+" ran "+getAdverb()+" to meet the Mickey Mouse in his "+getNoun2()
				+"\n and then that night I gazed at the "+getRandomNums()+" "
				+getAdjective2()+"\n fireworksshooting from the "+getNoun3()+" .";
		// set this story to the property
		}
		else{
			story= "Priya and her frenery "+ getName()+ " went to the zoo last summer.\n"
					+" They saw a huge "+getNoun1()+ " and a tiny little "+ getNoun2()+"\n. That night"
					+" they decided to climb "+getAdverb()+" into the "+getNoun3()+" to get a closer look. "+
					"The zoo was "+ getAdjective1()+" at night ,but they did'nt care \n"
					+" until "+getRandomNums()+" "+ getAdjective2()+" apes yelled at their faces making Nitin and "+ getName()+" sprint all the way back home.\n";
		}
		setStory(story);
	}
	// now we will take the values from the user and set the values of the properties.
   
	public void EnterName(){
		setName(s.nextLine());
	}
public void EnterNoun1(){
	System.out.println("Gimme a noun!.");
	setNoun1(s.nextLine());
}
public void EnterNoun2(){
	System.out.println("Gimme another noun.");
	setNoun2(s.nextLine());
}
public void EnterNoun3(){
	System.out.println("Gimme one last noun.");
	setNoun3(s.nextLine());
}
public void EnterAdjective1(){
	System.out.println("Gimme an adjective.");
	setAdjective1(s.nextLine());
}
public void EnterAdjective2(){
	System.out.println("One last adjective please!.");
	setAdjective2(s.nextLine());
}
public void EnterAdverb(){
	System.out.println("For a change enter an adverb.");
	setAdverb(s.nextLine());
}

//Playing the game,we will call the above functions
 public void play(){
	 EnterName();
	 EnterNoun1();
	 EnterNoun2();
	 EnterNoun3();
	 EnterAdjective1();
	 EnterAdjective2();
	 EnterAdverb();
	 putTogetherStory();
	 setRandomNums();
	 System.out.println(getStory());
	 
 }
 








	public static void main(String[] args) {
		madLibs game= new madLibs();
		game.printInstructions();
		game.play();

// Want to take game to a better level.Add a parser to to check whether the given input is a adjective or noun or something else
// for that you will need a large database of the adjective, nouns,etc to verify the input of the user. 







	}

}
