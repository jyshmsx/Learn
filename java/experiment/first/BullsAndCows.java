package inclass.experiment.first;

import java.util.Scanner;

public class BullsAndCows{

    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        Number nb = new Number();
        nb.setNumber();
        
        GuessNumber gn = new GuessNumber(nb);

        gn.guessNumber();

    }
}