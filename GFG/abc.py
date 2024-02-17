n=int(input("Enter the number of events in B(i)"))
print("Number of events in B(i) = ",n)
P_Bi_over_A=[]
P_A_over_Bi=[]
P_Bi=[]
P_A=0
for i in range(n):
    P_Bi.append(float(input("Enter the value of P(B"+str(i+1)+")")))
    print("P(B"+str(i+1)+") = ",P_Bi[i])
    P_A_over_Bi.append(float(input("Enter the value of P(A|B"+str(i+1)+")")))
    print("P(A|B"+str(i+1)+") = ",P_A_over_Bi[i])
    P_A+=P_Bi[i]*P_A_over_Bi[i]
for i in range(n):
    P_Bi_over_A.append(P_A_over_Bi[i]*P_Bi[i]/P_A)
    print("P(B"+str(i+1)+"|A) = ",P_Bi_over_A[i])