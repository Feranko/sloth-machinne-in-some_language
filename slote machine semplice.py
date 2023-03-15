import random
import numpy as np
def spin():
    a = np.array(["0","0","0","0","0"])
    b = np.array(["0","0","0","0","0"])
    c = np.array(["0","0","0","0","0"])
    win=0
    lose=0
    ingresso = int(input())
    for d in range(ingresso):
        print(f"\n----{d+1}----")
        for e in range(5):
            a[e] = random.randint(1,3)
            b[e] = random.randint(1,3)
            c[e] = random.randint(1,3)
            print(f"  {a[e]},{b[e]},{c[e]}")
            
        if a[4]==b[4]:
            if b[4]==c[4]:
                print("you win");
                win=win+1
            else:
                print("you lose")
                lose=lose+1
        else:
                print("you lose")
                lose=lose+1
    print(f"you won for :{win}, you lose for :{lose}")
def main():
    while True:
        print("\n int the number of spin \n")
        spin()
 
if __name__=="__main__":
    main()