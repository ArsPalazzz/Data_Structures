﻿//#include <iostream>
//using namespace std;
//
//10.	Вы являетесь коммерческим директором театра, и в Ваши обязанности входит вся организационно-финансовая работа, связанная с привлечением 
//актеров и заключением контрактов.
//Вы поставили дело следующим образом : каждый год театр осуществляет постановку различных спектаклей.Каждый спектакль имеет определенный бюджет.
//Для участия в конкретных постановках в определенных ролях Вы привлекаете актеров.С каждым из актеров Вы заключаете персональный контракт на определенную сумму.
//Каждый из актеров имеет некоторый стаж работы, некоторые из них удостоены различных наград и званий.
//В рамках одного спектакля на одну и ту же роль привлекается несколько актеров.Контракт определяет базовую зарплату актера, 
//а по итогам реально отыгранных спектаклей актеру назначается премия
//
//
//Актеры+
//Спектакли+
//Бюджет для спектакля+
//Роли для спектакля+
//Цена за билет+
//Сумма для контракта
//Стаж работы+
//Награды+
//Звание
//Получит ли премию
//
//struct Actors {
//	struct POVSHOK_ALEKSANDRA {
//		char nameOfAct[19] = "Povshok Aleksandra",
//			role3[5] = "Лиза",
//			role6[6] = "Мария",
//			actReward[26] = "Любитель сломанных ногтей",
//			workExp[6] = "9 лет",
//			add[127] = "Саша крутая чикса её все любят но она никому кроме дани не даёт у неё красивые глаза цвета бирюза тонкие ножки и милые сапожки";
//	} a;
//
//	struct	ROBERT_PATTINSON {
//		char nameOfAct[17] = "Robert Pattinson",
//			role3[18] = "Василий Позднышев",
//			role4[5] = "Нина",
//			actReward[14] = "Актер(мощный)",
//			workExp[7] = "18 лет",
//			add[176] = "Британский актёр, фотомодель и музыкант. Мировую известность ему принесли роли Седрика Диггори в фильме «Гарри Поттер и Кубок огня» и Эдварда Каллена в серии фильмов «Сумерки»";
//	} b;
//
//	struct	RAYAN_GOSLING_V_FILME_DRAYV {
//		char nameOfAct[28] = "Rayan Gosling v filme Drayv",
//			role2[25] = "Фёдор Павлович Карамазов",
//			role3[18] = "Александр Гиренок",
//			actReward[19] = "Гений среди гениев",
//			workExp[7] = "15 лет",
//			add[304] = "Канадский актёр и музыкант. Двукратный номинант на премию «Оскар», лауреат премии «Золотой глобус», двукратный лауреат премии «Спутник» и лауреат премии Национального совета кинокритиков США. В 2008 году совместно с Заком Шилдсом основал музыкальную группу Dead Man’s Bones и участвует в ней по сей день";
//	} c;
//
//	struct	VLADIMIR_PUTIN {
//		char nameOfAct[15] = "Vladimir Putin",
//			role1[18] = "Виконт де Вальмон",
//			role5[8] = "Надежда",
//			actReward[4] = "Вор",
//			workExp[8] = "22 года",
//			add[323] = "Владимир Владимирович Путин (род. 7 октября 1952, Ленинград, СССР) — российский государственный, политический и военный деятель. Действующий Президент Российской Федерации, председатель Государственного Совета Российской Федерации и верховный главнокомандующий Вооружёнными силами Российской Федерации с 7 мая 2012 года";
//	} d;
//
//	struct	TAYLER_DERDEN {
//		char nameOfAct[14] = "Tayler Derden",
//			role1[16] = "Шевалье Дансени",
//			role3[13] = "Трухачевский",
//			actReward[15] = "Sigma gigachad",
//			workExp[7] = "15 лет",
//			add[315] = "Тайлер Дерден (англ. Tyler Durden) — персонаж романа Чака Паланика «Бойцовский клуб» и снятого по его мотивам одноимённого фильма Дэвида Финчера. Роль Тайлера Дердена исполнил Брэд Питт.Британский развлекательный журнал Empire поставил Тайлера Дердена на восьмое место в своём списке величайших киноперсонажей[1].";
//	} e;
//
//	struct	PATRIC_BATEMAN {
//		char nameOfAct[15] = "Patric Bateman",
//			role2[25] = "Иван Фёдорович Карамазов",
//			role5[9] = "Настасья",
//			actReward[32] = "Today he kill's a lot of people",
//			workExp[8] = "23 года",
//			add[195] = "Патрик Бэйтмен (англ. Patrick Bateman) — персонаж книг американского писателя Брета Истона Эллиса. Главный герой романа «Американский психопат» (1991), от имени которого ведётся повествование.";
//	} f;
//
//	struct	FEI_VALENTINE {
//		char nameOfAct[15] = "Fei Valentine",
//			role2[29] = "Катерина Ивановна Верховцева",
//			role6[6] = "Виола",
//			actReward[10] = "Посмотрим",
//			workExp[7] = "17 лет",
//			add[386] = "Фэй Валентайн - разыскиваемая картежница с крайне большим долгом, ставшая членом команды охотников за головами на борту корабля Бибоп, одна из главных героев мультсериала.Несмотря на то, что на вид не больше 23 лет, Фэй на самом деле около 77 лет, после аварии космического челнока она была заморожена в криогенном режиме, в результате чего она провела пятьдесят четыре года в анабиозе";
//	} g;
//
//	struct	REBECCA_LEE {
//		char nameOfAct[12] = "Revecca Lee",
//			role1[18] = "Маркиза де Мертей",
//			role4[7] = "Джесси",
//			actReward[20] = "Самый крутой киллер",
//			workExp[7] = "17 лет",
//			add[406] = "Американка китайского происхождения. Родилась и выросла в Нью-Йорке (Чайнатаун). Возраст — приблизительно 20-22 года. Рано потеряла родителей, возможно убила своего отца, который её насиловал. По её словам, неоднократно подвергалась нападкам полиции за преступления, которые не совершала. Бежала от преследования из США. Поиски лучшей жизни привели её в Роанапур, где она стала боевиком компании «Лагуна».";
//	} h;
//
//	struct	JOHNNY_SINS {
//		char nameOfAct[12] = "Johnny Sins",
//			role4[5] = "Клер",
//			role6[8] = "Антонио",
//			actReward[31] = "Смотрим его фильмы всей семьей",
//			workExp[7] = "15 лет",
//			add[171] = "Джонни Синс (англ. Johnny Sins, настоящее имя англ. Steve Wolfe; родился 31 декабря 1978 года[1], Питтсбург, Пенсильвания, США) — американский порноактёр и фитнес-тренер.";
//	} i;
//
//	struct	TOMAS_SHELBI {
//		char nameOfAct[13] = "Tomas Shelbi",
//			role1[9] = "Мажордом",
//			role6[14] = "Сэр Тоби Белч",
//			actReward[25] = "Лучший нюхатель беброчки",
//			workExp[6] = "9 лет",
//			add[524] = "Томас Майкл «Томми» Шелби (англ. Thomas Michael «Tommy» Shelby) — сын Артура и миссис Шелби, брат Артура, Джона, Ады и Финна Шелби, отец Чарльза и Руби Шелби, а также муж Грейс и Лиззи Шелби. Он является лидером бирмингемской преступной группировки «Острые козырьки» и патриархом семьи Шелби.Томас служил в Первой мировой войне в звании сержант-майора и был награжден за храбрость. Пережитое в Первой мировой войне оставило его разочарованным, его постоянно мучают кошмары, и он твёрдо намерен продвинуть свою семью в мире.";
//	} k;
//
//	struct	MSHK_FRD {
//		char nameOfAct[9] = "Mshk Frd",
//			role4[7] = "Лисбет",
//			role5[6] = "Алина",
//			actReward[12] = "ААА МШК ФРД",
//			workExp[6] = "7 лет",
//			add[355] = "Freddy Fazbear (рус. Фредди Фазбер) — главный аниматроник-антагонист в играх Five Nights at Freddy's, Ultimate Custom Night, Five Nights at Freddy's: Help Wanted и Five Nights at Freddy's AR: Special Delivery, а также персонаж в мини-играх Five Nights at Freddy's 2, Five Nights at Freddy's 3 и Freddy Fazbear's Pizzeria Simulator, символ серии игр FNaF.";
//	} m;
//
//	struct	EREN_YEGER {
//		char nameOfAct[11] = "Eren Yeger",
//			role5[5] = "Нина",
//			role6[10] = "Себастьян",
//			actReward[16] = "Устроил геноцид",
//			workExp[7] = "20 лет",
//			add[325] = "Эрен Йегер (エレン・イェーガー Эрэн Иэ:га?) — главный герой истории. Являлся членом Разведкорпуса. Единственный сын Гриши и Карлы Йегер, а также приёмный брат Микасы Аккерман, единокровный брат Зика Йегера, друг детства Армина Арлерта. На данный момент Эрен обладатель сил Титана—Прародителя, Титана Молота Войны и Атакующего Титана.";
//	} n;
//
//	struct	SHINJI_IKARI {
//		char nameOfAct[13] = "Shinji Ikari",
//			role1[16] = "Шевалье Дансени",
//			role5[5] = "Сара",
//			actReward[12] = "Лезет в еву",
//			workExp[7] = "14 лет",
//			add[339] = "Синдзи Икари — главный герой «Neon Genesis Evangelion» и назначенный пилот Евангелиона: Модуля-01, третье дитя. На протяжении сериала он страдает от комплекса неполноценности, депрессии, посттравматического расстройства и страха близости, что в финале провоцирует у него обсессию (навязчивое негативное мышление) и выученную беспомощность";
//	} l;
//
//	struct JOHNNY_JOESTAR {
//		char nameOfAct[15] = "Johnny Joestar",
//			role2[28] = "Дмитрий Фёдорович Карамазов",
//			role4[6] = "Марта",
//			actReward[25] = "Самый выдающийся инвалид",
//			workExp[7] = "17 лет",
//			add[535] = "Джонни Джостар, урожденный Джонатан Джостар, - это главный протагонист седьмой части серии Невероятные приключения ДжоДжо, Гонка «Стальной Шар», а также седьмой ДжоДжо в серии. Он также появляется в качестве посмертного второстепенного персонажа в ДжоДжолионе.Бывший жокейW, ставший параплегиком, Джонни участвует в гонке SBR, чтобы узнать секрет стальных шаров Джайро Цеппели, ведь только они способны исцелить его ноги. В ходе гонки, Джонни становится одновременно пользователем Спина и пользователем стенда, когда приобретает Tusk.";
//	} o;
//
//	struct	AMOGUS {
//		char nameOfAct[7] = "Amogus",
//			role1[7] = "Эмилия",
//			role6[10] = "Мальволио",
//			actReward[28] = "ТУ ТУ ТУ ТУ ТУ ТУ ТУ ТУТУТУ",
//			workExp[7] = "13 лет",
//			add[387] = "Among Us (рус. Среди нас) — командная игра-детектив, разработанная и выпущенная компанией Innersloth. По своей сути она очень напоминает классическую карточную игру «Мафия», но на данный момент здесь уже 7 ролей: член экипажа, предатель, оборотень, инженер, учёный, призрак и ангел-хранитель. Задача членов экипажа — выполнить все задания или вычислить предателя, пока он не убьёт всех.";
//	} q;
//	struct	BELODED {
//		char nameOfAct[8] = "Beloded",
//			role2[28] = "Алексей Фёдорович Карамазов",
//			role5[5] = "Крис",
//			actReward[27] = "Любитель маленьких девочек",
//			workExp[6] = "8 лет",
//			add[381] = "Белодед Николай Иванович, значицца, будет боссом первом курса. Примечателен он тем, что только у него вы встретитесь с уникальной рейтинговой системой, где абсолютно каждое ваше действие будет расцениваться баллами. Вы будете получать баллы за посещение лекций, за ответы на лекциях, за выполнение лабораторных работ, за рефераты, но так же он очень любит эти самые баллы отнимать";
//	} r;
//	struct	JOKER {
//		char nameOfAct[6] = "Joker",
//			role3[9] = "Анатолий",
//			role4[10] = "Сью Кэрол",
//			actReward[20] = "Мы живем в обществе",
//			workExp[7] = "11 лет",
//			add[383] = "Джокер (англ. Joker) — безумный суперзлодей, серийный убийца и заклятый противник защитника Готэм Сити Бэтмена, чей внешний облик стилизован под клоуна, а оружие зачастую замаскировано как цирковой реквизит. Признанный злейшим врагом Тёмного рыцаря, он имеет тенденцию совершать жестокие, бесчеловечные злодеяния, включая зверские убийства, нанесение тяжких увечий, похищения и т.д.";
//	} s;
//
//	struct	EEONEGUY {
//		char nameOfAct[9] = "EeOneGuy",
//			role2[18] = "Чёрт, Следователь",
//			role3[9] = "Катерина",
//			actReward[8] = "Легенда",
//			workExp[6] = "7 лет",
//			add[338] = "Ивангай (англ. EeOneGuy; настоящее имя — Иван Романович Рудской (укр. Іван Романович Рудський); род. 19 января 1996, Анновка, Верхнеднепровский район, Днепропетровская область) — украинский видеоблогер, летсплеер и музыкант. Создатель и владелец одноимённого YouTube-канала с названием «Ивангай» (до 2017 года канал назывался «EeOneGuy»)";
//	} v;
//} z;
//
//void aboutActor(const char* nameOfActor, const char* reward, const char* years, const char* add) {
//	system("cls");
//	printf("\t\t\t\t\t\t\t%s\n\n\n%s\n\nСтаж работы: %s\nНаграды: %s\n", nameOfActor, add, years, reward);
//	system("pause");
//	system("cls");
//}
//
//void show(int* gen, const char* name, const char* description, const char* firstAct, const char* firstRole, const char* firstReward, const char* firstWork, const char* firstAdd, const char* secondAct, const char* secondRole, const char* secondReward, const char* secondWork, const char* secondAdd, const char* thirdAct, const char* thirdRole, const char* thirdReward, const char* thirdWork, const char* thirdAdd, const char* fourthAct, const char* fourthRole, const char* fourthReward, const char* fourthWork, const char* fourthAdd, const char* fifthAct, const char* fifthRole, const char* fifthReward, const char* fifthWork, const char* fifthAdd, const char* sixthAct, const char* sixthRole, const char* sixthReward, const char* sixthWork, const char* sixthAdd, int perfBudg, int tickPrice) {
//	system("cls");
//	printf("\t\t\t\t\t\t\t%s\n\n\nОписание:\n", name);
//	printf("%s", description);
//	printf("\n\nАктеры:\n1.%s(%s)\n2.%s(%s)\n3.%s(%s)\n4.%s(%s)\n5.%s(%s)\n6.%s(%s)\n\nБюджет спектакля: %d BYN\nСтоимость за билет: %d BYN\n\n", firstAct, firstRole, secondAct, secondRole, thirdAct, thirdRole, fourthAct, fourthRole, fifthAct, fifthRole, sixthAct, sixthRole, perfBudg, tickPrice);
//	printf("Чтобы узнать об актере - введите цифру слева от его имени\nЧтобы выйти введите '0'\n");
//	scanf_s("%d", gen);
//
//	switch (*gen) {
//	case 1:
//		aboutActor(firstAct, firstReward, firstWork, firstAdd);
//		break;
//	case 2:
//		aboutActor(secondAct, secondReward, secondWork, secondAdd);
//		break;
//	case 3:
//		aboutActor(thirdAct, thirdReward, thirdWork, thirdAdd);
//		break;
//	case 4:
//		aboutActor(fourthAct, fourthReward, fourthWork, fourthAdd);
//		break;
//	case 5:
//		aboutActor(fifthAct, fifthReward, fifthWork, fifthAdd);
//		break;
//	case 6:
//		aboutActor(sixthAct, sixthReward, sixthWork, sixthAdd);
//		break;
//	default: *gen = 1;
//	}
//	system("cls");
//}
//
//void main() {
//	setlocale(LC_ALL, "ru");
//	int gen = 1;
//	int myspec;
//	while (gen) {
//		printf("\t\t\t\t\tДобро пожаловать, в театр мшк бебры\nВыберите спектакль:\n1.Опасные связи\n2.Братья Карамазовы\n3.Крейцерова соната\n4.Девичник\n5.В омуте\n6.Двенадцатая ночь\n\n\n\nЧтобы выйти нажмите '0': ");
//		scanf_s("%d", &myspec);
//		switch (myspec) {
//		case 1:
//			show(&gen, "Опасные связи", "Маркиза де Мертей и виконт де Вальмон – бывшие любовники. \nУмные, изощрённые и циничные, они хладнокровно играют судьбами других людей. \nРади минутного удовольствия они разрушат жизнь любого, будь то расчётливая \nматрона, пылкий юноша, искушённая куртизанка, светский щёголь, неопытная девушка… Но судьба непредсказуема. \nИ она может очень жестоко посмеяться над тем, кто считал себя её хозяином…", z.h.nameOfAct, z.h.role1, z.h.actReward, z.h.workExp, z.h.add, z.d.nameOfAct, z.d.role1, z.d.actReward, z.d.workExp, z.d.add, z.e.nameOfAct, z.e.role1, z.e.actReward, z.e.workExp, z.e.add, z.k.nameOfAct, z.k.role1, z.k.actReward, z.k.workExp, z.k.add, z.l.nameOfAct, z.l.role1, z.l.actReward, z.l.workExp, z.l.add, z.q.nameOfAct, z.q.role1, z.q.actReward, z.q.workExp, z.q.add, 20000, 15.0);
//			break;
//		case 2:
//			show(&gen, "Братья Карамазовы", "«Братья Карамазовы» – и детектив, и любовный роман, и философский трактат. В нём невероятным образом сплетаются роковая страсть, холодная ненависть, подлый умысел, философские рассуждения, преступное молчание, нравственные искания, жестокость и жертвенность.Мнимая добродетель оборачивается равнодушием, вожделение – истинной любовью, а безграничная свобода – душевным хаосом.История ярких личностей, мужчин и женщин, жаждущих любви, правды и справедливости.", z.c.nameOfAct, z.c.role2, z.c.actReward, z.c.workExp, z.c.add, z.f.nameOfAct, z.f.role2, z.f.actReward, z.f.workExp, z.f.add, z.g.nameOfAct, z.g.role2, z.g.actReward, z.g.workExp, z.g.add, z.o.nameOfAct, z.o.role2, z.o.actReward, z.o.workExp, z.o.add, z.r.nameOfAct, z.r.role2, z.r.actReward, z.r.workExp, z.r.add, z.v.nameOfAct, z.v.role2, z.v.actReward, z.v.workExp, z.v.add, 20000, 15.0);
//			break;
//		case 3:
//			show(&gen, "Крейцерова соната", "«Муж и жена приняли обязательство жить вместе всю жизнь. Но вдруг поняли, что ненавидят друг друга, желают разойтись и всё-таки живут – тогда это тот страшный ад, от которого спиваются, стреляются, убивают или отравляют друг друга…Я Позднышев.Тот самый, который жену убил… Какие металлы в солнце и звёздах – это узнать можно, а вот то, что обличает наше свинство – это трудно, ужасно трудно… Одно во мне есть – я знаю то, что не все ещё скоро узнают».История одной ошибки ? Одного преступления ? А может, единственного самого бесстрашного поступка ?Спектакль – исповедь, спектакль – зеркало, спектакль – размышление.", z.a.nameOfAct, z.a.role3, z.a.actReward, z.a.workExp, z.a.add, z.c.nameOfAct, z.c.role3, z.c.actReward, z.c.workExp, z.c.add, z.b.nameOfAct, z.b.role3, z.b.actReward, z.b.workExp, z.b.add, z.e.nameOfAct, z.e.role3, z.e.actReward, z.e.workExp, z.b.add, z.s.nameOfAct, z.s.role3, z.s.actReward, z.s.workExp, z.s.add, z.v.nameOfAct, z.v.role3, z.v.actReward, z.v.workExp, z.v.add, 15000, 12.5);
//			break;
//		case 4:
//			show(&gen, "Девичник", "Шесть подруг собираются вместе – шесть молодых, красивых, незамужних женщин! Они давно не виделись, да и повод есть: одна из них беременна и собирается рожать. Изначально вечеринка планировалась как милые дамские посиделки: лёгкий алкоголь, лёгкие закуски, а также воспоминания, поздравления, сплетни и упрёки – всего понемножку. Но что-то пошло не так...Трогательно доверчивые, шокирующе откровенные, вызывающе сексапильные, смешные, занудные, сильные, слабые – женщины на сцене предстанут во всех своих обликах.И, конечно же, в спектакле есть мужчины – ведь все женские проблемы в конечном итоге сводятся к ним!", z.m.nameOfAct, z.m.role4, z.m.actReward, z.m.workExp, z.m.add, z.o.nameOfAct, z.o.role4, z.o.actReward, z.o.workExp, z.o.add, z.i.nameOfAct, z.i.role4, z.i.actReward, z.i.workExp, z.i.add, z.h.nameOfAct, z.h.role4, z.h.actReward, z.h.workExp, z.h.add, z.s.nameOfAct, z.s.role4, z.s.actReward, z.s.workExp, z.s.add, z.b.nameOfAct, z.b.role4, z.b.actReward, z.b.workExp, z.b.add, 13000, 10.5);
//			break;
//		case 5:
//			show(&gen, "В омуте", "Я не хочу жить во снах, но почему там мне лучше? Где моя реальность? Я сплю или существую? Я существую в своих снах. Только там я могу жить той жизнью, которую люблю, жизнью, которая мне нравится – с теми, кто никогда не сможет от меня уйти… Все в моей жизни уходят… И как это назвать?..", z.n.nameOfAct, z.n.role5, z.n.actReward, z.n.workExp, z.n.add, z.l.nameOfAct, z.l.role5, z.l.actReward, z.l.workExp, z.l.add, z.d.nameOfAct, z.d.role5, z.d.actReward, z.d.workExp, z.d.add, z.m.nameOfAct, z.m.role5, z.m.actReward, z.m.workExp, z.m.add, z.r.nameOfAct, z.r.role5, z.r.actReward, z.r.workExp, z.r.add, z.f.nameOfAct, z.f.role5, z.f.actReward, z.f.workExp, z.f.add, 15000, 12.5);
//			break;
//		case 6:
//			show(&gen, "Двенадцатая ночь", "Ах, как часто нам хочется выглядеть красивее, увереннее, сильнее,  умнее, состоятельнее, загадочнее, эффектнее, чем на самом деле! Мы хотим изменить себя.Хрупкая девушка надевает мужской костюм – и окружающие видят в ней очаровательного подростка.Серьёзная женщина облачается в соблазнительный наряд, туфли на каблуках – и в её походке и даже голосе появляется что - то от куртизанки.Да и мужчина, желая произвести впечатление, тоже одевается так, чтобы достичь максимального эффекта.Но всегда ли наша внешность отражает нашу сущность ?Костюм изменит нас ? Или обнажит то, чего мы сами о себе даже не подозреваем ? Костюм помогает другим лучше нас узнать ? Или  нам узнать самих себя ?Наша «Двенадцатая ночь» – любовный треугольник, даже многоугольник, который все участники пытаются разрешить с помощью смены костюмов и образов, а в результате ещё больше запутываются!Немыслимые переодевания, клятвы и обещания, робкие намёки, язвительные шутки, тайные надежды, пылкие признания – и всё это в спектакле режиссёра Сергея Ковальчика!", z.a.nameOfAct, z.a.role6, z.a.actReward, z.a.workExp, z.a.add, z.i.nameOfAct, z.i.role6, z.i.actReward, z.i.workExp, z.i.add, z.k.nameOfAct, z.k.role6, z.k.actReward, z.k.workExp, z.k.add, z.n.nameOfAct, z.n.role6, z.n.actReward, z.n.workExp, z.n.add, z.q.nameOfAct, z.q.role6, z.q.actReward, z.q.workExp, z.q.add, z.g.nameOfAct, z.g.role6, z.g.actReward, z.g.workExp, z.g.add, 15000, 12.5);
//			break;
//		default:
//			exit(1);
//		}
//	}
//}

#include <iostream>
#include <Windows.h>
using namespace std;

struct Actors {
	char* name = new char[20];
	char* role = new char[20];
	char* reward = new char[20];
	char* workExp = new char[10];
	char* add = new char[500];
	int index;
};


void aboutActor(const char* nameOfActor, const char* reward, const char* years, const char* add) {
	system("cls");
	printf("\t\t\t\t\t\t\t%s\n\n\n%s\n\nСтаж работы: %s\nНаграды: %s\n", nameOfActor, add, years, reward);
	system("pause");
	system("cls");
}

void show(int* gen, const char* name, const char* description, const char* firstAct, const char* firstRole, const char* firstReward, const char* firstWork, const char* firstAdd, const char* secondAct, const char* secondRole, const char* secondReward, const char* secondWork, const char* secondAdd, int perfBudg, int tickPrice) {
	system("cls");
	printf("\t\t\t\t\t\t\t%s\n\n\nОписание:\n", name);
	printf("%s", description);
	printf("\n\nАктеры:\n1.%s(%s)\n2.%s(%s)\n\nБюджет спектакля: %d BYN\nСтоимость за билет: %d BYN\n\n", firstAct, firstRole, secondAct, secondRole, perfBudg, tickPrice);
	printf("Чтобы узнать об актере - введите цифру слева от его имени\nЧтобы выйти введите '0'\n");
	scanf_s("%d", gen);

	switch (*gen) {
	case 1:
		aboutActor(firstAct, firstReward, firstWork, firstAdd);
		break;
	case 2:
		aboutActor(secondAct, secondReward, secondWork, secondAdd);
		break;
	default: *gen = 1;
	}
	system("cls");
}

void main() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int allActs = 5;
	Actors everyAct[allActs];
	int i1, i2;

	for (i1 = 0; i1 < allActs; i1++) {
		printf("Введите имя и фамилию актера: ");
		gets_s(everyAct[i1].name, 20);
		printf("Введите роль актера: ");
		gets_s(everyAct[i1].role, 20);
		printf("Введите награду актера: ");
		gets_s(everyAct[i1].reward, 20);
		printf("Введите стаж работы актера: ");
		gets_s(everyAct[i1].workExp, 20);
		printf("Введите описание актера: ");
		gets_s(everyAct[i1].add, 500);
		everyAct[i1].index = i1;
	}

	int gen = 1;
	int myspec;

	while (gen) {
		system("cls");
		printf("\t\t\t\t\tДобро пожаловать, в театр мшк бебры\nВыберите спектакль:\n1.Опасные связи\n2.Братья Карамазовы\n3.Крейцерова соната\n4.Девичник\n5.В омуте\n\n\n\nФункции:\n6)Поиск информации об актере по индексу\n0)Выход\nВвод:");
		scanf_s("%d", &myspec);
		switch (myspec) {
		case 1:
			show(&gen, "Опасные связи", "Маркиза де Мертей и виконт де Вальмон – бывшие любовники. \nУмные, изощрённые и циничные, они хладнокровно играют судьбами других людей. \nРади минутного удовольствия они разрушат жизнь любого, будь то расчётливая \nматрона, пылкий юноша, искушённая куртизанка, светский щёголь, неопытная девушка… Но судьба непредсказуема. \nИ она может очень жестоко посмеяться над тем, кто считал себя её хозяином…", everyAct[0].name, everyAct[0].role, everyAct[0].reward, everyAct[0].workExp, everyAct[0].add, everyAct[1].name, everyAct[1].role, everyAct[1].reward, everyAct[1].workExp, everyAct[1].add, 20000, 15.0);
			break;
		case 2:
			show(&gen, "Братья Карамазовы", "«Братья Карамазовы» – и детектив, и любовный роман, и философский трактат. В нём невероятным образом сплетаются роковая страсть, холодная ненависть, подлый умысел, философские рассуждения, преступное молчание, нравственные искания, жестокость и жертвенность.Мнимая добродетель оборачивается равнодушием, вожделение – истинной любовью, а безграничная свобода – душевным хаосом.История ярких личностей, мужчин и женщин, жаждущих любви, правды и справедливости.", everyAct[2].name, everyAct[2].role, everyAct[2].reward, everyAct[2].workExp, everyAct[2].add, everyAct[3].name, everyAct[3].role, everyAct[3].reward, everyAct[3].workExp, everyAct[3].add, 20000, 15.0);
			break;
		case 3:
			show(&gen, "Крейцерова соната", "«Муж и жена приняли обязательство жить вместе всю жизнь. Но вдруг поняли, что ненавидят друг друга, желают разойтись и всё-таки живут – тогда это тот страшный ад, от которого спиваются, стреляются, убивают или отравляют друг друга…Я Позднышев.Тот самый, который жену убил… Какие металлы в солнце и звёздах – это узнать можно, а вот то, что обличает наше свинство – это трудно, ужасно трудно… Одно во мне есть – я знаю то, что не все ещё скоро узнают».История одной ошибки ? Одного преступления ? А может, единственного самого бесстрашного поступка ?Спектакль – исповедь, спектакль – зеркало, спектакль – размышление.", everyAct[4].name, everyAct[4].role, everyAct[4].reward, everyAct[4].workExp, everyAct[4].add, everyAct[2].name, everyAct[2].role, everyAct[2].reward, everyAct[2].workExp, everyAct[2].add, 15000, 12.5);
			break;
		case 4:
			show(&gen, "Девичник", "Шесть подруг собираются вместе – шесть молодых, красивых, незамужних женщин! Они давно не виделись, да и повод есть: одна из них беременна и собирается рожать. Изначально вечеринка планировалась как милые дамские посиделки: лёгкий алкоголь, лёгкие закуски, а также воспоминания, поздравления, сплетни и упрёки – всего понемножку. Но что-то пошло не так...Трогательно доверчивые, шокирующе откровенные, вызывающе сексапильные, смешные, занудные, сильные, слабые – женщины на сцене предстанут во всех своих обликах.И, конечно же, в спектакле есть мужчины – ведь все женские проблемы в конечном итоге сводятся к ним!", everyAct[1].name, everyAct[1].role, everyAct[1].reward, everyAct[1].workExp, everyAct[1].add, everyAct[3].name, everyAct[3].role, everyAct[3].reward, everyAct[3].workExp, everyAct[3].add, 13000, 10.5);
			break;
		case 5:
			show(&gen, "В омуте", "Я не хочу жить во снах, но почему там мне лучше? Где моя реальность? Я сплю или существую? Я существую в своих снах. Только там я могу жить той жизнью, которую люблю, жизнью, которая мне нравится – с теми, кто никогда не сможет от меня уйти… Все в моей жизни уходят… И как это назвать?..", everyAct[4].name, everyAct[4].role, everyAct[4].reward, everyAct[4].workExp, everyAct[4].add, everyAct[0].name, everyAct[0].role, everyAct[0].reward, everyAct[0].workExp, everyAct[0].add, 15000, 12.5);
			break;
		case 6:
			system("cls");
			printf("Введите индекс актера: ");
			int actforfind;
			scanf_s("%d", &actforfind);
			for (int i = 0; i < allActs; i++) {
				if (actforfind == everyAct[i].index) {
					printf("Имя и фамилия: %s\n", everyAct[actforfind].name);
					printf("Роль: %s\n", everyAct[actforfind].role);
					printf("Награда: %s\n", everyAct[actforfind].reward);
					printf("Стаж работы: %s\n", everyAct[actforfind].workExp);
					printf("Описание: %s\n", everyAct[actforfind].add);
					cin.get(); cin.get();
				}
			}
			break;
		case 0:
			exit(1);
		}
	}
}
