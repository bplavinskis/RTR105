# RTR105
Studiju kursa Datormācība (pamatkurss) elektroniskā klade

Ctrl+Alt+T              -atver termināli  
Ctrl+Shift+T            -atver terminālī jaunu cilni  
Ctrl+L                  -atbrīve redzmajā termināļa logā skatu...  
^v                      -ļauj aplūkot iepriekšējās komandas  
Tab                     -atvieglo pilnā nosaukuma rakstīšanu
man komandas_nosaukums  -atver manuālu par komandu  
echo $0                 -kas ir sistēmas interpretators  
uname                   -kas ir OperētājSistēma  
uname -a                -visa informācija par OS  
whoami                  -kas es esmu  
who                     -kas te vēl ir (bez manis)  
pwd                     -kur es atrodos/esmu  
ls                      -kas man ir pieejams (parāda mapes, failus)  
ls -l                   -parāda obj. ar sekojošu informāciju (piem., vai tas ir fails, direktorija vai links)  
ls -a                   -parāda visus objektus (arī tos, kas ir paslēpti ar ".")  
ls -al                  -apvieno divas iepriekšējās ..  
cd                      -Change directory  
cd .                    -solis šeit/ solis uz vietas  
cd ..                   -iziet no esošās direktorijas (ja iespējams) (nevar iziet zem / )  
cd ~                    -iet uz mājas apgabalu
cd                      -mājas  
rmdir direktorijas_nos. -remove directory  
mkdir direktorijas_nos. -make directory  
history                 -termināļa vēsture  
exit                    -aizver/iziet no lietotnes (vai kā cita)  
lietotnes_nosaukums     -atver lietotni ar šo nosaukumu  
cat                     -lasa saturu  
history > history_20190912.txt =saglabā terminājā vēsturi teksta failā ...
touch aaa.txt           = izveido teksta failu "aaa"
nano aaa.txt            = teksta redaktros "nano" atver failu "aaa" tā rediģēšanai  
Ctrl+K                  = kopē rindu nano lietotnē  
Ctrl+U                  = ielīmē rindu ...  
Ctrl+x                  = saglabāizmaiņas  
cp aaa.txt bbb.txt      = kopē no "aaa" uz "bbb"  
mv                      = pārceļ no.. uz..  
mv *.txt                = pārceļ visus ".txt" failus  
rm bbb.txt              = remove "bbb.txt"
rm -fr ManaMape/        = forced remove "ManaMape/" (izdzēsīs direktoriju pat ja tā satur failus...)  
chmod                   = rediģē lietotāju tiesības  
ls /bin | grep ls       = atlasa to, kas satur -ls- iekš "/bin"  
$PATH                   = sistēmas mainigais, 
gcc fails.c		= kompilē C failu  
gcc fails.c -o fails	= C faila kompilējumu nosauc par "fails"  
/#include<biblioteka.h>	= C failā pievieno bibliotēju  
main(){}		= programmas galvenā daļa  
\\			= simb "\"  
\n			= *kursors jaunā rindā*
\r			= *kursors pārvietots uz rindas sākumu*  
\a			= *pīkstiens*
\'			= " ' "  
\"			= " " "  
\?			= "?"  
<<1			= pavirza bitus 1 vienību pa kreisi...  
git clone https...	= lejupladē reposetariju



Gnuplot:
load "skripta_vards.gp"     = ielādē un attēlo to, kas ir skriptā
plot [0:10] funkcija        = uztaisa funkcijas grfiku  
replot [0:10] cita_funkcija = uztaisa citu funkcijas grafiku pa virsu esošajam  
