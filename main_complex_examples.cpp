#include "Matrix2017.h"

int main()
{
	//Matrix A("complex","[0.2259+0.2619i   0.1848+0.4942i   0.5949+0.1978i   0.3188+0.6177i   0.9289+0.0287i   0.5468+0.0596i   0.3674+0.8175i   0.1707+0.3354i   0.9049+0.7791i   0.2622+0.0305i; 0.9575+0.6892i   0.7922+0.0782i   0.6555+0.2599i   0.9502+0.5499i   0.7094+0.1839i   0.5853+0.3692i   0.1493+0.5752i   0.6557+0.1067i   0.7060+0.4314i   0.4387+0.8530i; 0.9706+0.0838i   0.0357+0.9619i   0.0318+0.9106i   0.3816+0.6221i   0.6797+0.0497i   0.2551+0.3897i   0.2543+0.3532i   0.9572+0.2290i   0.8491+0.0046i   0.2769+0.1818i; 0.4854+0.9133i   0.9340+0.7749i   0.0462+0.2638i   0.7952+0.5132i   0.1626+0.9448i   0.6991+0.4039i   0.2435+0.0154i    0.8003+0.1524i   0.6787+0.8173i   0.0971+0.1455i; 0.1419+0.8258i   0.7577+0.8687i   0.8235+0.1361i   0.4898+0.0760i   0.4984+0.4893i   0.9593+0.1320i   0.3500+0.1690i   0.4218+0.5383i   0.7431+0.0844i   0.6948+0.8693i; 0.2259+0.2619i   0.1848+0.4942i   0.5949+0.1978i   0.3188+0.6177i   0.9289+0.0287i   0.5468+0.0596i   0.3674+0.8175i   0.1707+0.3354i   0.9049+0.7791i   0.2622+0.0305i; 0.9575+0.6892i   0.7922+0.0782i   0.6555+0.2599i   0.9502+0.5499i   0.7094+0.1839i   0.5853+0.3692i   0.1493+0.5752i   0.6557+0.1067i   0.7060+0.4314i   0.4387+0.8530i; 0.9706+0.0838i   0.0357+0.9619i   0.0318+0.9106i   0.3816+0.6221i   0.6797+0.0497i   0.2551+0.3897i   0.2543+0.3532i   0.9572+0.2290i   0.8491+0.0046i   0.2769+0.1818i; 0.4854+0.9133i   0.9340+0.7749i   0.0462+0.2638i   0.7952+0.5132i   0.1626+0.9448i   0.6991+0.4039i   0.2435+0.0154i    0.8003+0.1524i   0.6787+0.8173i   0.0971+0.1455i; 0.1419+0.8258i   0.7577+0.8687i   0.8235+0.1361i   0.4898+0.0760i   0.4984+0.4893i   0.9593+0.1320i   0.3500+0.1690i   0.4218+0.5383i   0.7431+0.0844i   0.6948+0.8693i]");
	//Matrix B("complex","[0.6160+0.6477i   0.3804+0.7802i   0.0119+0.8176i    0.4733+0.4509i   0.5678+0.0811i   0.3371+0.7948i    0.3517+0.5470i   0.0759+0.9294i   0.1622+0.6443i    0.8308+0.2963i; 0.5853+0.7447i   0.5308+0.4868i   0.3112+0.8116i    0.5497+0.1890i   0.7792+0.4359i   0.5285+0.5328i     0.9172+0.6868i   0.9340+0.4468i   0.1656+0.3507i    0.2858+0.1835i; 0.9172+0.6868i   0.9340+0.4468i   0.1656+0.3507i    0.2858+0.1835i   0.1299+0.3063i   0.6020+0.9390i    0.7572+0.3685i   0.5688+0.5085i   0.2630+0.8759i    0.7537+0.6256i;0.2259+0.2619i   0.1848+0.4942i   0.5949+0.1978i   0.3188+0.6177i   0.9289+0.0287i   0.5468+0.0596i   0.3674+0.8175i    0.1707+0.3354i   0.9049+0.7791i   0.2622+0.0305i;0.2277+0.6797i   0.9797+0.7150i   0.6028+0.7441i   0.5079+0.8055i   0.4886+0.1679i   0.2316+0.0424i   0.0377+0.1499i    0.4357+0.1366i   0.4389+0.9037i   0.7112+0.5000i;0.3111+0.7212i   0.1111+0.8909i   0.2217+0.4799i   0.2625+0.1829i   0.2373+0.7127i   0.6241+0.5216i   0.9133+0.5186i    0.9234+0.1068i   0.2581+0.3342i   0.1174+0.9047i;0.9172+0.6868i   0.9340+0.4468i   0.1656+0.3507i    0.2858+0.1835i   0.1299+0.3063i   0.6020+0.9390i    0.7572+0.3685i   0.5688+0.5085i   0.2630+0.8759i    0.7537+0.6256i;0.2277+0.6797i   0.9797+0.7150i   0.6028+0.7441i   0.5079+0.8055i   0.4886+0.1679i   0.2316+0.0424i   0.0377+0.1499i    0.4357+0.1366i   0.4389+0.9037i   0.7112+0.5000i;0.9172+0.6868i   0.9340+0.4468i   0.1656+0.3507i    0.2858+0.1835i   0.1299+0.3063i   0.6020+0.9390i    0.7572+0.3685i   0.5688+0.5085i   0.2630+0.8759i    0.7537+0.6256i;0.6160+0.6477i   0.3804+0.7802i   0.0119+0.8176i    0.4733+0.4509i   0.5678+0.0811i   0.3371+0.7948i    0.3517+0.5470i   0.0759+0.9294i   0.1622+0.6443i    0.8308+0.2963i]");
	Matrix A("complex","[1+3i 5+2i -6+i; 66-9i 81+7i 9-9i; 2-2i 6+2i -4+9i]");
	Matrix B("complex","[7+7i 43+99i 3+i; 2+4i 71-i 35+78i; 2-2i 56+i 71+i]");
	Matrix C,D,E,F,G;
	C=A+B;
	D=B-A;
	E=A*B;
	F=A/B;
	G=E/F;

	cout<<A;
	cout<<endl;
	cout<<B;
	cout<<endl;
	cout<<"C=A+B"<<endl<<"C="<<endl;
	cout<<C;
	cout<<endl;
	cout<<"D=B-A"<<endl<<"D="<<endl;
	cout<<D;
	cout<<endl;
	cout<<"E=A*B"<<endl<<"E="<<endl;
	cout<<E;
	cout<<endl;
	cout<<"F=A/B"<<endl<<"F="<<endl;
	cout<<F;
	cout<<endl;
	cout<<"G=E/F"<<endl<<"G="<<endl;
	cout<<G;
	cout<<endl;
	
	//Matrix H("complex","[1.4824+2.9782i   1.6751+2.8980i   1.4606+2.7592i   1.6314+2.9304i   1.2509+2.9878i   1.7668+2.8232i   1.9469+2.4891i; 1.4312+2.5221i   1.0069+2.9312i   1.7775+2.9388i   1.3649+2.4470i   1.0661+2.3696i   1.8983+2.5871i   1.5357+2.2535i; 1.6988+2.8454i   1.0790+2.4576i   1.8168+2.8107i   1.8875+2.8339i   1.7272+2.1708i   1.7668+2.9616i   1.9598+2.6782i]");
	//Matrix I("complex","[4.9145+4.7465i   4.8790+4.7428i   4.5572+4.1253i; 4.6171+4.2114i   4.5533+4.1045i   4.2997+4.6914i;    4.3225+4.2485i   4.2995+4.5209i   4.5477+4.5551i;   4.4905+4.0978i   4.8970+4.8466i   4.9918+4.0085i;   4.4075+4.7087i   4.7943+4.8436i   4.4834+4.4160i;   4.0839+4.8557i   4.7758+4.3777i   4.6848+4.4391i;   4.5920+4.7890i   4.5990+4.2721i   4.4800+4.7844i;]");
	Matrix H("complex","[1+i 2+2i 3+3i; 4+4i 5+5i 6+6i; 7+7i 8+8i 9+9i]");
	Matrix I("complex","[12+i 23-4i 78+5i; 36+9i 42+8i 5+5i; 9+9i -4-i -8-6i]");
	Matrix J,K,L,M,N;
	J=H*I;
	K=H+I;
	L=H-I;
	M=K*L;
	N=L/M;
	
	cout<<H;
	cout<<endl;
	cout<<I;
	cout<<endl;
	cout<<"J=H*I"<<endl<<"J="<<endl;
	cout<<J;
	cout<<endl;
	cout<<"K=H+I"<<endl<<"K="<<endl;
	cout<<K;
	cout<<endl;
	cout<<"L=H-I"<<endl<<"L="<<endl;
	cout<<L;
	cout<<endl;
	cout<<"M=K*L"<<endl<<"M="<<endl;
	cout<<M;
	cout<<endl;
	cout<<"N=L/M"<<endl<<"N="<<endl;
	cout<<N;
	cout<<endl;
	//cout<<A.getcDeterminant()<<endl<<B.getcDeterminant()<<endl<<C.getcDeterminant()<<endl<<D.getcDeterminant()<<endl<<E.getcDeterminant()<<endl<<F.getcDeterminant()<<endl<<G.getcDeterminant()<<endl<<H.getcDeterminant()<<endl<<I.getcDeterminant()<<endl<<J.getcDeterminant()<<endl;

	return 0;
}
