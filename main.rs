use rand::Rng;
fn main(){
    let mut number = 0;
    let _n1:u8;
    let _n2:u8;
    let _n3:u8;
    while number < 5 {
        let _n1:u8 = rand::thread_rng().gen_range(1..9);
        let _n2:u8 = rand::thread_rng().gen_range(1..9);
        let _n3:u8 = rand::thread_rng().gen_range(1..9);
        println!("{},{},{}",_n1,_n2,_n3);
        if number >= 4 {
            if _n1 == _n2 && _n2== _n3{
                println!("bingo you won");
                break;
            }
            else{
                println!("you lose");
                break;
            }
        }
        number = number + 1;
    }
}
