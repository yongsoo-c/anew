var http = require('http');
 
var server = http.createServer();
server.on('request', doRequest);
server.listen(8000);
console.log('Server running!');
 
// 요청 처리
function doRequest(req, res) {
    res.writeHead(200, {'Content-Type': 'text/plain'});
    res.write('Hello World\n');
    res.end();
}
