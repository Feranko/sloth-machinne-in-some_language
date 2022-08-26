from random import randint
from time import sleep
import pyttsx3
import keyboard

print("1euros=5spin")
a = int(input())
print(f"you have:{a*5}spins ")

def frankorompipalle():
    crediti = a * 5
    for r in range(crediti):
        win = 0
        for b in range(5):
            i = [randint(1, 3)]
            j = [randint(1, 3)]
            k = [randint(1, 3)]
            print(i, j, k,)
        if (i[0]==j[0]==k[0]):
            print("hia vinto")
            win += 1
        else:
            print("hai perso")
            crediti -= 1
        print("\n")
        print(crediti)
        if crediti == 0:
            print("you finished your spin")
            print(f"you win at {win} turn")

print("press alt to play\n")
while True:
    if keyboard.is_pressed("alt"):
        frankorompipalle()
print("\n")
