//-- Exercice 1 : Déclaration et affectation de variables -----------------------------
//let prenom ;
//== Méthode 1=======
// document.getElementById("verify").onclick = function(){
//     prenom = document.getElementById("prenom").value ;
//     document.getElementById("affichage").innerHTML = "Vous Appelez : " + prenom ;
// }
// == Méthode 2 ======
// prenom = window.prompt("Entrer votre Prenom :");
// console.log("Vous Appelez : ", prenom);






//-- Exercice 2 : Manipulation de variables numériquess -------------------------------
// let a , b ;
//== Méthode 1 ======
// document.getElementById("calcul").onclick = function(){
//     a = document.getElementById("nbrA").value ;
//     a = Number(a) ;
//     b = document.getElementById("nbrB").value ;
//     b = Number(b) ;
//     document.getElementById("somme").innerHTML = "Somme : " + (a+b) ;
//     document.getElementById("difference").innerHTML = "Différence : " + (a-b) ;
//     document.getElementById("multiplication").innerHTML = "Produit : " + (a*b) ;
//     document.getElementById("division").innerHTML = "Division : " + (a/b) ;
// }
//== Méthode 2 ======
// a = window.prompt("A =");
// a = Number(a);
// b = window.prompt("B =");
// b = Number(b);
// console.log("Somme : ", a+b);
// console.log("Différence : ", a-b);
// console.log("Produit : ", a*b);
// console.log("Division : ", a/b);







//-- Exercice 3 : Concaténation de chaînes de caractères ------------------------------
// let prenom , nom , nomComplet ;
//== Méthode 1 ======
// document.getElementById("concatener").onclick = function(){
//     prenom = document.getElementById("prenom").value ;
//     nom = document.getElementById("nom").value ;
//     nomComplet = prenom.concat(" " , nom);// Equivalent à:  nomComplet = prenom + " " + nom;
//     document.getElementById("nom-complet").innerHTML = "Nom Complet : " + nomComplet ;
// }
//== Méthode 2 ======
// prenom = window.prompt("Entrer votre Prenom :");
// nom = window.prompt("Entrer votre Nom :");
// nomComplet = prenom + " " + nom;
// console.log("Nom Complet : ", nomComplet);







//-- Exercice 4 : Utilisation des variables booléennes ---------------------------------
// let age , majeur ;
//== Méthode 1 ======
// document.getElementById("verify").onclick = function(){
//     age = document.getElementById("age").value ;
//     age =  Number(age);
//     if (age>=18)
//         majeur = true ;
//     else
//         majeur = false ;
//     document.getElementById("majeur").innerHTML = "Majeur ? " + majeur ;
// }
//== Méthode 2 ======
// age = window.prompt("Entrer l'Age :");
// age =  Number(age);
// if (age>=18)
//     majeur = true ;
// else
//     majeur = false ;
// console.log("Majeur ? ", majeur);






// -- Exercice 5 : Échange de valeurs entre deux variables ----------------------------
// let x , y ;
// == Méthode 1 =====
// document.getElementById("swap").onclick = function(){
//     x = document.getElementById("nbrX").value ;
//     y = document.getElementById("nbrY").value ;
//     [x,y] = [y,x] ;
//     document.getElementById("after-swap").innerHTML = "Après Echange : X = " + x + " et Y = "+ y ;
// }
// == Méthode 2 =====
// x = window.prompt("X = ");
// y = window.prompt("Y = ");
// console.log("Avant Echange : x = ", x ," , y = ", y);
// [x,y] = [y,x] ;
// console.log("Après Echange : x = ", x ," , y = ", y);






// -- Exercice 6 : Calcul de la circonférence d'un cercle ----------------------------
// let rayon , C ;
// == Méthode 1 =====
// document.getElementById("calcul").onclick = function(){
//     rayon = document.getElementById("rayon").value ;
//     rayon = Number(rayon);
//     C = 2 * rayon * Math.PI ;
//     C = C.toFixed(2);
//     document.getElementById("circonference").innerHTML = "Circonférence = " + C ;
// }
// == Méthode 2 =====
// rayon = window.prompt("Entrer le Rayon : ");
// rayon = Number(rayon) ;
// C = 2 * rayon * Math.PI ;
// C = C.toFixed(2);
// console.log("Circonférence est : ", C);







// -- Exercice 7 : Conversion de température ------------------------------------------
// let C , F ;
// == Méthode 1 =====
// document.getElementById("convert").onclick = function(){
//     C = document.getElementById("celsius").value ;
//     C = Number(C);
//     F = C * 9/5 + 32 ;
//     F = F.toFixed(2);
//     document.getElementById("fahrenheit").innerHTML = "Température en F°  = " + F ;
// }
// == Méthode 2 =====
// C = window.prompt("Entrer la Température en C° :");
// C = Number(C);
// F = C * 9/5 + 32 ;
// F = F.toFixed(2);
// console.log("Température en F°  =  ", F);






// -- Exercice 8 : Calcul de l'âge ---------------------------------------------------
// let anneeNaissance , anneeActuelle = 2024 ,age;
// == Méthode 1 =====
// document.getElementById("calcul").onclick = function(){
//     anneeNaissance = document.getElementById("anneeNaissance").value ;
//     anneeNaissance = Number(anneeNaissance);
//     age = anneeActuelle - anneeNaissance ;
//     document.getElementById("age").innerHTML = "Votre Age est = " + age + " ans !" ;
// }
// == Méthode 2 =====
// anneeNaissance = window.prompt("Entrer Votre Année de Naissance : ");
// anneeNaissance = Number(anneeNaissance);
// age = anneeActuelle - anneeNaissance ;
// console.log("Votre Age est = ", age , " ans !");






// -- Exercice 9 : Calcul du périmètre d'un rectangle ---------------------------------
// let longueur , largeur , P;
// == Méthode 1 =====
// document.getElementById("calcul").onclick = function(){
//     longueur = document.getElementById("longueur").value ;
//     longueur = Number(longueur);
//     largeur = document.getElementById("largeur").value ;
//     largeur = Number(largeur);
//     P = 2* (largeur + longueur) ;
//     document.getElementById("perimetre").innerHTML = "Le Périmètre est = " + P;
// }
// == Méthode 2 =====
// longueur = window.prompt("Entrer la Longueur : ");
// longueur = Number(longueur);
// largeur = window.prompt("Entrer la Largeur : ");
// largeur = Number(largeur);
// P = 2* (largeur + longueur) ;
// console.log("Le Périmètre est = ", P);







// -- Exercice 10 : Moyenne de trois nombres ------------------------------------------
// let note_1 , note_2 , note_3 , moyenne ;
// == Méthode 1 =====
// document.getElementById("calcul").onclick = function(){
//     note_1 = document.getElementById("note-1").value ;
//     note_1 = Number(note_1);
//     note_2 = document.getElementById("note-2").value ;
//     note_2 = Number(note_2);
//     note_3 = document.getElementById("note-3").value ;
//     note_3 = Number(note_3);
//     moyenne = (note_1 + note_2 + note_3) / 3 ;
//     moyenne = moyenne.toFixed(2);
//     document.getElementById("moyenne").innerHTML = "La Moyenne des Notes est = " + moyenne;
// }
// == Méthode 2 =====
// note_1 = window.prompt("Entrer la Note 1 : ");
// note_1 = Number(note_1);
// note_2 = window.prompt("Entrer la Note 2 : ");
// note_2 = Number(note_2);
// note_3 = window.prompt("Entrer la Note 3 : ");
// note_3 = Number(note_3);
// moyenne = (note_1 + note_2 + note_3) / 3 ;
// moyenne = moyenne.toFixed(2);
// console.log("La Moyenne des Notes est = ", moyenne);