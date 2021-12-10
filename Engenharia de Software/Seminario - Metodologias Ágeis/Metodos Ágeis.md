## Introdução do conteudo:Slide 2

	 Bom, vou falar um pouco pra vocês sobre o que vou aprensentar e o que se espera ser alcançado no final da aprentação:
	 	Como você sabem o capitulo aborda o desenvolvimento ágil de software, vou falar sobre a logica por tras do desenvolvimento ágil, apresentar o manifesto agil(um rolê bem karl Marx da programação) e a diferença entre desenvolvimento ágil e dirigido a planos;

	 	Também vamos conhecer um pouco sobre Extreme programming(xp) e como a pratica se relaciona aos principios do modelo ágil;

	 	Sobre scrun no desenvolvimento de projeto;

	 	E quais as melhores situações para escolher cada um deses metodos.

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
slide 10
	
	Atualmente, a maioria dos projetos de software inclui práticas das abordagens dirigidas a planos e ágil. Para
	optar por um equilíbrio entre as abordagens, você precisa responder a uma série de questões técnicas, humanas
	e organizacionais:
	1. É importante ter uma especificação e um projeto muito detalhados antes de passar para a implementação? Se
	sim, você provavelmente necessita usar uma abordagem dirigida a planos.
	2. vc concegue ter um contato com o cliente que vai ter entrega incremental em que você entrega o software aos clientes e rapidamente
	obtém um feedback? Em caso afirmativo, considere o uso de métodos ágeis.
	3.quandes aplicações, uma abordagem dirigida a planos pode ter de ser usada.
	4. Que tipo de sistema está sendo desenvolvido? Sistemas que exigem uma análise profunda antes da implementação (por exemplo, sistema de tempo real com requisitos de tempo complexos) geralmente demandam
	um projeto bastante detalhado para atender a essa análise. Nessas circunstâncias, uma abordagem dirigida a
	planos pode ser a melhor opção.
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