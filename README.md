# omp-debug-include

**omp-debug-include** é uma include para SA:MP (San Andreas Multiplayer) projetada para facilitar o monitoramento e o debug in-game. A ideia principal é oferecer uma ferramenta poderosa e intuitiva para desenvolvedores de servidores, permitindo uma análise detalhada dos componentes em execução, sem a necessidade de interagir diretamente com o AMX.

## Objetivo

O objetivo do **omp-debug-include** é monitorar em tempo real vários aspectos críticos do jogo, como:

- **IDs de Textdraw**: Acompanhe a criação, destruição e modificação de textdraws no servidor.
- **Veículos**: Monitoramento dos IDs, posições e status dos veículos.
- **Velocidade de Processamento**: Avalie a performance do servidor, detectando gargalos em tempo real.
- **Performance do Cliente**: Analise a performance dos clientes conectados, identificando potenciais problemas antes que se tornem críticos.

## Funcionalidades

- **Amostragem via Textdraw**: Exibição de informações de debug diretamente no jogo, utilizando textdraws para apresentar dados ao desenvolvedor.
- **Execução Dinâmica**: Captura e exibição de informações em tempo real, conforme as ações do jogador ocorrem.
- **Independência de Plugins**: Ao contrário de plugins como CrashDetect e Profiler, **omp-debug-include** opera sem necessidade de interação direta com o AMX.

## Vantagens

- **Flexibilidade**: Fácil integração e uso em diferentes tipos de servidores SA:MP.
- **Código Aberto**: Este projeto é de código aberto, permitindo que a comunidade contribua, melhore e adapte a ferramenta às suas necessidades.
- **Monitoramento Profundo**: Permite a detecção de problemas complexos sem interferir na experiência dos jogadores.

## Instalação

1. Clone o repositório para o seu servidor:
   ```bash
   git clone https://github.com/VictorMacielGhost/omp-debug-include.git
   ```

2. Inclua o arquivo omp-debug-include.inc no seu script principal:
```pawn
#include <omp-debug-include>
```

3. Configure as opções de debug conforme necessário no seu código.

# Contribuições
Este projeto é mantido pela comunidade, e todos estão convidados a contribuir. Se você deseja adicionar uma nova funcionalidade ou melhorar o código existente, fique à vontade para abrir um pull request.

# Licença
Este projeto está licenciado sob a Licença MIT, permitindo uso, modificação e distribuição do código.
