package main

import (
	"fmt"
	"io"
)

func main() {
	var a, b int
	for {
		_, err := fmt.Scanf("%d %d", &a, &b)
		if err != io.EOF {
			fmt.Println(a + b)
		}
	}
}
