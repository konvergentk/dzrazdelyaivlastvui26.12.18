/*Реализуйте решение непрерывной задачи о рюкзаке
*/

#include <iostream>
using namespace std;
int main()
{
	int bag, val, wgt, count;
	cin >> bag >> count;
	char *Bag = new char[count];
	int *V = new int[count];
	int *W = new int[count];
	int *K = new int[count];
	char *N = new char[count];
	for (int i = 0; i < count; i++) {
		Bag[i] = 0;
	}

	for (int i = 0; i < count; i++) {
		cout << "Type the name of item " << endl;
		cin >> N[i];
		cout << "Type the value and the weight " << endl;
		cin >> V[i] >> W[i];
		K[i] = (double)V[i] / W[i];
	}
	int q, t;
	for (int q = 0; q < count; q++) {
		t = K[q];
		bag -= W[q];
		for (int i = 0; i < count; i++) {
			if (N[q] != N[i])
				if(bag + W[q]- W[i] != 0)
				if (t < K[i]) {
					t = K[i];
					Bag[q] = N[i];
					bag += W[q];
		            bag -= W[i];
					val = V[i];
					wgt = W[i];
				}
		}
		W[q] = wgt;
		V[q] = val;
		K[q] = -1;
	}
	for (int i = 0; i < count; i++) {
		if (Bag[i] != 0)
			cout << Bag[i] << "Value " << V[i] << "Weight " << W[i] << endl;
	}

	delete[] V;
	delete[] W;
	delete[] K;
		return 0;
}
