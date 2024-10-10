function good(name) {
    console.log("Hey " + name + " you are nice!")
    console.log("Hey " + name + " you are good!!")
    console.log("Hey " + name + " your tshirt is nice😁")
    console.log("Hey " + name + " you are tall😨")
    console.log("\t")
}
good("kunal")
good(10)
function sum(a, b, c = 5) {
    return a + b + c
}

console.log(sum(3, 5))
