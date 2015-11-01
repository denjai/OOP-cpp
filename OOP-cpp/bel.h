#pragma once
struct BelRow
{
	char name[12];
	char fam[15];
	unsigned long tel;
};

class Bel
{
	BelRow table[100];
	int tableEnd;
public:
	Bel();
	~Bel();
	int append(char* name, char* fam, unsigned long tel);
	int append(BelRow* aRow);
	BelRow* findBelRowByName(char* name);
};
