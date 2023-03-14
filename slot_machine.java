import java.util.Random;
import java.util.Scanner;
public class sloth_machie {
    public static void main(String[] args){
         while(true){
            System.out.println("int the number of spin : ");
            sloth();
         }
    }
    public static void sloth(){
        int a,b,c = 0;
        int win=0;
	int lose=0;
        Random rand = new Random();
        Scanner ingresso = new Scanner(System.in);
	int limite = ingresso.nextInt();
        for(int d=0;d<limite;++d){
		System.out.println("----"+(d+1)+"----");
            for(int e=0;e<=5;++e){
                a=rand.nextInt(4);
                b=rand.nextInt(4);
                c=rand.nextInt(4);
                System.out.println("  "+a+","+b+","+c);
		if(e>=5){
	 		if(a==b && b==c){
				System.out.println("you won");
				win += 1; 
				}
			else{
				System.out.println("you lose");
				lose += 1;
				}
        		}
    		}
	}
	System.out.println("you won for : "+win+" you lose for : "+lose);
    }
}
