# tema:
	slide 1
## Introdução do conteudo:Slide 2
	
	então gente, metodos ageis ne?
	 vou falar um pouco pra vocês sobre o que vou aprensentar e o que se espera ser alcançado no final da aprentação:
	 	Como você sabem o capitulo aborda o desenvolvimento ágil de software, vou falar sobre a logica por tras do desenvolvimento ágil, apresentar o manifesto agil(um rolê bem karl Marx da programação) e a diferença entre desenvolvimento ágil e dirigido a planos;

	 	Também vamos conhecer um pouco sobre Extreme programming(xp) e como a pratica se relaciona aos principios do modelo ágil;

	 	Sobre scrun no desenvolvimento de projeto;gerenciamento

	 	E quais as melhores situações para escolher cada um deses metodos.
	 	Escalamento de métodos ágeis

## Indrodução geral do capitulo:

Rapid development and delivery is now often the most
important requirement for software systems.
		
		Quem pretende seguir pra essa área de desenvolvimento sabe a quantidade de mudanças que um empresa pode sofrer e quão rapido ela pode mudar suas tecnologias, então muitas dessas empresas operam dando mais importancia na velocidade do processo de desenvolvimento e entregas mais rapidas, ja que é praticamente impossivel produzir um conjunto de requisitos que seja estavel e não vá levar a mudanças;

		Não tem como, até mesmo pro proprio cliente, expressar quais requisitos ele vai querer, imaginem  prever como um sistema afetará as práticas de trabalho, como irá interagir com outros sistemas
		e quais operações do usuário devem ser automatizadas.

Rapid software development.
slide 3
		Processos de desenvolvimento de software que planejam especificar completamente os requisitos e, em seguida,
		projetar, construir e testar o sistema não estão adaptados ao desenvolvimento rápido de software.
		Então qual seria o cenario ideal, ou pelo menos o mais pratico possivel?
		INTERCALAR ENTRE ESPECIFICAÇÃO, DESIGN E IMPLEMENTAÇÃO;

		obs: se o software que vc tiver desenvolvendo, for um sistemas de segurança, em que uma análise completa do
		sistema é essencial, uma abordagem dirigida a planos pode ser a melhor opção, falarei melhor mais a frente...

		O sistema deve ser desenvolvido com uma serie de realeases que vai ser validadada pelas partes interessadas(stakeholders) e claro sempre devemos se especializar em usar IDEs, que são as melhores ferramentas de desenvolvimento(um programador hoje em dia sem uma IDE é como um arquiteto sem skatchUp);
		
Dissatisfaction with the overheads involved in software
design methods of the 1980s and 1990s led to the
creation of agile methods. These methods: 
slide 4

	nos 80/90, a IBM introduziu o desenvolvimento incremental e ainda foram apresentadas as linguagens de 4º geração "As linguagens de programação de quarta geração, ou 4GL em sua abreviatura de origem inglesa, são linguagens de programação de alto-nível com objetivos específicos, como o desenvolvimento de softwares comerciais de negócios. Elas permitem ao programador especificar o que deve ser feito visando um resultado imediato"

	então quais foram esses metodos?

	Concentre-se no código ao invés do design
	São baseados em uma abordagem iterativa para o desenvolvimento de software
	Destinam-se a entregar software funcional rapidamente e a evoluir isso
	rapidamente para atender aos requisitos em constante mudança.

	Mas o mais importante é a gente lembrar queeee o objetivo é diminuir documentação demais e ser mais facil de incrementar mudanças caso os requisitos mudem.

	

#Manifesto do desenvolvimento ágil: 
SLIDE 5
	
##	Estamos descobrindo melhores maneiras de desenvolver softwares, fazendo-o e ajudando outros a 			fazê-lo. Através desse trabalho, valorizamos mais:
		Indivíduos e interações do que processos e ferramentas
		Software em funcionamento do que documentação abrangente
		Colaboração do cliente do que negociação de contrato
		Respostas a mudanças do que seguir um plano
		Ou seja, embora itens à direita sejam importantes, valorizamos mais os que estão à esquerda

		Com isso surgiram alguns modelos Xp scrum, que eu vou falar jaja, mas tem outros tbm desevnvolvimento adaptativo eee digirido a caracteristicas... 

		Todos tem em comum alguns principios


#Modelos ágeis principios:
SLIDE 6
	
	1. ENVOLVIMENTO DO CLIENTE: Embora a ideia de envolvimento do cliente no processo de desenvolvimento seja atraente, seu sucesso depende
	de um cliente disposto e capaz de passar o tempo com a equipe de desenvolvimento, e que possa representar
	todos os stakeholders do sistema. Frequentemente, os representantes dos clientes estão sujeitos a diversas pressões e não podem participar plenamente do desenvolvimento de software.

	2. ENTREGA INCRMENTAL: Membros individuais da equipe podem não ter personalidade adequada para o intenso envolvimento que é
	típico dos métodos ágeis e, portanto, não interagem bem com outros membros da equipe.

	3.PESSOAS NÃO PROCESSOS: As habilidades da equipe de desenvolvimento devem ser reconhecidas e
	exploradas. Membros da equipe devem desenvolver suas próprias maneiras de
	trabalhar, sem processos prescritivos.

	4.ACEITAR MUDANÇAS: Manter a simplicidade exige um trabalho extra. Sob a pressão de cronogramas de entrega, os membros da equipe podem não ter tempo para fazer as simplificações desejáveis.

	5. MANTER TUDO MAIS SIMPLES: Muitas organizações, principalmente as grandes empresas, passaram anos mudando sua cultura para que os
	processos fossem definidos e seguidos. É difícil para eles mudar de um modelo de trabalho em que os processos são informais e definidos pelas equipes de desenvolvimento.

## QUANDO USAR METODOS AGEIS:
SLIDE 7
ONDE ESSES METODOS FUNCIONAM?

É DE SE ESPERAR QUE EM:
1. O desenvolvimento de produtos, em situações que a empresa existe um software de pequeno/medio porte;
2. um ambiente onde o cliente é bem engajado e não a tanta regulamentação externa;
argumente sobre...

E em sistemas de grande porte, pq não funcionam?

onde não ha equipes pequenas ou equeipes que não sejam fortementes vinculadas as tecnologias que seram usadas.

## QUANDO é mais arriscado  USAR METODOS AGEIS?
SLIDE 8
Quando for difícil manter o interesse dos clientes que
estão envolvidos no processo.
✧ Os membros da equipe podem ser inadequados para o intenso
envolvimento que caracteriza os métodos ágeis.
✧ Priorizar mudanças pode ser difícil onde há
múltiplas partes interessadas.
✧ Manter a simplicidade requer trabalho extra.
✧ Os contratos podem ser um problema, assim como outras abordagens para
desenvolvimento iterativo.


## Vale lembrar que os metodos ágeis pra contruir novos softwares são muito bons, mas(explicar)  tbm tem agumas deficiencias então talvez seja melhor usar uma abordagem misturadapara manunteção nem tanto, então o codigo deve dar suporte para futuras manunteções, dai a importancia de um codigo limpo e legivel. 
slide 9

 Mas pq não são tão eficases assim na manunteção? e isso tbm não quer dizer que não possam ser aplicados, mas pq?

 	Imaginem um software que dura ha varios anos, a empresa ja passou por varios trocas de funcionarios ou mudanças de tecnologias, mudanças em geral não seram uma oa experiencia caso a equipe original não tenha respeitado o principio da mudança, que podema contecer.

 	Muitos métodos ágeis coletam requisitos informalmente, de forma incremental, e não desenvolvem um documento coerente de requisitos.

 	então não podemos esquecer do documento
	de requisitos do sistema




## Então é aqui que eu vou falar sobre desenvolvimento dirigido a planos e desenvolvimento agil 
slide 10
Nesse modelo alem da faze de requisitos uma outra etapa mais pesada acontece que é o planejamento desss requisitos, mas pq isso? justamente em softwares que necessitam que algum paradgmas do modelo agil sejam quebradas, mas que necessariamente sejam softwares grandes ou criticos que necessitam que grandes documentações, muitas vezes é melhor da uma misturada mesmo e desesvolver aplicativos rapido e com clalidade e que ainda tenham uma documentaçao decente

quando usar uma abordagem dirigita a planos?
e quando usar agil
slide 10 ao 14
	
	Atualmente, a maioria dos projetos de software inclui práticas das abordagens dirigidas a planos e ágil. Para
	optar por um equilíbrio entre as abordagens, você precisa responder a uma série de questões técnicas, humanas
	e organizacionais:
	1. É importante ter uma especificação e um projeto muito detalhados antes de passar para a implementação? Se
	sim, você provavelmente necessita usar uma abordagem dirigida a planos.
	2. vc concegue ter um contato com o cliente que vai ter entrega incremental em que você entrega o software aos clientes e rapidamente
	obtém um feedback? Em caso afirmativo, considere o uso de métodos ágeis.
	3.quandes aplicações, uma abordagem dirigida a planos pode ter de ser usada.
	5. Qual é o tempo de vida esperado do sistema? Sistemas de vida-longa podem exigir mais da documentação de
	projeto, a fim de comunicar para a equipe de apoio as intenções originais dos desenvolvedores do sistema. No
	entanto, os defensores dos métodos ágeis argumentam, corretamente, que a documentação não é constantemente atualizada e não é de muita utilidade para a manutenção do sistema a longo prazo.
	6. Que tecnologias estão disponíveis para apoiar o desenvolvimento do sistema? Métodos ágeis frequentemente contam com boas ferramentas para manter o controle de um projeto em desenvolvimento. Se você está
	desenvolvendo um sistema utilizando um IDE (ambiente integrado de desenvolvimento, do inglês integrated
	development environment) que não tem boas ferramentas para visualização e análise do programa, pode haver
	necessidade de mais documentação do projeto.
	7. Como é organizada a equipe de desenvolvimento? Se está distribuída, ou se parte do desenvolvimento está
	sendo terceirizado, então pode ser necessário o desenvolvimento de documentos de projeto para a comunicação entre as equipes de desenvolvimento. Pode ser necessário planejar com antecedência quais serão esses
	documentos.
	8. Existem questões culturais que podem afetar o desenvolvimento do sistema? Organizações tradicionais de
	engenharia têm uma cultura de desenvolvimento baseado em planos, pois essa é a norma na engenharia.
	Geralmente, isso requer extensa documentação de projeto, no lugar do conhecimento informal, usado em
	processos ágeis.
	9. Quão bons são os projetistas e programadores na equipe de desenvolvimento? Às vezes, argumenta-se que
	os métodos ágeis exigem níveis mais altos de habilidade do que as abordagens dirigidas a planos, em que os
	programadores simplesmente traduzem um projeto detalhado em um código. Se você tem uma equipe com
	níveis de habilidade relativamente baixos, pode precisar usar as melhores pessoas para desenvolver o projeto,
	juntamente com outros, responsáveis pela programação.
	10. O sistema é sujeito à regulamentação externa? Se um sistema tem de ser aprovado por um regulador externo
	(por exemplo, a FAA [Autoridade Federal de Aviação, do inglês Federal Aviation Authority] aprova os softwares críticos para a operação de uma aeronave), então, provavelmente, será obrigatória a produção de uma documentação detalhada como parte da documentação de segurança do sistema.
	Na realidade, a questão sobre rotular o projeto como dirigido a planos ou ágil não é muito importante. Em
	última análise, a principal preocupação dos compradores de um sistema de software é se estão comprando um
	sistema de software executável que atenda às suas necessidades e faça coisas úteis para o usuário individual ou
	para a organização. Na prática, muitas empresas que afirmam ter usado métodos ágeis adotaram algumas práticas
	ágeis e integraram-nas em seus processos dirigidos a planos.

	Na realidade, a questão sobre rotular o projeto como dirigido a planos ou ágil não é muito importante. Em
	última análise, a principal preocupação dos compradores de um sistema de software é se estão comprando um
	sistema de software executável que atenda às suas necessidades e faça coisas úteis para o usuário individual ou
	para a organização. Na prática, muitas empresas que afirmam ter usado métodos ágeis adotaram algumas práticas
	ágeis e integraram-nas em seus processos dirigidos a planos


# Extreme programming 
slide 15

	Os desevolvedores junto com o cliente, que nesse modelo deve estar bastante envolvido, ou um representante, criam cartões de história. O que são os cartões de história? 
		são prerequisitos do sistema que são declarados como realise semanal ou um tempo preEstabelecido entre as partes, pequenas atualizações ou incrementos que vão ser produzidos com agilidade em curto tempo. Esses requisitos ja vão ser apresentados numa forma um pouco mais detalhada.Nesse modelo varias versões podem ser desenvolvidas no mesmo dia, antes de implementar os teste devem ser feitos e o programa só é feito quando as funcionalidades passam nesses testes.
slide 16,17
		logo após os desenvolvedore se dividem em pares para o processo de implementação ser mais organizado e as equipes darem o maximo de suporte um ao outro e para evitar muito tempo de trabalho.

		 os envolvidos devem sempre refatorar os codigos para sempre pensando em mudanças futuras onde o codigo possa se adptar a essas diferenças que pode acontecer
slide 18 e 19

planejamento incrmenteal: Os requisitos são gravados em cartões de historia que serão incluidas no realese e determinadas por suas prioridades de tempo e a equipe divide esses cartões em tarefas;

pequenos realises: um grupo de funcionalidades são desenvolvidas de acordo com as prioridades do negocio, depois com realeses futuros elas podem ser melhoradas;

projeto simples: Cada projeto é realizado para atender ás necessidades atuais e nada mais;

desenvolvimento test-first: usando um framework de teste automatizado para desevolver todos os test da versão antes mesmo da implementação;

refatoração: todos os desenvolvedores devem melhorar o codigo sempre que possivel, para mante-lo limpo e manutenivel;

programação em pares: os desenvolvedores se dividem em pares verificando o trabalho e prestando apoio;

propriedade coletiva: todos trabalham em todas as areas do sistema, assim todos ficam engajados no projeto e podem fazer alterações em qualquer funcionalidade;

integração continua: sempre que uma tarefa é concluida ele é integrada ao sistema geral, mas ela só é incluida se passar em todos os testes;

ritmo sustentavel: é melhor programar só o necessario para reduzir a quantidade de codigo e aumentar a produtividade a medio prazo;

Cliente no local: o cliente deve estar inteiramente envolvido no processo de desenvolvimento ele deve fazer parte da equipe e estar sempre disponivel;

slide 20

o cliente ou representante deve estar sempre prensente, é ele quem vai ditar as prioridades do sistema e da o feedebeck necesario para futuras mudanças, podendo até descartar historia se caso as mudanças sejam relativadas.

slide 21:


Kate é uma médica que deseja prescrever medicamentos para um paciente de uma clínica. O prontuário do paciente já está sendo exibido em seu
computador, assim, ela clica o campo ‘medicação’ e pode selecionar ‘medicação atual’, ‘nova medicação’, ou ‘formulário’.
Se ela selecionar ‘medicação atual’, o sistema pede que ela verifique a dose. Se ela quiser mudar a dose, ela altera esta e em seguida, confirma a
prescrição.
Se ela escolher ‘nova medicação’, o sistema assume que ela sabe qual medicação receitar.
Ela digita as primeiras letras do nome do medicamento. O sistema exibe uma lista de possíveis fármacos que começam com essas letras. Ela escolhe
a medicação requerida e o sistema responde, pedindo-lhe para verificar se o medicamento selecionado está correto.
Ela insere a dose e, em seguida, confirma a prescrição.
Se ela escolhe ‘formulário’, o sistema exibe uma caixa de busca para o formulário aprovado.
Ela pode, então, procurar pelo medicamento requerido. Ela seleciona um medicamento e é solicitado que verifique se a medicação está correta. Ela
insere a dose e, em seguida, confirma a prescrição.
O sistema sempre verifica se a dose está dentro da faixa permitida. Caso não esteja, Kate é convidada a alterar a dose.
Após Kate confirmar a prescrição, esta será exibida para verificação. Ela pode escolher ‘OK’ ou ‘Alterar’. Se clicar em ‘OK’, a prescrição fica gravada nos
bancos de dados da auditoria.
Se ela clicar em ‘Alterar’, reinicia o processo de ‘Prescrição de Medicamentos’.

slide 22 cartão de task;

slide 23
outro ponto que vale a pena ressaltar é que os codigos em metodologias ageias deve ser projetado para mudanças então ele sempre deve ser limpo e a pratica da refatoração é bem importante, vc n precisa antecipar mudanças, melhor manter o foco no atual e as mudanças viram a partir dai.

slide 24 

na refatoração os desenvovedores devem sempre estar atentos a melhorias, pois a qualqer realise o projeto pode precisar de melhorias na sua engenharia completa, o que pode levar a muita perda de tempo e obviamente dinheiro.

slide 25
exemplos de refatoração:
Reorganização de uma hierarquia de classes para remover duplicatas
código.
✧ Arrumando e renomeando atributos e métodos para fazer
eles são mais fáceis de entender.
✧ A substituição do código embutido por chamadas para métodos que
foram incluídos em uma biblioteca de programas.

slide 26 resumo;
Métodos ágeis são métodos de desenvolvimento incrementais que se concentram em
desenvolvimento rápido, lançamentos frequentes do software, reduzindo
sobrecargas de processo e produção de código de alta qualidade. Eles envolvem
o cliente diretamente no processo de desenvolvimento.
✧ A decisão de usar uma abordagem ágil ou baseada em planos
para o desenvolvimento deve depender do tipo de software que está sendo
desenvolvido, as capacidades da equipe de desenvolvimento e a cultura
da empresa que está desenvolvendo o sistema.
✧ A programação extrema é um método ágil bem conhecido que integra
uma série de boas práticas de programação, como lançamentos frequentes de
o software, melhoria contínua de software e cliente
participação na equipe de desenvolvimento.

slide 27

Uma das maiores diferena de Xp para planos é a forma como os testes são realizados, mas em xp
os testes tem um prioridade a mais, justamente para evitar erros na versão final do software 
As principais características dos testes em XP são:
1. desenvolvimento test-first;
2. desenvolvimento de teste incremental a partir de cenários;
3. envolvimento dos usuários no desenvolvimento de testes e validação;
4. uso de frameworks de testes automatizados

slide 28/29
uma das principais caracteristicas do XP é essa abordagem, em vez de fazer codigo e depois seus testes fazemos o contrario e ja encontramos varios problemas quando estamos codando justamente por ja termos os testes para ajudar;
mas pq isso funciona?
pq nos testes a gente ja pensa nos comportamentos que esse software deve ter ou, nno caso do Xp, da funcionalidade que vc vai incrementar. 
Não sei se vcs ja ouviram falar em test-lag, que é quando os desevolvedores em outras abordagens controem as ferramentas mais rapido que os testes, o que pode acabar virando uma bola de neve e os testes meio que passarem batidos.
entao como vai funcionar, como vimos no slide das tarefas, aquele cartão de historia foi dividido em varias tarefas entçao cada teste vai verificar a sua tarefa especifica pq ai o trabalho fica bem separado e livra varios problemas que podem acontecer, ah vale lembrar que o papel do cliente é super importante nessa abordagem, ele quem vai ditar como os testes devem funcionar pq ele quem vai verificar se as funcionalidades atigem as suas necessidades.
claro que é de se esperar que os desenvolvedores saibam em detalhes a funcionalidade que estão contruindo.

slide 30/32
Quais os problemas? 
To falando, falando mas a relação com o cliente nunca vai ser esse mar de rosas kkkk ele ta pagando ne
ent ele pode só dizer os requisitos e a gente que lute, esse é um dos principais problemas se n o pior 
dai que chegamos nos testes automatizados, é sempre bom ta a par desses frameworks pq eles são uma mão na roda, ainda mais nesse estilo de desevnvolvimento, como ja tem varias ferrementas no framework os testes ja saem bem mais rapido do papel e os problemas muitas vzs ja são detectados imediatamente.

slide 33
temos que ter em mente que não necessariamente teremos um codigo todo bonitinho e testadinho algumas coisas podem ocorrer durante a testagem por exemplo:
	as vzs os teste não atigem todas as exeções ou a equipe acabou pulando algum detalhe ou pode ser dificil quando se trata de telas os teste especificarem qual as interações que essas telas vão ter, isso pode acabar gerando alguns erros tbm. então um conjunto de testes contruido não quer dizer que o sistema vai ficar completo e bem testado na implementação final, então é sempre bom refatorar os BO pra melhorar o codigo

slide 34/35
como funciona a programação em pares?
a ideia é que os desenvolvedores façam as tarefas juntos e em pares, e por exemplo eu faço uma task com lilian e outra com Luiz felipe, depois faço outra com outra pessoa e por ai vai, até rolar um revesamento com toda a equipe, pq ai todo mundo fica a par do que ta rolando no codigo, e claro fica mais facil da equipe encontrar possiveis erros e ajudar na refatoração, esse metodo parte do ponto de vista de que duas pessoas trabalhando juntas é melhor que uma sózinha.

slide 36
das vantagens:
responsabilidade coletiva: o erro n foi só meu ou de tal pessoa, todos trabalhamos juntos e erramos juntos;
revisão: no pelo menos uma pessoa vai sempre revisar seu codigo, o que leva a um processo de revisão muito mais detalhado de possiveis erros do sistema.
refatoração: uma das maiores vantagens dessa pratica, pq a longo prazo melhora bastante o codigo e como eu falei antes a gente precisa pensar na manunteção ja que a documentação é mais escarsa.



##gerenciamento agil de projetos:
slide 37

	
	o gerenciadores de projeto precisão ter foco no tempo e no orçamento para que tudo funcione coretamente. Na abordagem dirigida a planos esse processo pode ser feito onde gerente faz um plano dizendo tudo que se espera do software e o quando deve ser entregue as ferramentas que deve ser usadas, mas para o desenvolvimento agil isso não é tao adequado, pq? 

	o desenvolvimento incremental das abordagens ageis requer um metodo diferente de gerenciamento:

# scrum 
slide 38/39

##papeis-
	Product owner :responsael pela visão do produto, pode ser um representante do cliente. gestor de baglogs, priorisa as necessidades .

	scrum master: lider do trabalho da equipe, é ele quem vai ditar como o desenvolvimento deve ser seguido e garantir que  processo siga de acordo com o planejado, ou seja ele responsavel por fazer o clico seguir

	time de desnvolvimento: grupo de pessoas envolvida em todos os processos do desenvolvimento o ideal é que a equipe não seja tão grande para uma melhor comunicação
	(o product owner e o scrum master geralemente n fazem parte do time de desenvolvimento)

##artefatos - 
	baglogs : lista de requisitos da aplicação. o product owner é o responsavel por essa lista
	o baglog é dividido em dois baglogs
	baglog do produto: vai ser justamente os requisitos em si o que deve ser feito para obtelos
	sprint baglog é o que deve ser feito para finalização de cada sprint, ou seja de cada implentação.
	Aqui é onde criamos as tarefas que seram desenvolvidas durante o sprint

	cartões de historia - uma historia literalmente deve ser contada sobre o produto

	burndown grafico do produto e do sprint

##eventos -

sprint: 

sprint baclog conjunto de historias que vai ser denvolvido no sprint;
sprint planing - reunião inicial para definir o planejamento do que deve ser alcançado durante  sprint baclog e o que deve ser entre no fim do sprint

daile scrum - planejamento diario na forma de reuniões uqe vai decidir o que deve ser feito em um curto periodo, geralmente de 24 horas

review do sprint  - realizado no ultimo dia de spring é quando mostramos o incremento que foi criado ao product owner ou as os stakeholders envolvidos; no fim da sprint ja é decidido o que deve entrar no proximo baclog e quais os proximos passos a seguir

por fim a equipe realiza uma retrospectiva do sprint para revisar possiveis melhorias da equipe no ambito de tabalho e aplicalas no proximo sprint



vantagens:
1. O produto é decomposto em um conjunto de partes gerenciáveis e compreensíveis.
2. Requisitos instáveis não atrasam o progresso.
3. Toda a equipe tem visão de tudo, e, consequentemente, a comunicação da equipe é melhorada.
4. Os clientes veem a entrega de incrementos dentro do prazo e recebem feedback sobre como o produto
funciona.
5. Estabelece-se confiança entre clientes e desenvolvedores e cria-se uma cultura positiva, na qual todo mundo espera que o projeto tenha êxito



slide 44:
## Escalamento de métodos ágeis
e os sistemas de grande porte?

sistemas de grande porte podem ser desenvolvidos usando modelos ageis, o problema é que é muito difici usar um unico modelo em uma equipe de muitas pessoas as vzs espalhadas pr varias localidades do mundo...

slide: 45/46	
1. Sistemas de grande porte geralmente são coleções de sistemas separados que se comunicam, nos quais equipes separadas desenvolvem cada um dos sistemas. Frequentemente, essas equipes estão trabalhando em lugares diferentes e, por vezes, em diferentes fusos horários. É praticamente impossível que cada equipe tenha
uma visão de todo o sistema. Consequentemente, suas prioridades costumam ser voltadas para completar sua
parte do sistema, sem levar em conta questões mais amplas do sistema como um todo.
2. Sistemas de grande porte são ‘brownfield systems’ (HOPKINS e JENKINS, 2008), isto é, incluem e interagem com
inúmeros sistemas existentes. Muitos dos requisitos do sistema estão preocupados com essa interação; assim,
realmente não se prestam à flexibilidade e desenvolvimento incremental. Questões políticas também podem
ser importantes aqui. Muitas vezes, a solução mais fácil para um problema é mudar um sistema em vigor. no
entanto, isso requer uma negociação com os gerentes do sistema para convencê-los de que as mudanças
podem ser implementadas sem risco para a operação do sistema.
3. Sempre que vários sistemas estão integrados para criar um único, uma fração significativa do desenvolvimento preocupa-se com a configuração do sistema e não com o desenvolvimento do código original. Isso
não é necessariamente compatível com o desenvolvimento incremental e com a integração frequente de
sistemas.
4. Sistemas de grande porte e seus processos de desenvolvimento são frequentemente restringidos pelas regras
externas e regulamentos que limitam o desenvolvimento, que exigem certos tipos de documentação a ser
produzida etc.
5. Sistemas de grande porte têm um longo tempo de aquisição e desenvolvimento. É difícil manter equipes
coerentes que saibam sobre o sistema durante esse período, pois as pessoas, inevitavelmente, deslocam-se
para outros trabalhos e projetos.
6. Sistemas de grande porte geralmente têm um conjunto diverso de stakeholders. Por exemplo, enfermeiros e
administradores podem ser os usuários finais de um sistema médico, mas o pessoal médico sênior, gerentes de
hospital etc. também são stakeholders do sistema

slide 47
A solução para usar os metodos ageis nesse tipo de projeto é escalonalos e isso pode ser dividido em duas pespctivas:

1. Perspectiva ‘scaling up’, relacionada ao uso desses métodos para desenvolver sistemas de software de grande porte que não podem ser desenvolvidos por uma equipe pequena.


2. Perspectiva ‘scaling out’, relacionada com a forma como os métodos ágeis podem ser introduzidos em uma
grande organização com muitos anos de experiência em desenvolvimento de software.

mas para isso funcionar precisamos manter aos maximos os fundamentos dos metodos ageis, mesmo que usando varios juntos.]

slide 48
## scaling up:
Para o desenvolvimento de grandes sistemas, não é possível focar apenas
no código do sistema. Você precisa fazer mais na frente
projeto e documentação do sistema
✧ Mecanismos de comunicação entre equipes devem ser projetados
e usado. Isso deve envolver telefone e vídeo normais
conferências entre os membros da equipe e freqüentes, curtas
reuniões eletrônicas onde as equipes se atualizam sobre
progresso.
✧ Integração contínua, onde todo o sistema é construído a cada
vez que qualquer desenvolvedor verifica uma mudança, é praticamente
impossível. No entanto, é essencial manter
compilações de sistema e lançamentos regulares do sistema.

slide 49
## scaling out:

Gerentes de projeto que não têm experiência com métodos ágeis
pode estar relutante em aceitar o risco de uma nova abordagem.
✧ Grandes organizações costumam ter procedimentos de qualidade e
padrões que todos os projetos devem seguir e, porque
de sua natureza burocrática, estes são susceptíveis de ser incompatíveis
com métodos ágeis.
✧ Os métodos ágeis parecem funcionar melhor quando os membros da equipe têm um
nível de habilidade relativamente alto. No entanto, em grandes organizações,
é provável que haja uma ampla gama de aptidões e aptidões.
✧ Pode haver resistência cultural aos métodos ágeis, especialmente em
aquelas organizações que têm uma longa história de uso
processos convencionais de engenharia de sistemas.

slide 50:
# pontos chaves:

Um ponto forte particular da programação extrema é o
desenvolvimento de testes automatizados antes de um programa
recurso é criado. Todos os testes devem ser executados com sucesso
quando um incremento é integrado a um sistema.
✧ O método Scrum é um método ágil que fornece um
estrutura de gerenciamento de projetos. É centrado em torno de um conjunto
de sprints, que são períodos fixos quando um sistema
incremento é desenvolvido.
✧ É difícil dimensionar métodos ágeis para grandes sistemas. Grande
os sistemas precisam de um projeto inicial e alguma documentação.


