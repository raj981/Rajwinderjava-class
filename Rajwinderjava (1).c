// Name:Rajwinder Kaur
// Student ID:201904447
// Date Submitted:19/03/2021
// Class IN2203-G1
// Name of work: Assignment 1: The Gambling Game
package gaming;
import java.util.Random;
import java.util.Scanner;

public class MainApplication {
    public static void main(String[] args){
    Casino c= new Casino();
    c.OrganizeNewGame();
    }
}
class Casino{
    Player p1= new Player();
    Game g1= new Game();
    String userAnswer;
        Scanner s= new Scanner(System.in);
        public void OrganizeNewGame(){
            System.out.println("Welcome to the Casino: Would you like to play a game? (y/n)");
        userAnswer= s.nextLine();
        if(userAnswer.equals("y")){
            System.out.println("let's get started");
                    g1.PlayGame();
                    p1.Play();
}
else
{System.out.println("Good bye");}
}
}
class Game{
    Random r= new Random();
    int ComputerGuess= r.nextInt(100) ;
    
    public void PlayGame(){
        System.out.println("Guess a numner from 1 to 100");
        System.out.println("I'll guess a number now ");
        System.out.println(" If your guess is within 20 of my guess: then you win . Else i will WIN  ");
        ComputerGuess= ComputerGuess();
        
        
    }
     public int ComputerGuess(){
      int programGuess;
       programGuess = r.nextInt(100);
      return programGuess;
     }
}
class Player extends Game{
    String Name;
    int  Age=0;
    int rounds= 5;
    int playerguess;
    Game ga = new Game();
    
    public void Play()
    {
        Scanner input= new Scanner(System.in);
        System.out.println("Enter your name");
        Name= input.next();
        
        System.out.println("Enter your Age");
        Age= input.nextInt();
       
        
        for(int n=1; n<= rounds;n++)
        {
            System.out.println("Guess any number");
           playerguess= input.nextInt();
            
            if(playerguess== ga.ComputerGuess||(Math.abs(playerguess - ga.ComputerGuess)<10 ))// Setting the guess range can be within 10 numbers
            {
            	System.out.println("The player has made right guess!! PLAYER WINS");
                System.out.println("The Number was " + ga.ComputerGuess );
            break;
       }
            
            else 
            {
                System.out.println("Sorry you loose");
            }
            if(n==rounds)
            {
                System.out.println("The Game is over");
                System.out.println("The number was " +  ComputerGuess);
            }
            
        }
        
        
    }
    
}