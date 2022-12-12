import React, { useInsertionEffect, useState } from 'react';

import Header from './componentes/header';
import api from './services/api';

function app(){

    const [projetos, setProjetos] = useState([]);

    useEffect(() => {
        api.get('projetos').then(Response => {
            setProjetos(response.data);
        });
    }, []);


    function handleAddProject(){
        
        api.post('projetos', {
            title: `novo projeto ${Date.now()}`,
            owner: "Vinicius Resende Garcia",

        })

        const projeto = response.data;
        setProjetos([...projetos, projetos]);
    }

function handleAddProject(){
    projetos.push(`novo projeto ${Date.now()}`);

    console.log(projetos);
}


    return (
        <>
            <header title="homepage" />  
            <header title="projetos">
                <ul>
                    {projetos.map(projetos => <li key={projetos} > {projetos.title}</li>)}
                </ul>
            </header>
            <header title="desenvolvimento" />
            <ul>
                {projetos.map(projetos =>
                    <li key={projetos}>
                        {projetos}
                    </li>
                    )}
            </ul>
            <button type="button" onClick={handleAddProject}>adicionar projeto</button>

        </>
       


    );

}

export default app;