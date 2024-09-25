<h1>Sistema para falta de energia via SMS</h1>

<h2>Grupo:</h2>
<ul>
  <li>Marcos Gomes</li>
  <li>Maria Clara</li>
  <li>Pedro Eloi</li>
  <li>Willy Vilela</li>
</ul>

<strong>link para o tinkercad</strong>

<a>https://www.tinkercad.com/things/1Xs67rpPLQH-ingenious-jaagub/editel?sharecode=VBX0V-rQzYkWS3AzWTr-amXQvvzGAXG_yiqSvZKEBac</a>

# Projeto: Monitor de Energia com Arduino

## Objetivo
Desenvolver um sistema de monitoramento de energia utilizando um Arduino, um display LCD e um potenciômetro para ajustar a tensão lida e caso de falta avisar via SMS

## Requisitos
### Requisitos de Hardware
- **Arduino Uno**: Controlador microcontrolador que gerencia as leituras e o display.
- **Display LCD 16x2**: Utilizado para exibir informações sobre o status da energia.
- **Potenciômetro (10kΩ)**: Permite ajustar a tensão lida e fornecer um sinal analógico ao Arduino.
- **Bateria de 9V**: Fonte de energia para o circuito.
- **Fios de conexão**: Para realizar as ligações entre os componentes.

### Requisitos de Software
- **IDE do Arduino**: Ambiente de desenvolvimento necessário para escrever e carregar o código no Arduino.
- **Biblioteca LiquidCrystal**: Biblioteca padrão do Arduino para controlar displays LCD.

### Requisitos Funcionais
- O sistema deve ser capaz de ler a tensão a partir do potenciômetro.
- O display LCD deve mostrar mensagens indicativas do status da energia (OK ou Falta).
- As leituras de tensão devem ser exibidas no monitor serial para fins de depuração.
- No futuro implementar um sistema que irá enviar via SMS, avisando a falta de corrente eletrica

### Esquema de Conexão
Para um melhor entendimento das conexões, consulte os arquivos a seguir:
Verificar a imagem png na raiz do projeto e o arquivo .brd

## Conclusão
Esse projeto fornece uma maneira eficaz de monitorar a energia utilizando um Arduino, permitindo ajustes dinâmicos com um potenciômetro e visualização dos dados em um display LCD.

