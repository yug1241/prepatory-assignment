public class MultiplicationTable {
 public static void main(String[] args) {
argument
 if (args.length != 1) {
 System.out.println("Usage: java
MultiplicationTable <number>");
 return;
 }
 int number = Integer.parseInt(args[0]);
 System.out.println("Multiplication Table for " +
number + ":");
 for (int i = 1; i <= 10; i++) {
 System.out.println(number + " x " + i + " = "
+ (number * i));
 }
 }
}