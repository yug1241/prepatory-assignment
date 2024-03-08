import java.util.*;
public class checkpalindrome {
 public static void main(String[] args) {
 Scanner sc=new Scanner(System.in);
 System.out.println("Enter a string :");
 String str=sc.nextLine();
 boolean chk=true;
 int len=str.length();
 for(int i=0;i<len/2;i++){
 if(str.charAt(i)!=str.charAt(len-i-1)) {
 System.out.println("The string is not
palindrome");
 chk=false;
 break;
 }}
 if(chk) System.out.println("The string is
palindrome");
 }
}