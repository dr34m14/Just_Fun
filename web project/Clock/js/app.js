setInterval(() => {
    var date= new Date()
    var hour=date.getHours();
    var min=date.getMinutes();
    var sec=date.getSeconds();
    var hourrotation =30*hour + min/2;
    var minrotation=6*min;
    var secrotation=6*sec;
    let hourhand=document.getElementById("hour")
    let minhand=document.getElementById("min")
    let sechand=document.getElementById("sec")
    hourhand.style.transform=`rotate(${hourrotation}deg)`
    minhand.style.transform=`rotate(${minrotation}deg)`
    sechand.style.transform=`rotate(${secrotation}deg)`

},1000)