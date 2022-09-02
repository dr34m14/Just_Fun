
// function greed(){
//     console.log("hello");
// }
// setTimeout(greed,5000);




function displaytime(){
    let time = new Date();
    let newtime=time.getTime();
    console.log(time);
    document.getElementById('time').innerHTML=time

}
setInterval(displaytime,1000);