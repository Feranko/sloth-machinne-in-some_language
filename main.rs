use rand::Rng;
use std::io;
fn spin(){
    //sistema input
    let mut stringa = String::new();
    let number:i32 = 0;
    io::stdin().read_line(&mut stringa).expect("isn't a string ");
    let mut number:i32 = stringa.trim().parse().expect("can't be converted");
    //dichiarazioni di variabili
    let mut a:[i32; 5] = [0; 5];
    let mut b:[i32; 5] = [0; 5];
    let mut c:[i32; 5] = [0; 5];
    let mut win:i32 = 0;
    let mut lose:i32 = 0;
    //ciclo randomizzazione
    let d:i32=0;
    let e:i32=0;

    for d in 1..1+number{
        println!("----{}----",d);
        for e in 1..5{
            a[e]=rand::thread_rng().gen_range(1..4);
            b[e]=rand::thread_rng().gen_range(1..4);
            c[e]=rand::thread_rng().gen_range(1..4);
            println!("  {},{},{}",a[e],b[e],c[e]);
        }
        if a[4]==b[4]{
            if b[4]==c[4]{
                println!(" you won ");
                win += 1;        
            }
            else{
                println!("you lose");
                lose += 1;
            }
        }
        else{
            println!("you lose");
            lose += 1;
        }
    }
    println!("");println!("you won for :{} and you lose for :{}",win,lose);println!("");
}
fn main() {
    loop{
        println!("int the number of speen");
        spin();
    }
}
