// alert("this is bad")
// let name = prompt("sent your name?","name...")
// console.log(name)
// let opp= confirm("Do you want to give up now?");
// if(opp==1){
//     console.log("very bad")

// }else{
//     console.log("very well")
// }

// let age = prompt("What is your age?"," ");
// let needwait=18-age
// if (age>=18){
//     console.log("your can inter this site..")
// }
// else{
//     console.log("wait for "+needwait +" years")
// }
let fs = require('fs');

function clickf() {
    let age = document.getElementById("text2").value;
    let name = document.getElementById("text1").value;
    fs.writeFileSync("mynewfile1.txt",name)

}

