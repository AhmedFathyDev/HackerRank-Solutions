
//  C++
cout << hex << left << showbase << nouppercase << (long long)A << "\n";
cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << "\n";
cout << scientific << uppercase << noshowpos << setprecision(9) << C << "\n";

//  C
printf("%#lx\n", (long int)A);
printf("%.*s%+.2f\n", 15 - to_string((long int)B).length() - 4, "_______________", B);
printf("%.9E\n", C);