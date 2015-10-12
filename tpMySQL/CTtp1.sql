create table CLIENT 
(
	numclient 	INTEGER 		PRIMARY KEY,
	nom 		INTEGER,
	rue 		VARCHAR(50),
	ville 		VARCHAR(25),
	codepostal 	INTEGER
)engine=innodb;
create table COMMANDE
(
	numcde 		INTEGER 		PRIMARY KEY,
	datecde 	DATE,
	numclient	INTEGER
	
)engine=innodb;
create table PRODUIT
(
	reference 	VARCHAR(25) 		PRIMARY KEY,
	design 		VARCHAR(100),
	qtte_stock	INTEGER,
	prix 		NUMERIC(5,5)
)engine=innodb;
create table COMMANDE_PRODUIT
(
	qtte_cde	INTEGER,
	numcde 		INTEGER,
	reference 	VARCHAR(25),
	PRIMARY KEY (numcde,reference)
)engine=innodb;
create table FACTURE
(
	numfact 	INTEGER			PRIMARY KEY,
	datefact	DATE,
	mode_regl	VARCHAR(6),
	numcde 		INTEGER
)engine=innodb;
create table FACTURE_PRODUIT
(
	qtte_fact	INTEGER,
	numfact 	INTEGER,
	reference 	VARCHAR(25),
	PRIMARY KEY (numfact,reference)
)engine=innodb;

alter table COMMANDE add FOREIGN KEY(numclient) REFERENCES CLIENT(numclient);
alter table COMMANDE_PRODUIT 
	add FOREIGN KEY	(numcde) 	REFERENCES COMMANDE (numcde),
	add FOREIGN KEY	(reference) REFERENCES PRODUIT(reference);
alter table FACTURE add FOREIGN KEY (numcde)	REFERENCES COMMANDE (numcde);
alter table FACTURE_PRODUIT
	add FOREIGN KEY (numfact)			REFERENCES FACTURE (numfact),
	add FOREIGN KEY (reference) 		REFERENCES PRODUIT (reference);