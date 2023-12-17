const express = require('express');
const app = express();
const port = 3000;

app.get('/', (req, res) => {
  res.send('Hello from Express');
});

app.get('/api/data', (req, res) => {
    res.json({ message: 'Hello from the Express server!' });
  });

app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
