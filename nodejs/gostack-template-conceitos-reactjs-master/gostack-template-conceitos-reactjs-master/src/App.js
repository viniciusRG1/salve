import React, {useEffect,useState} from "react";
import api from'./services/api';
import "./styles.css";

function App() {
  const [repositories, setRepositories] = useState([]);
  
  useEffect(() => {
    api.get('repositories').then(response => {

    });
  },[]);
  async function handleAddRepository() {
    const response = await api.post('repositories', {
      title: 'cazé',
      url: 'https://github.com/viniciusRG1',
      techs: ['Node.js', 'ReactJS']
    })
    setRepositories([...repositories, response.data]);
  }

  async function handleRemoveRepository(id) {
    await api.delete(`repositories/${id}`);
    const newRepositories = repositories.filter(
      repository => repository.id != id
    )
  }

  return (
    <div>
      <ul data-testid="repository-list">
        {repositories.map(repository => (
          <li key={repository.id}>
          {repository.title}

          <button onClick={() => handleRemoveRepository(1)}>
            Remover
          </button>
          </li>
      ))}
      </ul>

      <button onClick={handleAddRepository}>Adicionar</button>
    </div>
  );
}

export default App;
