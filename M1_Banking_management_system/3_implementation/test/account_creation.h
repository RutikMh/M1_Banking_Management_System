int main()
{
	int i, a, b, choice;
	int passwordlength;

	gotoxy(20, 3);


	printf("WELCOME TO BANK ACCOUNT SYSTEM\n\n");
	gotoxy(18, 5);

	printf("**********************************");
	gotoxy(25, 7);

	gotoxy(20, 10);
	printf("1.... CREATE A BANK ACCOUNT");

	gotoxy(20, 12);
	printf("2.... ALREADY A USER? SIGN IN");
	gotoxy(20, 14);
	printf("3.... EXIT\n\n");

	printf("\n\nENTER YOUR CHOICE..");

	scanf("%d", &choice);

	switch (choice) {
	case 1:
		system("cls");
		printf("\n\n USERNAME 50 CHARACTERS MAX!!");
		printf("\n\n PASSWORD 50 CHARACTERS MAX!!");
		account();
		break;

	case 2:
		login();
		break;

	case 3:
		exit(0);
		break;
			
	default: defaultCase();
		getch();
	}
}


void account(void)
{
	char password[20];
	int passwordlength, i, seek = 0;
	char ch;
	FILE *fp, *fu;
	struct pass u1;
	struct userpass p1;

	struct userpass u2;

	
	fp = fopen("username.txt", "ab");


	system("cls");
	printf("\n\n!!!!!CREATE ACCOUNT!!!!!");

	printf("\n\nFIRST NAME..");
	scanf("%20s", &u1.fname);

	printf("\n\n\nLAST NAME..");
	scanf("%20s", &u1.lname);

	printf("\n\nFATHER's NAME..");
	scanf("%20s", &u1.fathname);

	printf("\n\nMOTHER's NAME..");
	scanf("%20s", &u1.mothname);

	printf("\n\nADDRESS..");
	scanf("%50s", &u1.address);

	printf("\n\nACCOUNT TYPE");
	scanf("%20s", &u1.typeaccount);

	printf("\n\nDATE OF BIRTH..");
	printf("\nDATE-");
	scanf("%d", &u1.date);
	printf("\nMONTH-");
	scanf("%d", &u1.month);
	printf("\nYEAR-");
	scanf("%d", &u1.year);

	printf("\n\nADHAR NUMBER");
	scanf("%20s", u1.adharnum);

	printf("\n\nPHONE NUMBER");
	scanf("%15s", u1.pnumber);

	printf("\n\nUSERNAME.. ");
	scanf("%10s", &u1.username);

	printf("\n\nPASSWORD..");

	
	for (i = 0; i < 50; i++) {
		ch = getch();
		if (ch != 13) {
			password[i] = ch;
			ch = '*';
			printf("%c", ch);
		}
		else
			break;
	}


	fwrite(&u1, sizeof(u1),
		1, fp);

	
	fclose(fp);

	// Calling another function
	// after successful creation
	// of account
	accountcreated();
}