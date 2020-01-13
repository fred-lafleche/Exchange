#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>
#include <time.h>
#include <algorithm>

int main() {

    std::string outputfile="C:\\Users\\Fred\\Desktop\\CSI2772\\cpp_code\\EchangeNoel\\Resultat_Echange.txt";
    std::ofstream outfile ;
    //echange enfant
    //std::vector<std::string> donneur{"Jacob", "Nicolas", "Nieve", "Caleb", "Zach", "Fredo", "Raph", "Hope", "Fred", "Christine", "Josee", "Xavier"};
    //std::vector<std::string> receveur{"Jacob", "Nicolas", "Nieve", "Caleb", "Zach", "Fredo", "Raph", "Hope", "Fred", "Christine", "Josee", "Xavier"};
    //echange parent
//    std::vector<std::string> donneur{"Denis", "Sonya", "Daniel", "Renee-Paule", "Michel", "Isabelle", "Johanne", "Rejean", "Pauline"};
//    std::vector<std::string> receveur{"Denis", "Sonya", "Daniel", "Renee-Paule", "Michel", "Isabelle", "Johanne", "Rejean", "Pauline"};
    //echange geegee volley
    std::vector<std::string> donneur{"Avery", "Kara", "Trinity", "Michaela", "Dana", "Emily", "Milana", "Tristan", "Portia", "Robin", "Nieve", "Magalie", "Grace", "Alana"};
    std::vector<std::string> receveur{"Avery", "Kara", "Trinity", "Michaela", "Dana", "Emily", "Milana", "Tristan", "Portia", "Robin", "Nieve", "Magalie", "Grace", "Alana"};
    std::vector<std::string> couleurs{"red", "orange", "yellow", "green", "royal_blue", "purple", "black", "white", "grey", "garnet", "teal", "pink", "light_blue", "mint_green"};
    std::vector<char> letters;
    //on ouvre le fichier
    outfile.open (outputfile);

    outfile << "Échange de Noel GeeGees 2019\n" << std::endl;

    int index;
    int color;
    int num;
    char letter;
    //nombre de personne dans l'échange, doit changer dépendamment parent/enfant
    int j=14;
    bool coupleFlag;

    //volley
    for (int i=0; i<donneur.size(); i++){
        do {
            srand(time(NULL));
            index = rand() % j;
            srand(index);
            color = rand() % j;
            srand(color);
            num = rand() % 22;
            letter = 'A' +num;

            while (std::find(letters.begin(), letters.end(), letter) != letters.end()){
                //srand(time(NULL));
                num = rand() % 22;
                letter = 'A' +num;
             }
            letters.push_back(letter);

        }while(donneur[i]==receveur[index]);

        outfile << donneur[i] << " --> " << receveur[index] << ", color:" << couleurs[color]<<", letter: "<<letter<< std::endl;
        std::cout<<"Donneur "<<i<<" complete."<<std::endl;

        if (index != j-1){
            receveur[index]=receveur[j-1];
        }
        if (color != j-1){
            couleurs[color]=couleurs[j-1];
        }
        j--;
    }

    //enfant

//    for (int i=0; i<donneur.size(); i++){
//        do {
//            coupleFlag=false;
//            srand(time(NULL));
//            index = rand() % j;
//
//            //all the couples
//            //Nicolas
//            if(i==1 && receveur[index]=="Christine"){
//                coupleFlag=true;
//            }
//            //Nieve
//            else if(i==2 && receveur[index]=="Fred"){
//                coupleFlag=true;
//            }
//            //Zach
//            else if(i==4 && receveur[index]=="Josee"){
//                coupleFlag=true;
//            }
//            //Fredo
//            else if(i==5 && receveur[index]=="Xavier"){
//                coupleFlag=true;
//            }
//            //Fred
//            else if(i==8 && receveur[index]=="Nieve"){
//                coupleFlag=true;
//            }
//            //Christine
//            else if(i==9 && receveur[index]=="Nicolas"){
//                coupleFlag=true;
//            }
//            //Josee
//            else if(i==10 && receveur[index]=="Zach"){
//                coupleFlag=true;
//            }
//            //Xavier
//            else if(i==11 && receveur[index]=="Fredo"){
//                coupleFlag=true;
//            }
//
//        }while(donneur[i]==receveur[index] || coupleFlag);
//
//        outfile << donneur[i] << " --> " << receveur[index] << std::endl;
//        std::cout<<"Donneur "<<i<<" complete."<<std::endl;
//
//        if (index != j-1){
//            receveur[index]=receveur[j-1];
//        }
//
//        j--;
//    }
    //parent
//    for (int i=0; i<donneur.size(); i++){
//        do {
//            coupleFlag=false;
//            srand(time(NULL));
//            index = rand() % j;
//
//            //all the couples
//            //Denis
//            if(i==0 && receveur[index]=="Sonya"){
//                coupleFlag=true;
//            }
//                //Sonya
//            else if(i==1 && receveur[index]=="Denis"){
//                coupleFlag=true;
//            }
//                //Daniel
//            else if(i==2 && receveur[index]=="Renee-Paule"){
//                coupleFlag=true;
//            }
//                //Rene-Paule
//            else if(i==3 && receveur[index]=="Daniel"){
//                coupleFlag=true;
//            }
//                //Michel
//            else if(i==4 && receveur[index]=="Isabelle"){
//                coupleFlag=true;
//            }
//                //Isabelle
//            else if(i==5 && receveur[index]=="Michel"){
//                coupleFlag=true;
//            }
//                //Rejean
//            else if(i==7 && receveur[index]=="Pauline"){
//                coupleFlag=true;
//            }
//                //Pauline
//            else if(i==8 && receveur[index]=="Rejean"){
//                coupleFlag=true;
//            }
//
//        }while(donneur[i]==receveur[index] || coupleFlag);
//
//        outfile << donneur[i] << " --> " << receveur[index] << std::endl;
//        std::cout<<"Donneur "<<i<<" complete."<<std::endl;
//
//        if (index != j-1){
//            receveur[index]=receveur[j-1];
//        }
//
//        j--;
//    }

    std::cout << "Joyeux Noel!" << std::endl;
    return 0;
}