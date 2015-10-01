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
	numclient	INTEGER,
	FOREIGN KEY	numclient 		REFERENCES CLIENT(numclient),		
)engine=innodb;
create table PRODUIT
(
	reference 	INTEGER 		PRIMARY KEY,
	design 		VARCHAR(100),
	qtte_stock	INTEGER,
	prix 		NUMERIC(5,5),
)engine=innodb;
create table COMMANDE_PRODUIT
(
	FOREIGN KEY	numcde 			REFERENCES COMMANDE (numcde),
	FOREIGN KEY	reference 		REFERENCES PRODUIT(reference),
	PRIMARY KEY (numcde,reference),
	qtte_cde	INTEGER
)engine=innodb;
create table FACTURE
(
	numfact 	INTEGER			PRIMARY KEY,
	datefact	DATE,
	mode_regl	VARCHAR(6),
	FOREIGN KEY numcde			REFERENCES COMMANDE,
)engine=innodb;
create table FACTUE_PRODUIT
(
	FOREIGN KEY numfact			REFERENCES FACTURE,
	FOREIGN KEY reference 		REFERENCES PRODUIT,
	PRIMARY KEY (numfact,reference),
	qtte_fact	INTEGER,
)engine=innodb;
