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

void accountcreated(void)
{
	int i;
	char ch;
	system("cls");
	printf(
		"PLEASE WAIT....\n\nYOUR DATA IS PROCESSING....");
	for (i = 0; i < 200000000; i++) {
		i++;
		i--;
	}

	gotoxy(30, 10);

	printf("ACCOUNT CREATED SUCCESSFULLY....");
	gotoxy(0, 20);

	printf("Press enter to login");

	getch();
	login();
}