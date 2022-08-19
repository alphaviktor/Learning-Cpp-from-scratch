import java.util.*;
 
class ArmstrongNum
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number you desire to check: ");
        int num = sc.nextInt();

        int sum=0;
        int originalNum=num, digit;

        while(num>0){
            digit = num%10;
            sum = sum+ digit*digit*digit;          //sum+= digit*digit*digit
            num = num/10;
        }
        if (sum==originalNum){
            System.out.println("The given number is armstrong number");
        }
        else{
            System.out.println("The given number is not an armstrong number");
        }
    }
}
