
let limit = 0;
async function follow_unfollow() {
    setTimeout(() => {
        console.log("follow clickted")

        document.getElementsByClassName("_acan _acap _acas")[0].click()
    }, 2000)
    setTimeout(() => {
        console.log("unfollow clickted")

        document.getElementsByClassName("_acan _acap _acat")[1].click()
    }, 4000)
    setTimeout(() => {
        console.log("unfollow ")

        document.getElementsByClassName("_a9-- _a9-_")[0].click()
    }, 6000)
    setTimeout(() => {
        console.log("time x " + limit)
    }, 7000)



}
let ws = setInterval(() => {
    limit++;
    follow_unfollow()
    if (limit == 10) {
        clearInterval(ws)
    }
}, 8000);




