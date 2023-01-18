import java.util.*;
public class slot_machine {
    public static void main(String[] args){
        Random rand = new Random();
        System.out.println("int the number of the spin you wnat to do : ");
        Scanner scan = new Scanner(System.in);
        int limite = scan.nextInt();
        int vincite = 0;
        int a,b,c=0;
        for(int j=0;j<=limite;++j){
            for(int i=0;i<=5;++i){
                a=rand.nextInt(9);
                b=rand.nextInt(9);
                c=rand.nextInt(9);
                System.out.println(a+"-"+b+"-"+c);
                if(i>=5){
                    if(a==b && b==c){
                        System.out.println("you won");
                        vincite += 1; 
                    }
                    else{
                        System.out.println("you lose");
                    }
                }
            }
            if(j>=limite){
                System.out.println("you won for : "+vincite+" times");
            }
        }
    }
}
