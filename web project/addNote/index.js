const http = require("http");
const fs = require("fs");
const path =require("path")
const app = {};


app.config = {
    port: 8080
}

app.createServer = () => {
    const server = http.createServer((req, res) => {
        console.log(req.url);

        if(req.url==='/'){
            fs.readFile("./expr1.html","utf-8",(data)=>{
                res.writeHead(200,{"Content-Type":"text/html"});
                res.end(data);
            });
            
        }else{
            console.log("404");
        }


      
    })
    server.listen(app.config.port, () => {
        console.log(`lising at ${app.config.port}...`);
    })
}
app.createServer()