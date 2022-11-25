let belly = document.getElementById("belly");
// let chasma = document.getElementById("chasma");
let myaudio = document.getElementById("my_audio");
let start = 420;
let end = 600;
let now_y = start;





function change_belly(n) {
    belly.setAttribute('d', `M 550,350 C 650,280 800,${n} 980,395`)
}
function dance() {

    setTimeout(() => {
        console.log('9000 s end')




        setInterval(() => {
            console.log(now_y)
            change_belly(now_y)

            if (now_y == start) {
                let endClose = setInterval(() => {

                    now_y = now_y + 30;
                    if (now_y >= end) {
                        now_y = end;
                        // chasma.setAttribute("fill", "rgb(66, 64, 64)")

                        clearInterval(endClose)
                    }
                }, 20);
            }
            if (now_y == end) {
                let startClose = setInterval(() => {


                    now_y = now_y - 30;
                    if (now_y <= start) {
                        now_y = start;
                        // chasma.setAttribute("fill", "white")

                        clearInterval(startClose)
                    }
                }, 20);
            }
        }, 40);



    }, 9000);

}



window.onload = function () {
    dance()
    myaudio.play();
}