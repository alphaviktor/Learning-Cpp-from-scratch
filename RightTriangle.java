import java.util.*;
 
class RightTriangle
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        

        for(int i=1; i<=n; i++){
            for( int j=n-1; j>0; j--){
                System.out.print("");
            }
            for ( int k=1; k<=n; k++){
                if (k>n-1){
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
}
