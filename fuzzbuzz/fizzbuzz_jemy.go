/*
@author jemy
@platform linux,windows,mac os
@build
	$ go build fizzbuzz.go
	$./fizzbuzz
	3,5,7
	....
	....
	....
*/
package main

import (
	"fmt"
)

func main() {
	var a, b, c int
	fmt.Scanf("%d,%d,%d", &a, &b, &c)
	var ab = a * b
	var ac = a * c
	var bc = b * c
	var abc = a * b * c

	var msg = map[int]string{
		a:   "Fizz",
		b:   "Buzz",
		c:   "Whizz",
		ab:  "FizzBuzz",
		ac:  "FizzWhizz",
		bc:  "BuzzWhizz",
		abc: "FizzBuzzWhizz",
	}

	for i := 1; i <= 100; i++ {
		m := i - 10*a
		n := (i - a) / 10
		ix := n*10 + a

		if (m >= 0 && m <= 9) || ((i == ix) && (n >= 0 && n <= 9)) {
			fmt.Println(msg[a])
		} else {
			if i%abc == 0 {
				fmt.Println(msg[abc])
			} else if i%ab == 0 {
				fmt.Println(msg[ab])
			} else if i%ac == 0 {
				fmt.Println(msg[ac])
			} else if i%bc == 0 {
				fmt.Println(msg[bc])
			} else if i%a == 0 {
				fmt.Println(msg[a])
			} else if i%b == 0 {
				fmt.Println(msg[b])
			} else if i%c == 0 {
				fmt.Println(msg[c])
			} else {
				fmt.Println(i)
			}
		}
	}
}
