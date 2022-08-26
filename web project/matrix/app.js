const http = require('http')
const fs = require('fs')
const fileC = fs.readFileSync(`${__dirname}/index.html`)
const server = http.createServer((req, res) => {
    res.writeHead(200, { 'Content-type': 'text/html' })
    res.end(fileC)
})
server.listen(80, '127.0.0.1')