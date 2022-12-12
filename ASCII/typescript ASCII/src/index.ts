import express from 'express';

const app = express();

app.get('/', (Request, Response) =>{
    return Response.json({
        message: 'hello world'
    })
})