console.log("Loops tutorial")

let a = 1

for (let index = 0; index < 100; index++) {
    console.log(a + index)
}

let obj = {
    Name: "Kunal",
    role: "Programmer",
    company: "KK Ai"
}

for (const key in obj) {
    const element = obj[key];
    console.log(element)

}