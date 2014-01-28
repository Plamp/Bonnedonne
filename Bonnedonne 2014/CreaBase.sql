-- Creation de la base de donnée TCout , du PGI "Talcan-GestCout" permettant de gerer les commandes de produits et leurs utilisations.
drop database if exists TCout;
create database TCout;
use TCout;
-- Création de la table Fournisseur:
Create table Fournisseur(
num_Fourni smallint primary key,
nom_Fourni varchar(100),
tel_Fourni varchar(10) ,
ville_Fourni varchar(60) ,
rue_Fourni varchar(200) ,
cp_Fourni varchar(5) ,
courriel_Fourni varchar(70),
active bool default true; 
)engine=innodb;

-- Création de la table TypeProduit:
Create table TypeProduit(
num_TypeProduit tinyint primary key,
lib_typeProduit varchar(70)
)engine=innodb;


-- Création de la table Produit:

Create table Produit(
num_Fourni smallint,
num_Produit integer,
ref_Produit varchar(10),
nom_Produit varchar(100),
pu_Produit float,
um_Produit varchar(2),
type_Produit tinyint,
qte_Stock smallint,
dern_Entree date,
active bool default true,
primary key(num_Produit),
foreign key(num_Fourni) REFERENCES Fournisseur(num_Fourni),
foreign key(type_Produit) REFERENCES TypeProduit(num_TypeProduit)
)engine=innodb;

-- Création de la table Entree:

Create table Entree(
num_Entree integer primary key,
date_Entree date,
num_Fourni smallint,
foreign key(num_Fourni) references Fournisseur(num_Fourni)
)engine=innodb;

-- Création de la table Contenu:

Create table Contenu(
num_Entree integer,
num_Produit integer,
qte_Entree smallint,
primary key(num_Entree,num_Produit),
foreign key(num_Entree) references Entree(num_Entree),
foreign key(num_Produit) references Produit(num_Produit)
)engine=innodb;
