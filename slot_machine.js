function randomIntStep(min, max, step){
    return min + Math.floor(Math.random() * max / step) * step;
}
function spin(){
    var a = [0, 0, 0, 0, 0];
    var b = [0, 0, 0, 0, 0];
    var c = [0, 0, 0, 0, 0];

    var win = 0;
    var lose = 0;
    var ingresso = prompt("put the number of the spin: ");
    for(var i=1; i<=ingresso; i++){
        console.log("---"+i+"---");
        for(var j=1; j<5; j++){
            a[j] = randomIntStep(1, 3, 1);
            b[j] = randomIntStep(1, 3, 1);
            c[j] = randomIntStep(1, 3, 1);

            console.log(" "+a[j]+"-"+b[j]+"-"+c[j]);
        }
        if(a[4] == b[4]){
            if(b[4] == c[4]){
                win=win+1;
            }else{
                lose=lose+1;
            }
        }else{
            lose=lose+1;
        }
    }
    console.log("you win for:"+win+" you lose for:"+lose);
}
function main(){
    while(true){
        spin();
    }
}
main();