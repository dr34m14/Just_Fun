document.querySelector("body").addEventListener("mousemove",eyeround());
function eyeround(){
    let eye=document.querySelector(".eye")
    
        let x=(eye.getBoundingClientrect().left)+(eye.clientWidth/2)
        let y=(eye.getBoundingClientrect().top)+(eye.clientHight/2)
        let radian=Math.atan2(event.pageX-x,event.pageY-y)
        let rot=(radian*(180/Math.PI)*-1)
        eye.style.transform=`rotate(${rot}deg)`

    
    
}