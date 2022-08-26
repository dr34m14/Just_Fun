const http = require("http");
const fs = require("fs");

const app = {};


app.config = {
    port: 8080
}

app.createServer = () => {
    const server = http.createServer((req, res) => {
        res.writeHead(200,{"content-type":"text/html"});
        const data = fs.readFileSync('./main.html');
        res.end(data);
    })
    server.listen(app.config.port, () => {
        console.log(`lising at ${app.config.port}...`);
    })
}
app.createServer()