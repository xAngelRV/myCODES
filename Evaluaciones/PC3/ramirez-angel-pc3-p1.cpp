#include <iostream>
using namespace std;

// esta la palabra??
bool contienePalabra(string oracion, string palabra) {
  int i = 0;
  while (oracion[i] != '\0') {
    string temp;
    while (oracion[i] != ' ' && oracion[i] != '\0') {
      temp += oracion[i];
      i++;
    }
    if (temp==palabra) return true;
    if (oracion[i] != '\0') i++;
  }
  return false;
}

// saliada solo diferentess
void soloDif(string A, string B) {
  int i = 0;
  while (A[i] != '\0') {
    string palabra;
    while (A[i] != ' ' && A[i] != '\0') {
      palabra+= A[i];
      i++;
    }
    if (!contienePalabra(B, palabra)) cout<<palabra<< " ";
    if (A[i] != '\0') i++;
  }

  i = 0;
  while (B[i] != '\0') {
    string palabra;
    while (B[i] != ' ' && B[i] != '\0') {
      palabra+= B[i];
      i++;
    }
    if (!contienePalabra(A, palabra)) cout<<palabra<< " ";
    if (B[i] != '\0') i++;
  }
}

int main() {

  string oracionA, oracionB;

  cout << "Oracion A: ";
  getline(cin, oracionA);

  cout << "Oracion B: ";
  getline(cin, oracionB);

  soloDif(oracionA, oracionB);

  return 0;
}

