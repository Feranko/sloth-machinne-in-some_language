package main

import (
	"fmt"
	"math/rand"
)

func scan() {
	var a [5]int
	var b [5]int
	var c [5]int
	var win int
	var lose int
	fmt.Println("\nPut the number of spin\n")
	var ingresso int
	fmt.Scan(&ingresso)
	for i := 0; i < ingresso; i++ {
		fmt.Printf("---%d---\n", i)
		for j := 0; j < 5; j++ {
			a[j] = 1 + rand.Intn(3)
			b[j] = 1 + rand.Intn(3)
			c[j] = 1 + rand.Intn(3)
			fmt.Printf(" %d-%d-%d\n", a[j], b[j], c[j])
		}
		if a[4] == b[4] {
			if b[4] == c[4] {
				win++
			} else {
				lose++
			}
		} else {
			lose++
		}
	}
	fmt.Printf("you won for : %d you lose for : %d", win, lose)
}
func main() {
	for {
		scan()
	}
}
