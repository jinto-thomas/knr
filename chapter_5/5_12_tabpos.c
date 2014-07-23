#define YES 1
#define MAXLINE 100

//tabpos : determines whether the pos is at tab stop

int tabpos(int pos, char *tab)
{
	if (pos > MAXLINE)
		return YES;
	else
		return tab[pos];
}
