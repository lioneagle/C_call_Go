package main

import "C"

import (
	"fmt"
)

func main() {
}

//export Hello
func Hello() string {
	return "Hello"
}

//export Test
func Test() {
	fmt.Println("export Test")
}
