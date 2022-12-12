
const express = require('express');
const cors = require('cors');
const {uuid, isUuid} = require('uuidv4');

app.use(cors({
    origin: 'http://localhost:3000'
}));

app.use(express.json());

