-- insertion des données de la base "TCout"

-- Insertion dans la relation Fournisseur .
delete from fournisseur ;
insert into Fournisseur(num_Fourni,nom_Fourni,tel_fourni,ville_Fourni,rue_Fourni,cp_Fourni)
values(01,"Boulangerie Villard","0492490068","Saint Bonnet en Champsaur","23 rue de Chaillol","05500");

insert into Fournisseur(num_Fourni,nom_Fourni)
values(02,"Ets TradiFrance");

insert into Fournisseur(num_Fourni,nom_Fourni,tel_fourni,ville_Fourni,rue_Fourni,cp_Fourni)
values(03,"Ets Alpes oeufs","0492512858","La Rochette","Pont Sarrazin","05000");

insert into Fournisseur(num_Fourni,nom_Fourni)
values(04,"Ets Pomona");

insert into Fournisseur(num_Fourni,nom_Fourni,tel_fourni,ville_Fourni,rue_Fourni,cp_Fourni)
values(05,"Ets Hapian","0492537100","Chorges","ZA La Grande Ile Sud - BP2","05230");

insert into Fournisseur(num_Fourni,nom_Fourni,tel_fourni,ville_Fourni,rue_Fourni,cp_Fourni)
values(06,"Brake France","0442775577","Château-Arnoux","Rue Louise Michel","04160");

insert into Fournisseur(num_Fourni,nom_Fourni,tel_fourni,ville_Fourni,rue_Fourni,cp_Fourni)
values(07,"Ets Bonnabel","04 92 50 42 21","Forest Saint Julien","Manse","05260");

insert into Fournisseur(num_Fourni,nom_Fourni,tel_fourni,ville_Fourni,rue_Fourni,cp_Fourni)
values(08,"Ets Transgourmet","0826969137","Gap","22 route de la Justice - BP 34","05001");

insert into Fournisseur(num_Fourni,nom_Fourni,tel_fourni,ville_Fourni,rue_Fourni,cp_Fourni)
values(09,"Café folliet","010726426971","Lyon","10, rue Pierre Semard","69363");

-- Insertion dans la relation Fournisseur .

insert into TypeProduit(num_TypeProduit,lib_TypeProduit) values (01,"Céréales");

insert into TypeProduit(num_TypeProduit,lib_TypeProduit) values (02,"Viandes");

insert into TypeProduit(num_TypeProduit,lib_TypeProduit) values (03,"Surgelés");

insert into TypeProduit(num_TypeProduit,lib_TypeProduit) values (04,"Fruits et légumes");

-- Insertion dans la relation Utilisateur

insert into Utilisateur(num_User,nom_User,login,password) values (01,"Remy.V","VINCERE","ini01");
insert into Utilisateur(num_User,nom_User,login,password) values (02,"Angeline.G","GUILLAN","ini01");
insert into Utilisateur(num_User,nom_User,login,password) values (03,"Emmanuelle.N","NIOLLEM","ini01");
insert into Utilisateur(num_User,nom_User,login,password) values (04,"Christophe.A","ACCARCH","ini01");
insert into Utilisateur(num_User,nom_User,login,password) values (05,"Secours","SECOUHE","ini01");
insert into Utilisateur(num_User,nom_User,login,password) values (06,"Maryline.L","LAMPSMA","ini01");
produitnum_Fourni
