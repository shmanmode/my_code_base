#include<stdio.h>
typedef enum menuchoice
{
	Exit=0, AddNewRecord, PrintAllRecords
}MENUCHOICE;
#pragma pack(1)
struct emp
{
	int empno;
	char name[10];
	float sal;
};
void AcceptEmpInfo(struct emp *e1);
void DisplayEmpInfo(const struct emp *e1);
void WriteEmpDataIntoTextFile();
void ReadEmpDataFromTextFile();
int MenuChoice();
int main(void)
{
	MENUCHOICE choice;
	do
	{
		choice= MenuChoice();
		switch(choice)
		{
			case AddNewRecord : // add new emp
					WriteEmpDataIntoTextFile();
					break;
			case PrintAllRecords : // print all records
					ReadEmpDataFromTextFile();
					break;
			case Exit: exit(0);

			default: printf("\n invalid choice");
					continue;
		}
		printf("\n Enter 1 to continue 0 to exit");
	}while(choice!=0);
	return 0;
}
void AcceptEmpInfo(struct emp *e1)
{
	fprintf(stdout,"\n Enter EmpInfo :: ");

	fprintf(stdout,"\n Enter EmpNo :: ");
	fscanf(stdin,"%d", &e1->empno); // scanf("%d", &(*e1).empno);

	fprintf(stdout,"\n Enter EmpName :: ");
	fscanf(stdin,"%*c%s", &e1->name);

	fprintf(stdout,"\n Enter EmpSal :: ");
	fscanf(stdin,"%f", &e1->sal);

	return;
}
void DisplayEmpInfo(const struct emp *e1)
{
	fprintf(stdout,"%-8d%-10s%-6.2f\n", e1->empno, e1->name, e1->sal);
	return;
}
void WriteEmpDataIntoTextFile()
{
		FILE *fpEmpWrite=NULL;
		struct emp e;

		if ((fpEmpWrite=fopen("EMPINFO.dat","ab"))==NULL)
			printf("\n unable to open file for writing");
		else
		{
			AcceptEmpInfo(&e);
			// write data into text file
			//fprintf(fpEmpWrite,"%d\t%s\t%f\n", e.empno, e.name, e.sal);

			fwrite(&e, sizeof(struct emp), 1, fpEmpWrite);


			fcloseall(); // fclose(fpEmpWrite);
			printf("\n record is added to file");

		}
		return;
}
void ReadEmpDataFromTextFile()
{
	FILE *fpEmpRead=NULL;
	int cnt=0;
	struct emp e;

	if ((fpEmpRead=fopen("EMPINFO.dat","rb"))==NULL)
		printf("\n unable to open file for reading");
	else
	{
		// only 1st record from file
		fprintf(stdout, "\n EmpNo   Name   Sal\n");
		// read data from text file

		//fscanf(fpEmpRead,"%d\t%s\t%f\n", &e.empno, e.name, &e.sal);
		// read 1st record from binary file

		//fread(&e, sizeof(struct emp), 1, fpEmpRead);
		//DisplayEmpInfo(&e);

		// read all records
		fprintf(stdout, "\n EmpNo   Name   Sal\n");
		cnt=0;
		while( fread(&e, sizeof(struct emp), 1, fpEmpRead))
		{
			DisplayEmpInfo(&e);
			cnt++;
		}
		fcloseall(); // fclose(fpEmpWrite);
		printf("\n%d records read from file", cnt);
	}
	return;
}
int MenuChoice()
{
	int choice;
	printf("\n 1. Add New Record \n 2. Print All Records \n 0. Exit ");
	printf("\n Enter Your choice :: ");
	scanf("%d", &choice);
	return choice;
}
