-- insertion des données de la base "TCout"

-- Insertion dans la relation Fournisseur .

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



-- Insertion dans la relation Produit .

insert into Produit (num_Fourni,num_Produit,ref_Produit,nom_Produit,pu_Produit,um_Produit,type_Produit) values(10,04,"B124266D","Talcanard",72.5,"pièce",03) ;

