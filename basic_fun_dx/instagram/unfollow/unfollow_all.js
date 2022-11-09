let start_index = 0;
let max=20;

let ref = setInterval(follow, 6000);


function unfollow() {
    document.getElementsByClassName("_acan _acap _acat")[1].click();
    document.getElementsByClassName("_a9-- _a9-_")[0].click();
    start_index++;
    if(start_index==max){
        clearInterval(ref);
        console.log("finished")
    }
}
function follow()
{
    document.getElementsByClassName("_acan _acap _acas")[0].click();
    start_index++;
    if(start_index==max){
        clearInterval(ref);
        console.log("finished")

    }
}