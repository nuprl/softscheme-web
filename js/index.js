const express = require('express');
const bodyParser = require('body-parser');
const { exec } = require('child_process');
const fs = require('fs');
const util = require('util');
const app = express();

const bindAddress = '0.0.0.0';
const bindPort = 8080;

app.use(express.static('./html'));

app.use(bodyParser.text());

app.post('/typeCheck', (req, res) => {
    fs.writeFileSync('./larceny/from-web.ss', req.body);
        console.log("about to spawn");
    let p = exec('(cd larceny && ./larceny -r5 softscheme-for-web.ss)', {
        options: {
            stdio: [ 'none', 'pipe', 'inherit' ],
            cwd: 'larceny'
        }
    });
    
    let responseText = '';
    p.stdout.on('data', (d) => {
        responseText += String(d);
    });
    p.stdout.on('close', () => {
        res.send(responseText);
    });
});
  

app.listen(bindPort, bindAddress, () => {
    console.log(`Serving Soft Scheme on http://${bindAddress}:${bindPort}`)
})