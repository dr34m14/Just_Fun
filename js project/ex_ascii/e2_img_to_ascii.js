var asciify = require('asciify-image');
var fs=require('fs');
const { Stream } = require('stream');

var options = {
  fit:    'box',
  width:  20,
  height: 20
}

asciify('./src/h1.jpg', options, function (err, asciified) {
  if (err) console.log(err) ;

  // Print to console
  console.log(asciified);
  fs.writeFileSync('p.txt',asciified,Stream)
});