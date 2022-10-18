import math
A=int(input("Masukkan nilai pertama :"))
B=int(input("Masukkan nilai kedua :"))
C=math.sqrt((B*B)-(A*A))
print("\nAlas= ",end= "")
print("%d" %C, "cm")
print("Tinggi =",A,"cm")
K=A+B+C
print("Keliling =",round(K),"cm")
L=(1*A*C) / (2)
print("Luas =",round(L),"cm^2")
