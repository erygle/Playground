package Other;
public class box {
    public static void main(String[] args) {
        int number = 15;
        char symbol = 'O';
        for(int i=1; i<=number; i++){
            for(int j=1; j<=number; j++){
                if((i==j) || (i+j == number+1) || (i == 1) || (j == 1) || (i == number) || (j == number)){
                    System.out.print(symbol+" ");
                }
                else{
                    System.out.print("  ");
                }
            }System.out.print("\n");
        }
    }
}
