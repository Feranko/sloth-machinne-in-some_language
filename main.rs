use rand::Rng;
use std::io;
fn main() {
    let number:i32;
    let mut variabile = String::new();
    println!("int a number");
    io::stdin().read_line(&mut variabile).expect("not work");
    number = variabile.trim().parse().expect("error");
    let _number:i32=0;
    let _number2:i32=0;
    let _number3:i32=0;
    let mut win:i8=0;
    let mut lose:i8=0;
    let _n =0;
    let _i =0;
    for _n in 1 .. number+1{
        println!("----{}----",_n);
        for _i in 1..6{
            let _number = rand::thread_rng().gen_range(1..3);
            let _number2 = rand::thread_rng().gen_range(1..3);
            let _number3 = rand::thread_rng().gen_range(1..3);
            println!("  {},{},{}",_number,_number2,_number3);
            if _i>=5{
                if _number==_number2 && _number2==_number3{
                    println!("you won");
                    win+=1;
                }
                else{
                    println!("you lose");
                    lose+=1;
                }
            }
        }
    }
    println!("");
    println!("you won for {} and you lose for {}",win,lose);
    println!("");
}