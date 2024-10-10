/* Create a business name generator by combining list of adjectives and shop name and another word

Adjectives:
Crazy
Amazing
Fire

Shop Name:
Engine
Foods
Garments

Another Word:
Bros
Limited
Hub
*/

let rand = Math.random()
if (rand < 0.33) { //0-1 3 parts, 0-0.33, 0.33-0.66,0.66-1
    first = "Crazy"
}
else if (rand < 0.66 && rand >= 0.33) {
    first = "Amazing"
}
else {
    first = "Fire"
}

if (rand < 0.33) { //0-1 3 parts, 0-0.33, 0.33-0.66,0.66-1
    second = "Engine"
}
else if (rand < 0.66 && rand >= 0.33) {
    second = "Foods"
}
else {
    second = "Garments"
}

if (rand < 0.33) { //0-1 3 parts, 0-0.33, 0.33-0.66,0.66-1
    third = "Bros"
}
else if (rand < 0.66 && rand >= 0.33) {
    third = "Limited"
}
else {
    third = "Hub"
}

console.log(`${first} ${second} ${third}`)