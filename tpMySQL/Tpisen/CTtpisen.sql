
# -----------------------------------------------------------------------
# service
# -----------------------------------------------------------------------
drop table if exists service;

CREATE TABLE service
(
		            num_service INTEGER,
		            nom_service VARCHAR (20) NOT NULL,
			    lieu VARCHAR(30) NOT NULL,
    PRIMARY KEY(num_service) )
    ENGINE=INNODB;

# -----------------------------------------------------------------------
# employe
# -----------------------------------------------------------------------

drop table if exists employe;

CREATE TABLE employe
(
		            numemp INTEGER,
		            nom VARCHAR (20) NOT NULL,
		            fonction VARCHAR (10) NOT NULL,
			    numemp_sup INTEGER,
		            date_embauche DATE NOT NULL,
			    salaire NUMERIC(7,2) NOT NULL,
			    comm NUMERIC(7,2),
		            num_service INTEGER NOT NULL,
    PRIMARY KEY(numemp),
    FOREIGN KEY (num_service) REFERENCES service (num_service),
    FOREIGN KEY (numemp_sup) REFERENCES employe(numemp) )
    ENGINE=INNODB;



# 