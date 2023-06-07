#include "time.h"
#include "common.h"
void display() {
		printf("/n Server timeout...%u seconds passed:\n  30 seconds:\n",clock());
}
int main()
{
clock_t start, now;
start = time(NULL);
int readfd; /* дескриптор для чтения из FIFO */
int n;
char buff[MAX_BUFF]; /* буфер для чтения данных из FIFO */
/* баннер */
printf("Hell  Server...\n\n");
//if (mknod(FIFO_NAME, S_IFIFO | 0666, 0) < 0)
//{
//fprintf(stderr, "%s: Невозможно создать FIFO (%s)\n",
//__FILE__, strerror(errno));
//exit(-1);
//}
/* откроем FIFO на чтение */
if ((readfd = open(FIFO_NAME, O_RDONLY)) < 0)
{
fprintf(stderr, "%s: Невозможно открыть FIFO (%s)\n",
__FILE__, strerror(errno));
exit(-2);
}
for(;;)
{
while ((n = read(readfd, buff, MAX_BUFF)) > 0)
{
if (write(1, buff, n) != n)
{
fprintf(stderr, "%s: Ошибка вывода (%s)\n",
__FILE__, strerror(errno));
}
sleep(5);
}
now=time(NULL);
if (now-start>30)
{
display();
return 0;
}
}
close(readfd); /* закроем FIFO */
/* удалим FIFO из системы */
if (unlink(FIFO_NAME) < 0)
{
fprintf(stderr, "%s: Невозможно удалить FIFO (%s)\n",
__FILE__, strerror(errno));
exit(-4);
}
exit(0);
}


