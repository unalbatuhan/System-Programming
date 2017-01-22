#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/mman.h>
main () {
char bilgi [3000], bilgi_mem[44];
char path[30], path_mem[30], *e[8];
int fd, pid, 1 = 1;
int status, hata;
char *bolum[] = {
"Program boyutu (sayfa) :",
"bellek parcalari (sayfa) :",
"paylasilan sayfa sayisi :",
"kod olan sayfa sayisi :",
"kutuphane sayfa sayisi :",
"veri / yigin sayfa sayisi",
"kotu sayfa sayisi"
};
/* Process kontrol bilgileri / proc dizininin altında
pid numaralarına göre düzenlenmis alt dizinlerde status dosyasında tanımlıdır.
*/
pid = fork();  /* process olustur*/
if (pid == 0) /* Cocuk process*/
{
sprintf(path, "/proc/%d/status", getpid());
fd = open(path,0_RONLY); /* Statu dosyası acılıyor */
if (fd == -1)
printf("proc dosyasina erisilemedi\n");
read(fd, bilgi, 3000);
printf(" ###### Process statu bilgileri #####\n ");
printf(bilgi);
printf(\n);
/* Process in bellek bilgileri aynı dizinde statm dosyasında yer alır */
sprintf(path_mem, "/proc/%d/statm", getpid());
fd = open(path_mem, 0_RONLY);
if (fd == -1)
printf("proc dosyasına erisilemedi\n");
read(fd,bilgi_mem,44);
printf("#### Process tarafından tutulan ##### " "bellek bilgileri ########\n");
e[0] = strtok(bilgi_mem, " ");
printf("%s %s\n", bolum[0], e[0]);
while (e[1] = strtok(NULL, ""))
{
printf("%s %s\n ", bolum[1], e[1]);
1++;
}
cloese(fd);
}
else                                /* Cocuk process in sonlanmasını bekliyor */
waitpid(-1, &status, 0);

}
