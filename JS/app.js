h1 = document.querySelector("h1")

function changeColor(color) {
    return new Promise((reslove, rejected) => {

        setTimeout(() => {
            let num = Math.floor(Math.random() * 10) + 1;
            if (num > 3) {
                rejected("promise is rejected");
            }
            h1.style.color = color;
            console.log(`color to changed ${color}`);
            reslove("color updated")
        }, 1000)
    })
}


async function demo() {

    try {
        await changeColor("red",)
        await changeColor("yellow")
        await changeColor("green")
    }
    catch (hlo) {
        console.log(hlo)
        console.log("error cougth")
    }




    let a = 5;
    console.log(a);
    console.log("new number:", a + 3);


}
// changeColor("red", 1000)
//     .then(() => {
//         console.log("your color is red");
//         return changeColor("yellow", 1000)
//     })
//     .then(() => {
//         console.log("your color was yellow")
//         return changeColor("green", 1000);
//     })
//     .then(() => {
//         console.log("your color was green");
//     })



// async function greet() {
//     throw "sdvgbkj";
//     return "Hlo sharvan";
// }

// greet()
//     .then((result) => {
//         console.log("sucessful :", result);
//     })
//     .catch((error) => {
//         console.log("rejected :", error);
//     })

// let hello = async () => {
//     return 5;
// }



// function getNum() {
//     return new Promise((reslove, rejected) => {
//         setTimeout(() => {
//             let num = Math.floor(Math.random() * 10) + 1;
//             console.log(num);
//             reslove();
//         }, 1000);
//     });

// };

// async function demo() {
//     await getNum();
//     await getNum();
//     getNum();
// }