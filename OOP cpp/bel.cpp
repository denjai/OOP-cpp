#include "stdafx.h"

Bel::Bel()
{
	tableEnd = 0;
}


Bel::~Bel()
{
}

int Bel::append(char* name, char* fam, unsigned long tel)
{
	if (tableEnd >= 100)
		return 0;
	strcpy_s(table[tableEnd].name, name );
	strcpy_s(table[tableEnd].fam, fam);
	table[tableEnd].tel = tel;
	tableEnd++;
	return 1;
}

int Bel::append(BelRow* aRow)
{
	if (tableEnd >= 100)
		return 0;
	memcpy(&table[tableEnd], aRow, sizeof(BelRow));
	tableEnd++;
	return 1;
}
BelRow* Bel::findBelRowByName(char* name)
{
	for (int i = 0; i < tableEnd; i++)
	{
		if (!strcmp(table[i].name, name))
		{
			return &table[i];
		}
	}
	return NULL;
}