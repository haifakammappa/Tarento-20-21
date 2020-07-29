//1.
Write a program to design a Dice game. There should be two players. Ask the users to enter their names and roll the dice(four times each). Display the scores and calculate the final score and print the name of the winner. 
 program
 
   public class RollTheDice {
    public static void main(String[] args) {
    
        int die1;   // The number on the first die.
        int die2;   // The number on the second die.
        int roll;   // The total roll (sum of the two dice).
        
        die1 = (int)(Math.random()*6) + 1;
        die2 = (int)(Math.random()*6) + 1;
        roll = die1 + die2;
        
        System.out.println("The first die comes up " + die1);
        System.out.println("The second die comes up " + die2);
        System.out.println("Your total sum is " + roll);

    } 
 
}
