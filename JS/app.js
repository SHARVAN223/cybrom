// question of axios 1
// let url = "https://catfact.ninja/fact ";
// let btn = document.querySelector("button");

// btn.addEventListener("click", async () => {
//     let fact = await getFacts();

//     let p = document.querySelector("#result");
//     p.innerText = fact;
// });

// async function getFacts() {
//     try {
//         let res = await axios.get(url);
//         return res.data.fact;
//     }
//     catch (err) {
//         console.log("err", err);
//         return "no fact found";
//     }

// }


//axios 2

// let url = "https://dog.ceo/api/breeds/image/random";

// let btn = document.querySelector("button")
// btn.addEventListener("click", async () => {
//     let link = await getImage();
//     console.log(link);
//     let img = document.querySelector("#result");
//     img.setAttribute("src", link);

// });

// async function getImage() {
//     try {
//         let res = await axios.get(url);
//         return res.data.message;
//     }
//     catch (err) {
//         console.log("error-", err);
//         return "no found image";
//     }
// }

//sending header
// let url = "https://icanhazdadjoke.com/";

// async function getJokes() {
//     try {
//         const config = { headers: { Accept: "application/json" } };
//         let res = await axios.get(url, config);
//         console.log(res.data);
//     }
//     catch (err) {
//         console.log(err)
//     }
// }

let url = "http://universities.hipolads.com/search?name=";

let btn = document.querySelector("button");

btn.addEventListener("click", async () => {
    let country = document.querySelector("input").value
    console.log(country);

    let colArr = await getCollage(country)
    console.log(colArr);
});
async function getCollage(country) {
    try {
        let res = await axios.get(url + country);
        return res.data;
    }
    catch (err) {
        console.log("error-", err);
        return [];
    }
}