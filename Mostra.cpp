#include "Mostra.h"
#include "Grafo.h"
#include <iostream>
using namespace std;

// CREAZIONE DELLA STANZA MOSTRA ,IMPLEMENTAZIONE DI Mostra.h , messa a video dei menu delle varie galleria
//attraverso l'utilizzo del grafo per spostarsi da una galleria all'altra
Mostra::Mostra()
{
    creamostra();
}

void Mostra::creamostra(){


    titoli[0]="Galleria A: Percorso Architettonico .";
    descrizioni[0]="Il percorso Architettonico comprende una serie di esposizioni di notevole importanza. Per maggiori descrizioni sulle maggiori opere, consultare la guida elettronica";

    titoli[1]="Palazzo Strozzi - Firenze";
    descrizioni[1]="Palazzo Strozzi a Firenze e' uno dei piu' bei palazzi rinascimentali italiani. Di mole imponente (furono distrutti ben 15 edifici per fargli posto), si trova fra le omonime via Strozzi e piazza Strozzi, e via Tornabuoni, con tre grandiosi portali identici, su altrettanti lati. Vero e proprio capolavoro dell'architettura civile fiorentina del Rinascimento, fu iniziato per volere di Filippo Strozzi, un ricco mercante appartenente a una delle famiglie piu' facoltose di Firenze, per tradizione ostili alla fazione dei Medici.";

    titoli[2]="Cupola di San Pietro";
    descrizioni[2]="E' una delle piu' vaste coperture in muratura mai costruite; presenta un diametro interno di circa 42 metri e porta l'altezza complessiva della basilica, dalla base fino alla sommita' della lanterna, ad oltre 130 metri. Le sue forme, espressione del passaggio dall'architettura rinascimentale a quella barocca, rispecchiano in buona parte il disegno di Michelangelo Buonarroti, che vi lavoro' fino all'anno della sua morte, avvenuta nel 1564. Costituisce inoltre uno dei simboli piu' celebri della citta' di Roma, dove viene popolarmente denominata Cupolone, nonche' uno dei punti piu' panoramici della citta', con vista a 360 gradi sull'intera Città del Vaticano e su quasi tutti i quartieri del centro storico di Roma.I";

    titoli[3]="Teatro Olimpico-Vicenza";
    descrizioni[3]="Il Teatro Olimpico e' un teatro progettato dall'architetto rinascimentale Andrea Palladio nel 1580 e situato a Vicenza. E' il primo e piu' antico teatro stabile coperto dell'epoca moderna.La realizzazione del teatro, all'interno di un preesistente complesso medievale, venne commissionata a Palladio dall'Accademia Olimpica per la messa in scena di commedie classiche";

    titoli[4]="Palazzo Castellesi-Roma";
    descrizioni[4]="l palazzo Castellesi, poi palazzo Giraud-Torlonia, e' un importante edificio rinascimentale di Roma. l palazzo fu realizzato all'inizio del XVI secolo per il cardinale Adriano Castellesi o Castelleschi, da Corneto(Tarquinia) importante dignitario della corte papale";

    titoli[5]="Porta Capuana-Napoli";
    descrizioni[5]="L'opera, in stile rinascimentale, venne commissionata all'architetto-intagliatore Giuliano da Maiano, che si ispiro' in un certo senso ai modelli degli archi di trionfo di tradizione romana, senza trascurare l'effettiva funzione difensiva che si prospettava per il complesso di fortificazioni (erano in corso avvenimenti che in seguito portarono alla guerra del 1494)";

    titoli[6]="Galleria B: Percorso delle pitture.";
    descrizioni[6]=".In questa galleria potrete ammirare alcuni tra i piu' grandi dipinti dell'epoca rinascimentale. Per ulteriori dettagli, consultare la guida elettronica";

    titoli[7]="La Gioconda-Leonardo da Vinci";
    descrizioni[7]="La Gioconda, nota anche come Monna Lisa, e' un dipinto a olio su tavola di legno di pioppo realizzato da Leonardo da Vinci, dalle dimensioni di 77 cm d'altezza x 53 cm di base e 13 mm di spessore, databile al 1503-1506 circa e conservato nel Museo del Louvre di Parigi.Opera iconica ed enigmatica della pittura mondiale, si tratta sicuramente del ritratto piu' celebre della storia nonche' di una delle opere d'arte piu' note in assoluto. Il sorriso impercettibile del soggetto, col suo alone di mistero, ha ispirato tantissime pagine di critica, letteratura, opere di immaginazione e persino studi psicoanalitici; sfuggente, ironica e sensuale, la Monna Lisa e' stata di volta in volta amata e idolatrata ma anche derisa o aggredita.";

    titoli[8]="Ultima Cena-Leonardo da Vinci";
    descrizioni[8]="L'Ultima Cena e' un dipinto parietale a tempera grassa (e forse altri leganti oleosi) su intonaco(460×880 cm) di Leonardo da Vinci, databile al 1495-1498 e' conservato nell'ex-refettorio rinascimentale del convento adiacente al santuario di Santa Maria delle Grazie a Milano.Si tratta della piu' famosa rappresentazione dell'Ultima Cena, capolavoro di Leonardo e del Rinascimento italiano in generale. Nonostante cio', l'opera,a causa della singolare tecnica sperimentale utilizzata da Leonardo incompatibile con l'umidità dell'ambiente ,versa da secoli in un cattivo stato di conservazione, che e' stato almeno fermato e per quanto possibile migliorato nel corso di uno dei piu' lunghi e capillari restauri della storia, durato dal 1978 al 1999 con le tecniche piu' all'avanguardia del settore.";

    titoli[9]="Nascita di Venere- Botticelli";
    descrizioni[9]="La Nascita di Venere e' un dipinto a tempera su tela di lino (172 cm × 278 cm) di Sandro Botticelli, databile al 1482-1485 circa. Realizzata per la villa medicea di Castello, l'opera d'arte e' attualmente conservata nella Galleria degli Uffizi a Firenze. Opera iconica del Rinascimento italiano, spesso assunta come simbolo della stessa Firenze e della sua arte, faceva forse anticamente pendant con l'altrettanto celebre Primavera sempre di Botticelli, con cui condivide la provenienza storica, il formato e alcuni riferimenti filosofici. Rappresenta una delle creazioni piu' elevate dell'estetica del pittore fiorentino, oltre che un ideale universale di bellezza femminile.";

    titoli[10]="Giudizio Universale- Michelangelo";
    descrizioni[10]="Il Giudizio universale (1535-1541) e' un affresco di Michelangelo Buonarroti, realizzato tra il 1535 e il 1541 su commissione di papa Paolo III Farnese per decorare la parete dietro l'altare della Cappella Sistina (Musei Vaticani, Roma). Si tratta di una delle piu' grandiose rappresentazioni della parusia, ovvero dell'evento dell'ultima venuta alla fine dei tempi del Cristo per inaugurare il Regno di Dio, nonche' il piu' grande capolavoro dell'arte occidentale in generale.";

    titoli[11]="Adorazione dei Magi-Leonardo da Vinci";
    descrizioni[11]="'Adorazione dei Magi e' un dipinto a olio su tavola e tempera grassa (246x243 cm) di Leonardo da Vinci, realizzato tra il 1481 e il 1482. Viene conservato nella Galleria degli Uffizi a Firenze.";

    titoli[12]="Galleria C: Percorso sculture";
    descrizioni[12]="In questa galleria troverete alcune tra le piu' grandi sculture rinascimentali.Per ulteriori informazioni consultare la guida elettronica.";

    titoli[13]="David-Michelangelo";
    descrizioni[13]="Il David e' una celebre scultura, realizzata in marmo (altezza 517 cm incluso il basamento di 107 cm) da Michelangelo Buonarroti, databile tra il 1501 e l'inizio del 1504 e conservato nella Galleria dell'Accademia a Firenze. Largamente considerato un capolavoro della scultura mondiale, e' uno degli emblemi del Rinascimento, nonche' simbolo di Firenze e dell'Italia all'estero.Il David ritrae l'eroe biblico nel momento in cui si appresta ad affrontare Golia; originariamente la statua fu collocata in piazza della Signoria come simbolo della Repubblica fiorentina, vigile e vittoriosa contro i nemici.Il David e' da sempre considerato l'ideale perfetto di bellezza maschile nell'arte, così come la Venere del Botticelli e' considerata il canone di bellezza femminile. Artisti ed esperti d'arte ritengono che il David sia l'oggetto artistico piu' bello mai creato dall'uomo.";

    titoli[14]="La Pieta' Vaticana-Michelangelo ";
    descrizioni[14]="La Pietà vaticana e' una scultura marmorea (altezza 174 cm, larghezza 195 cm, profondità 69 cm) di Michelangelo Buonarroti, databile al 1497-1499 e conservata nella basilica di San Pietro nella Città del Vaticano, a Roma. Si tratta del primo capolavoro dell'allora poco piu' che ventenne Michelangelo, considerata una delle maggiori opere d'arte che l'Occidente abbia mai prodotto. È anche l'unica opera da lui firmata, sulla fascia a tracolla che regge il manto della Vergine: MICHEL.A[N]GELVS BONAROTVS FLORENT[INVS] FACIEBAT (Lo fece il fiorentino Michelangelo Buonarroti).";

    titoli[15]="Mose'-Michelangelo ";
    descrizioni[15]="Il Mose' e' una scultura marmorea (altezza 235 cm) di Michelangelo, databile al 1513-1515 circa, ritoccata nel 1542 e conservata nella basilica di San Pietro in Vincoli a Roma, nel complesso statuario concepito quale Tomba di Giulio II (in effetti il papa e' sepolto in San Pietro insieme allo zio Sisto IV). Tra le prime scolpite per il progetto del mausoleo del papa, fu anche l'unica tra quelle pensate fin dall'inizio ad essere usata nel ridimensionato risultato finale, che vide la luce solo dopo quarant'anni di tormentate vicende.";

    titoli[16]="Madonna della scala-Michelangelo";
    descrizioni[16]="La Madonna della Scala e' un bassorilievo marmoreo (55,5x40 cm) di Michelangelo Buonarroti, databile al 1491 circa e conservata a Casa Buonarroti a Firenze.";

    titoli[17]="Ercole e Caco-Baccio Bandinelli ";
    descrizioni[17]="L'Ercole e Caco e' una scultura in marmo di Baccio Bandinelli situata in Piazza della Signoria davanti a Palazzo Vecchio e a fianco di quella che oggi e' una copia del David di Michelangelo, a Firenze. L'opera e' posta su un basamento con dei busti di fauno scolpiti a bassorilievo e reca, in latino, la firma dell'autore. Il tema allegorico e' quello della forza e dell'ingegno di Ercole che sconfiggono la malvagità di Caco, episodio narrato da Virgilio e altri poeti nella saga delle Dodici fatiche di Ercole.";

    titoli[18]="Galleria D: Percorso sui migliori artisti rinascimentali";
    descrizioni[18]="In questa galleria verrai guidato nell'esplorazione dei migliori artisti rinascimentali. Per maggiori descrizioni sui reperti presenti, consultare la guida elettronica";

    titoli[19]="Leonardo Da Vinci";
    descrizioni[19]="  Uomo d'ingegno e talento universale del Rinascimento, incarno' in pieno lo spirito della sua epoca, portandolo alle maggiori forme di espressione nei piu' disparati campi dell'arte e della conoscenza, Si occupo' di architettura e scultura, fu disegnatore, trattatista, scenografo, anatomista, musicista, progettista e inventore. E' considerato uno dei piu' grandi geni dell'umanita'..";

    titoli[20]="Michelangelo Buonarroti.";
    descrizioni[20]="Protagonista del Rinascimento italiano, fu riconosciuto già al suo tempo come uno dei maggiori artisti di sempre Fu nell'insieme un artista tanto geniale quanto irrequieto. Il suo nome e' collegato a una serie di opere che lo hanno consegnato alla storia dell'arte, alcune delle quali sono conosciute in tutto il mondo, ";

    titoli[21]="Donatello.";
    descrizioni[21]="Donatello, vero nome Donato di Niccolò di Betto Bardi (Firenze, 1386 – Firenze, 13 dicembre 1466), e' stato uno scultore, pittore e orafo italiano. Con la sua lunghissima carriera fu uno dei tre padri del Rinascimento fiorentino, assieme a Filippo Brunelleschi e Masaccio, oltre che uno dei piu' celebrati scultori di tutti i tempi.";

    titoli[22]="Caravaggio.";
    descrizioni[22]="Michelangelo Merisi, o Amerighi, noto come il Caravaggio (Milano, 29 settembre 1571 Porto Ercole, 18 luglio 1610), e' stato un pittore italiano I suoi dipinti, che combinano un'analisi dello stato umano, sia fisico, sia emotivo, con uno scenografico uso della luce, hanno avuto forte influenza sulla pittura barocca.";

    titoli[23]="Filippo Brunelleschi";
    descrizioni[23]="Filippo Brunelleschi, per esteso Filippo di ser Brunellesco Lapi(Firenze, 1377 – Firenze, 15 aprile 1446), e' stato un architetto, ingegnere, scultore, matematico, orafo e scenografo italiano del Rinascimento Considerato il primo ingegnere e progettista dell'era moderna,Brunelleschi fu uno dei tre primi grandi iniziatori del Rinascimento fiorentino con Donatello e Masaccio";

    titoli[24]="Entrata nella mostra rinascimentale";
    descrizioni[24]="Benvenuto nella mostra Rinascimentale, qui potrai trovare vari percordi artistici dell'epoca e uno sguardo agli artisti del movimento artistico-culturale piu' famoso della storia. ";

    StanzaMostra stanza;
    stanza.setdescrizione(descrizioni[24]);
    stanza.settitolo(titoli[24]);
    typename Grafo<StanzaMostra,unsigned char>::nodo nodo1,nodo2,nodo3,nodo4,nodo5,nodo6,nodo7,nodo8,nodo9,nodo10,nodo11,nodo12,nodo13,nodo14,
    nodo15,nodo16,nodo17,nodo18,nodo19,nodo20,nodo21,nodo22,nodo23,nodo24,nodo0;

    grafomostra.insnodo(nodo24);
    grafomostra.scrivinodo(stanza,nodo24);

    // setto la stanza iniziale e corrente nel grafo.
    grafomostra.insnodo(stanzacorrente);
    grafomostra.insnodo(stanzainiziale);
    setstanzacorrente(nodo24);
    grafomostra.scrivinodo(stanza,stanzainiziale);

    stanza.setdescrizione(descrizioni[0]);
    stanza.settitolo(titoli[0]);
    grafomostra.insnodo(nodo0);
    grafomostra.scrivinodo(stanza,nodo0);


    stanza.setdescrizione(descrizioni[6]);
    stanza.settitolo(titoli[6]);
    grafomostra.insnodo(nodo6);
    grafomostra.scrivinodo(stanza,nodo6);


    stanza.setdescrizione(descrizioni[12]);
    stanza.settitolo(titoli[12]);
    grafomostra.insnodo(nodo12);
    grafomostra.scrivinodo(stanza,nodo12);


    stanza.setdescrizione(descrizioni[18]);
    stanza.settitolo(titoli[18]);
    grafomostra.insnodo(nodo18);
    grafomostra.scrivinodo(stanza,nodo18);

    stanza.setdescrizione(descrizioni[1]);
    stanza.settitolo(titoli[1]);
    grafomostra.insnodo(nodo1);
    grafomostra.scrivinodo(stanza,nodo1);

    stanza.setdescrizione(descrizioni[2]);
    stanza.settitolo(titoli[2]);
    grafomostra.insnodo(nodo2);
    grafomostra.scrivinodo(stanza,nodo2);

    stanza.setdescrizione(descrizioni[3]);
    stanza.settitolo(titoli[3]);
    grafomostra.insnodo(nodo3);
    grafomostra.scrivinodo(stanza,nodo3);

    stanza.setdescrizione(descrizioni[4]);
    stanza.settitolo(titoli[4]);
    grafomostra.insnodo(nodo4);
    grafomostra.scrivinodo(stanza,nodo4);

    stanza.setdescrizione(descrizioni[5]);
    stanza.settitolo(titoli[5]);
    grafomostra.insnodo(nodo5);
    grafomostra.scrivinodo(stanza,nodo5);

    stanza.setdescrizione(descrizioni[7]);
    stanza.settitolo(titoli[7]);
    grafomostra.insnodo(nodo7);
    grafomostra.scrivinodo(stanza,nodo7);

    stanza.setdescrizione(descrizioni[8]);
    stanza.settitolo(titoli[8]);
    grafomostra.insnodo(nodo8);
    grafomostra.scrivinodo(stanza,nodo8);

    stanza.setdescrizione(descrizioni[9]);
    stanza.settitolo(titoli[9]);
    grafomostra.insnodo(nodo9);
    grafomostra.scrivinodo(stanza,nodo9);

    stanza.setdescrizione(descrizioni[10]);
    stanza.settitolo(titoli[10]);
    grafomostra.insnodo(nodo10);
    grafomostra.scrivinodo(stanza,nodo10);

    stanza.setdescrizione(descrizioni[11]);
    stanza.settitolo(titoli[11]);
    grafomostra.insnodo(nodo11);
    grafomostra.scrivinodo(stanza,nodo11);

    stanza.setdescrizione(descrizioni[13]);
    stanza.settitolo(titoli[13]);
    grafomostra.insnodo(nodo13);
    grafomostra.scrivinodo(stanza,nodo13);

    stanza.setdescrizione(descrizioni[14]);
    stanza.settitolo(titoli[14]);
    grafomostra.insnodo(nodo14);
    grafomostra.scrivinodo(stanza,nodo14);

    stanza.setdescrizione(descrizioni[15]);
    stanza.settitolo(titoli[15]);
    grafomostra.insnodo(nodo15);
    grafomostra.scrivinodo(stanza,nodo15);

    stanza.setdescrizione(descrizioni[16]);
    stanza.settitolo(titoli[16]);
    grafomostra.insnodo(nodo16);
    grafomostra.scrivinodo(stanza,nodo16);

    stanza.setdescrizione(descrizioni[17]);
    stanza.settitolo(titoli[17]);
    grafomostra.insnodo(nodo17);
    grafomostra.scrivinodo(stanza,nodo17);

    stanza.setdescrizione(descrizioni[19]);
    stanza.settitolo(titoli[19]);
    grafomostra.insnodo(nodo19);
    grafomostra.scrivinodo(stanza,nodo19);

    stanza.setdescrizione(descrizioni[20]);
    stanza.settitolo(titoli[20]);
    grafomostra.insnodo(nodo20);
    grafomostra.scrivinodo(stanza,nodo20);

    stanza.setdescrizione(descrizioni[21]);
    stanza.settitolo(titoli[21]);
    grafomostra.insnodo(nodo21);
    grafomostra.scrivinodo(stanza,nodo21);

    stanza.setdescrizione(descrizioni[22]);
    stanza.settitolo(titoli[22]);
    grafomostra.insnodo(nodo22);
    grafomostra.scrivinodo(stanza,nodo22);

    stanza.setdescrizione(descrizioni[23]);
    stanza.settitolo(titoli[23]);
    grafomostra.insnodo(nodo23);
    grafomostra.scrivinodo(stanza,nodo23);

    // Inserisco gli archi fra le stanze

    grafomostra.insarco(nodo0,nodo6);
    grafomostra.insarco(nodo6,nodo0);


    grafomostra.insarco(nodo6,nodo12);
    grafomostra.insarco(nodo12,nodo0);


    grafomostra.insarco(nodo12,nodo18);
    grafomostra.insarco(nodo18,nodo12);


    grafomostra.insarco(nodo0,nodo18);
    grafomostra.insarco(nodo18,nodo0);



    grafomostra.insarco(nodo24,nodo0);
    grafomostra.insarco(nodo0,nodo24);


    grafomostra.insarco(nodo24,nodo6);
    grafomostra.insarco(nodo6,nodo24);



    grafomostra.insarco(nodo24,nodo12);
    grafomostra.insarco(nodo12,nodo24);



    grafomostra.insarco(nodo24,nodo18);
    grafomostra.insarco(nodo18,nodo24);

    grafomostra.insarco(nodo0,nodo1);
    grafomostra.insarco(nodo1,nodo0);


    grafomostra.insarco(nodo0,nodo2);
    grafomostra.insarco(nodo2,nodo0);


    grafomostra.insarco(nodo3,nodo0);
    grafomostra.insarco(nodo0,nodo3);


    grafomostra.insarco(nodo0,nodo4);
    grafomostra.insarco(nodo4,nodo0);


    grafomostra.insarco(nodo0,nodo5);
    grafomostra.insarco(nodo5,nodo0);


    grafomostra.insarco(nodo6,nodo7);
    grafomostra.insarco(nodo7,nodo6);


    grafomostra.insarco(nodo6,nodo8);
    grafomostra.insarco(nodo8,nodo6);


    grafomostra.insarco(nodo6,nodo9);
    grafomostra.insarco(nodo9,nodo6);


    grafomostra.insarco(nodo6,nodo10);
    grafomostra.insarco(nodo10,nodo6);


    grafomostra.insarco(nodo6,nodo11);
    grafomostra.insarco(nodo11,nodo6);


    grafomostra.insarco(nodo12,nodo13);
    grafomostra.insarco(nodo13,nodo12);


    grafomostra.insarco(nodo12,nodo14);
    grafomostra.insarco(nodo14,nodo12);


    grafomostra.insarco(nodo12,nodo15);
    grafomostra.insarco(nodo15,nodo12);


    grafomostra.insarco(nodo12,nodo16);
    grafomostra.insarco(nodo16,nodo12);


    grafomostra.insarco(nodo12,nodo17);
    grafomostra.insarco(nodo17,nodo12);


    grafomostra.insarco(nodo18,nodo19);
    grafomostra.insarco(nodo19,nodo18);


    grafomostra.insarco(nodo18,nodo20);
    grafomostra.insarco(nodo20,nodo18);


    grafomostra.insarco(nodo18,nodo21);
    grafomostra.insarco(nodo21,nodo18);


    grafomostra.insarco(nodo18,nodo22);
    grafomostra.insarco(nodo22,nodo18);


    grafomostra.insarco(nodo18,nodo23);
    grafomostra.insarco(nodo23,nodo18);


}

typename Grafo<StanzaMostra,unsigned char>::nodo Mostra::getstanzacorrente()
{

    return(stanzacorrente);

}

typename Grafo<StanzaMostra,unsigned char>::nodo Mostra::getiniziale()
{

    return(stanzainiziale);

}

void Mostra::setstanzacorrente(typename Grafo<StanzaMostra,unsigned char>::nodo s)
{

    stanzacorrente = s;

}

Lista<typename Grafo<StanzaMostra,unsigned char>::nodo> Mostra::getstanzeadiacenti()
{
  return grafomostra.adiacenti(stanzacorrente);
}

//Implementazione di Mostra.h aggiunta da Albano Giovanni


// Operatori Aggiunti da Graziano Montanaro
StanzaMostra Mostra::leggiStanza(typename Grafo<StanzaMostra, unsigned char>::nodo stanza)
{
    return grafomostra.legginodo(stanza);
}

void Mostra::scriviStanza(typename Grafo<StanzaMostra, unsigned char>::nodo stanza, const StanzaMostra& info)
{
    grafomostra.scrivinodo(info, stanza);
}
