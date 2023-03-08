from random import randint
def spin():
    ingresso = int(input("int the number of spin : "))
    win : int = 0
    lose : int = 0
    a,b,c=0,0,0
    for d in range(ingresso):
        print(f"-----------------\nspin number : {d}")
        for e in range(5):
            a=randint(1,3)
            b=randint(1,3)
            c=randint(1,3)
            print(f"{a},{b},{c}")
        if e==4:
            if a==b and b==c and a==c:
                print("you won \n")
                win += 1
            else:
                print("you lose")
                lose += 1
        else:
                pass
    print(f"you won for : {win}, you lose for :{lose}")
def main():
    spin()
if __name__=="__main__":
    main()
