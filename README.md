# Monitor de Temperatura em C - Desafio de Monitoramento

## 1. Identificação
* **Nome do Aluno:** Davi Leal Cândido
* **Disciplina:** Algoritmo e pensamento computacional 
* **Professora:** Profa. Karla Sartin
* **Título do Projeto:** Analista de temperatura

---

## 2. Objetivo
O objetivo deste projeto é desenvolver um software em C capaz de monitorar temperaturas lidas de um sensor simulado via terminal. O sistema deve validar a entrada do usuário (impedindo a digitação de letras ou caracteres inválidos) e interromper o monitoramento automaticamente caso detecte temperaturas críticas (≥ 80°C) em 3 leituras válidas.

---

## 3. Funcionamento do Programa
* **Definição do Limite:** O limite crítico de segurança do sistema é fixado em **80.0 °C**.
* **Realização das Leituras:** As entradas são capturadas através da função `scanf` e  são armazenadas em uma variavel.
* **Tratamento de Valores Inválidos:** A leitura do `scanf` é validada. Caso o usuário digite texto, letras ou caracteres especiais, o programa detecta o erro, limpa o *buffer* de entrada  com `getchar()` e solicita a digitação novamente sem registrar lixo na memória.
* **Identificação de Alertas:** Cada valor válido é comparado com o limite de 80.0 °C. Se for maior ou igual, o contador de alertas é incrementado.
* **Condição de Encerramento:** O monitoramento é finalizado assim que o contador de alertas atinge **3 vezes** ou se o número máximo de registros no vetor for alcançado. Ao término, o histórico completo de temperaturas registradas é exibido na tela.

---

## 4. Estruturas de Repetição Utilizadas
No projeto foi utilizada a estrutura **`do...while`** combinada com um laço **`while`** auxiliar para limpeza de *buffer*:

* **`do...while`:** Utilizado no laço principal de captura de dados. A escolha se justifica pelo fato de que o sistema precisa obrigatoriamente executar a leitura do teclado pelo menos **uma vez** antes de verificar se a condição de parada (alerta atingido 3 vezes) foi preenchida.
* **`while` (`while (getchar() != '\n');`):** Utilizado de forma pontual após falhas de leitura no `scanf` para consumir e descartar todos os caracteres inválidos do *buffer* até encontrar a quebra de linha (`\n`), prevenindo *loops* infinitos.

---

