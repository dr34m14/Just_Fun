document.addEventListener("DOMContentLoaded", () => {
    const dino = document.querySelector(".dino");
    const grid = document.querySelector(".grid")
    const alert = document.getElementById("alert")
    let isJumping = false;
    let gameover = false
    let gravity = 0.9
    function controle(e) {
        if (e.keyCode === 32) {
            if (!isJumping) {
                isJumping = true
                jump();
            }

        }
    }
    document.addEventListener("keyup", controle)
    let position = 0
    function jump() {
        let count = 0;
        let timeId = setInterval(() => {
            //move down
            if (count === 15) {
                clearInterval(timeId)
                console.log("down")
                let downTimeid = setInterval(() => {
                    if (count == 0) {
                        clearInterval(downTimeid)
                        isJumping = false
                    }
                    position -= 7
                    count--
                    position = position * gravity
                    dino.style.bottom = position + "px"
                })


            }
            //move uo
            console.log("up")
            position += 20
            count++
            position = position * gravity
            dino.style.bottom = position + "px"
            console.log(dino.style.bottom)
        }, 20)

    }
    //opsical
    function generateObstactor() {
        let randomtime = Math.random() * 4000
        let obstacleposition = 800
        const obstacte = document.createElement("div")
        if (!gameover) {
            obstacte.classList.add("obstacle")
        }
        grid.appendChild(obstacte)
        obstacte.style.left = obstacleposition + "px"
        let timerId = setInterval(() => {
            if (obstacleposition > 0 && obstacleposition < 60 && position < 60) {
                clearInterval(timerId)
                alert.innerHTML = 'Game over'
                gameover = true
                //removw child
                while(grid.firstChild){
                    grid.removeChild(grid.lastChild)
                }
            }
            obstacleposition -= 10
            obstacte.style.left = obstacleposition + "px"
        }, 20)
        if (!gameover) {
            setTimeout(generateObstactor, randomtime)

        }


    }
    generateObstactor()






})