document.addEventListener('DOMContentLoaded', () => {
    const squares = document.querySelectorAll('.main div')
    const resultDisplay = document.querySelector("#result")
    let width = 15
    let currentshotterIndex = 202
    let currentinvaderIndex = 0
    let alinInvadersTakesDown = []
    let result = 0
    let direction = 1
    let invaderIndex;
    const alinInvaders = [
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39
    ]
    alinInvaders.forEach((invaders) => {
        squares[currentinvaderIndex + invaders].classList.add('invader')
    })
    squares[currentinvaderIndex].classList.add('shooter')

    function moveShoooter(e) {
        squares[currentinvaderIndex].classList.remove('shooter')
        switch (e.keyCode) {
            case 37:
                if (currentshotterIndex % width !== 0) {
                    currentshotterIndex -= 1
                }
                break
            case 39:
                if (currentshotterIndex % width < width - 1) {
                    currentshotterIndex += 1
                }
                break
        }
    }
})