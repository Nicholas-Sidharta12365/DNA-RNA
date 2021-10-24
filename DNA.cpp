#include <iostream>
#include <string.h>
using namespace std;

int main (){
string a;
cout << "Please input the strand! (NO SPACE ALLOWED)" << "\n";
cin >> a;
int z = 0;
int total = 0;
while(a[z] != '\0'){
  if(a[z]!=' '){
    total++;
  }
  z++;
}

//dna
string mrna;
string dna;
string strand;
cout <<"is the input a dna or an rna strand? (dna/rna)" << "\n";
cin >> dna;
if (dna == "dna"){
  cout << "is it a sense strand (5') or an antisense strand (3')? (sense/antisense)" << "\n";
  cin >> strand;
  if(strand == "sense"){
    for(int n = 0; n < z; n++){
      if(a[n]=='T'){
        mrna += "U";
      }
      else if(a[n] == 'A'){
        mrna += "A";
      }
      else if(a[n] == 'G'){
        mrna += "G";
      }
      else if(a[n] == 'C'){
        mrna += "C";
      }
      else{
        mrna += " ";
      }
    }
  }
  else if (strand == "antisense"){
    for(int m = 0; m < z; m++){
      if(a[m] == 'T'){
        mrna += "A";
      }
      else if(a[m] == 'A'){
        mrna += "U";
      }
      else if(a[m] == 'C'){
        mrna += "G";
      }
      else if (a[m] == 'G'){
        mrna += "C";
      }
      else{
        mrna += " ";
      }
    }
  }
}

//rna
else if(dna == "rna"){
string yes;
cout << "trna? (yes/no)" << "\n";
cin >> yes;
if(yes == "yes"){
  for (int i = 0; i < z; i++){
    if(a[i] == 'A'){
      mrna += "U";
    }
    else if(a[i] == 'U'){
      mrna += "A";
    }
    else if(a[i] == 'G'){
      mrna += "C";
    }
    else if (a[i] == 'C'){
      mrna += "G";
    }
    else{
      mrna += " ";
    }
  }
}
else if(yes == "no"){
  mrna = a;
}
}

string trna;
for (int b = 0; b < z; b++){
    if(mrna[b] == 'A'){
      trna += "U";
    }
    else if(mrna[b] == 'U'){
      trna += "A";
    }
    else if(mrna[b] == 'G'){
      trna += "C";
    }
    else if (mrna[b] == 'C'){
      trna += "G";
    }
    else{
      trna += " ";
    }
  }

string as;
for (int c = 0; c < z; c++){
    if(mrna[c] == 'A'){
      as += "T";
    }
    else if(mrna[c] == 'U'){
      as += "A";
    }
    else if(mrna[c] == 'G'){
      as += "C";
    }
    else if (mrna[c] == 'C'){
      as += "G";
    }
    else{
      as += " ";
    }
}

string sense;
for (int d = 0; d < z; d++){
    if(mrna[d] == 'A'){
      sense += "A";
    }
    else if(mrna[d] == 'U'){
      sense += "T";
    }
    else if(mrna[d] == 'G'){
      sense += "G";
    }
    else if (mrna[d] == 'C'){
      sense += "C";
    }
    else{
      sense += " ";
    }
}

cout << "\n";
cout << "--------------- Strand -----------------" << "\n";
cout << "sense      : " << sense << "\n";
cout << "antisense  : " << as << "\n";
cout << "mrna       : " << mrna <<"\n";
cout << "trna       : " << trna <<"\n";

///////////////////////////making name of protein
cout << "\n";
cout << "-------------- Protein -----------------" << "\n";
  for (int g = 0; g < z; g += 4){
    if (mrna[g]=='U'){
      if(mrna[g+1]=='U'){
        if(mrna[g+2]=='U'){
          cout<< "Phenylalanine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Phenylalanine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Leucine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Leucine"<< "\n";
        }
      }
      else if(mrna[g+1]=='C'){
        if(mrna[g+2]=='U'){
          cout<< "Serine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Serine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Serine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Serine"<< "\n";
        }
      }
      else if(mrna[g+1]=='A'){
        if(mrna[g+2]=='U'){
          cout<< "Tyrosine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Tyrosine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Stop"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Stop"<< "\n";
        }
      }
      else if(mrna[g+1]=='G'){
        if(mrna[g+2]=='U'){
          cout<< "Cysteine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Cysteine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Stop"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Tryptophan"<< "\n";
        }
      }
    }

    else if (mrna[g]=='C'){
      if(mrna[g+1]=='U'){
        if(mrna[g+2]=='U'){
          cout<< "Leucine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Leucine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Leucine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Leucine"<< "\n";
        }
      }
      else if(mrna[g+1]=='C'){
        if(mrna[g+2]=='U'){
          cout<< "Proline"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Proline"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Proline"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Proline"<< "\n";
        }
      }
      else if(mrna[g+1]=='A'){
        if(mrna[g+2]=='U'){
          cout<< "Histidine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Histidine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Glutamine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Glutamine"<< "\n";
        }
      }
      else if(mrna[g+1]=='G'){
        if(mrna[g+2]=='U'){
          cout<< "Arginine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Arginine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Arginine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Arginine"<< "\n";
        }
      }
    }

    else if (mrna[g]=='A'){
      if(mrna[g+1]=='U'){
        if(mrna[g+2]=='U'){
          cout<< "Isoleucine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Isoleucine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Isoleucine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Methionine (start)"<< "\n";
        }
      }
      else if(mrna[g+1]=='C'){
        if(mrna[g+2]=='U'){
          cout<< "Threonine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Threonine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Threonine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Threonine"<< "\n";
        }
      }
      else if(mrna[g+1]=='A'){
        if(mrna[g+2]=='U'){
          cout<< "Asparagine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Asparagine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Lysine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Lysine"<< "\n";
        }
      }
      else if(mrna[g+1]=='G'){
        if(mrna[g+2]=='U'){
          cout<< "Serine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Serine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Arginine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Arginine"<< "\n";
        }
      }
    }

    else if (mrna[g]=='G'){
      if(mrna[g+1]=='U'){
        if(mrna[g+2]=='U'){
          cout<< "Valine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Valine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Valine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Valine"<< "\n";
        }
      }
      else if(mrna[g+1]=='C'){
        if(mrna[g+2]=='U'){
          cout<< "Alanine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Alanine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Alanine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Alanine"<< "\n";
        }
      }
      else if(mrna[g+1]=='A'){
        if(mrna[g+2]=='U'){
          cout<< "Aspartic Acid"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Aspartic Acid"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Glutamic Acid"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Glutamic Acid"<< "\n";
        }
      }
      else if(mrna[g+1]=='G'){
        if(mrna[g+2]=='U'){
          cout<< "Glycine"<< "\n";
        }
        else if(mrna[g+2] == 'C'){
          cout<< "Glycine"<< "\n";
        }
        else if(mrna[g+2] == 'A'){
          cout<< "Glycine"<< "\n";
        }
        else if(mrna[g+2] == 'G'){
          cout<< "Glycine"<< "\n";
        }
      }
    }
  }

return 0;
}