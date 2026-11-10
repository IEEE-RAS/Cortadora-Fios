# 🤖 Cortadora de Fios - Diário de Desenvolvimento

**Equipe:** IEEE RAS - UEFS

## 📝 Visão Geral

Este repositório serve como o diário de desenvolvimento oficial do projeto **Cortadora de Fios**. Nosso objetivo é construir uma máquina automatizada controlada por Arduino para tracionar, direcionar e cortar fios com precisão, utilizando motores de passo e servo motores integrados a uma interface visual. Aqui, documentamos nosso progresso, desafios e aprendizados em todas as frentes: software, hardware, eletrônica e design mecânico.

## 👥 Equipe

| Nome                 | Cargo no projeto            | GitHub                                     |
| -------------------- | ------------------------- | ------------------------------------------ |
| Ítallo Guimarães     |  Líder de Projeto  | [@italloguimaraes](https://github.com/italloguimaraes) |
| Silvio Neto   | Projetista       | [@SilvioFneto](https://github.com/SilvioFneto)   |
| Messi Oliveira   | Projetista       | [@username](https://github.com/username)   |

*(Atualizar os links e adicionar o restante da equipe)*

## 🎯 Metas do Projeto

### Metas atuais

  * **Hardware:** Finalizar a integração física do segundo motor de passos (28BYJ-48) ao mecanismo de corte do alicate.
  * **Software:** Atualizar a lógica de controle para sincronizar a alimentação, o direcionamento (Servo) e o corte real.

### Objetivos Gerais

  - **Hardware:**
      - [x] Validar a viabilidade dos componentes (Motores, LCD, Arduino).
      - [x] Montar o circuito base em protoboard com isolamento de alimentação (GND comum).
      - [ ] Projetar e montar o chassi mecânico e o mecanismo acoplado ao alicate.
  - **Software:**
      - [x] Desenvolver o fluxo de mensagens de status no LCD 16x2.
      - [x] Implementar o controle PWM do Servo Motor (SG90) para direcionamento do fio.
      - [ ] Implementar a biblioteca `Stepper.h` para controle preciso dos motores de passo (ULN2003).

## 🛠️ Tecnologias e Ferramentas

| Categoria         | Ferramentas                                       |
| ----------------- | ------------------------------------------------- |
| **Linguagens**    | C/C++ (Arduino)                                   |
| **Hardware**      | Wavgat UNO (LGT8F328P), Display LCD 16x2          |
| **Atuadores**     | Motores de Passo 28BYJ-48 (Drivers ULN2003), Servo SG90 |
| **Simulação**     | TinkerCad                                         |
| **Controle de Versão** | Git, GitHub                                  |

-----

## 📓 Diário de Desenvolvimento

Aqui registramos nosso progresso semanalmente. Cada entrada inclui as metas traçadas, atualizações de hardware e software, e a evolução da montagem.

### Semana de 31/08

**Foco da Semana:** Planejamento Inicial
  * **Atividades Concluídas:** 
      * Pesquisa e busca de alternativas arquiteturais para o projeto.
      * Levantamento e criação da lista de materiais viáveis disponíveis no laboratório.
      * Elaboração do protótipo de plano de trabalho para guiar as próximas semanas.

### Semana de 14/09

**Foco da Semana:** Validação de Hardware
  * **Atividades Concluídas:**
      * Realização de testes práticos de bancada com os componentes principais.
      * Os motores de passo e o servo motor foram testados individualmente para garantir o funcionamento antes da montagem do circuito completo.

### Semana de 21/09

**Foco da Semana:** Início da Simulação Virtual
  * **Atividades Concluídas:**
      * Início do mapeamento eletrônico utilizando o software TinkerCad.
      * Montagem virtual do circuito base do Arduino integrado ao display LCD 16x2 para validação dos pinos.

### Semana de 28/09

**Foco da Semana:** Expansão da Simulação
  * **Atividades Concluídas:**
      * Continuação da modelagem do circuito no TinkerCad.
      * Adição dos dois motores de passo e seus respectivos drivers ao esquemático virtual, consolidando a lógica de controle elétrico.

### Semana de 05/10

**Foco da Semana:** Transição para o Hardware Físico
  * **Atividades Concluídas:**
      * Migração do projeto do TinkerCad para a protoboard na bancada.
      * Resolução de problemas de comunicação da placa Wavgat (CH340) e ajustes de contraste do visor.
      * Sucesso na execução do código base com exibição em tempo real das mensagens de status e etapas de corte no LCD físico.

### Semana de 19/10

**Foco da Semana:** Integração Mecânica Primária
  * **Atividades Concluídas:**
      * Integração elétrica e via software do Servo Motor (SG90) ao circuito físico.
      * O servo foi configurado e testado com sucesso para realizar a função de alterar a direção do fio (guiando-o para a lâmina do alicate) em sincronia com as mensagens do LCD.

*(Nota: A meta de implementação completa dos motores de passo para deslocamento e corte está atualmente em desenvolvimento e será documentada na próxima atualização validada).*

## 🚀 Como Contribuir

Somos um projeto de código e hardware abertos! Se você deseja contribuir:

1. **Faça um Fork** deste repositório.
2. **Crie uma Branch** para sua feature (`git checkout -b feature/SuaFeature`).
3. **Faça o Commit** de suas mudanças (`git commit -m 'Adiciona SuaFeature'`).
4. **Faça o Push** para a Branch (`git push origin feature/SuaFeature`).
5. Abra um **Pull Request**.

Para problemas ou sugestões, por favor, fale com a equipe do RAS ou abra uma **Issue**.

## 📄 Licença

Este projeto está licenciado sob a Licença GNU V2.0.
