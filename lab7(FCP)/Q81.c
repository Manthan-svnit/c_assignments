int fact(int n);
int main()
{
	int n,r;
	float nCr;
	printf("Enter value of n for nCr: \n");
	scanf("%d",&n);
	printf("Enter value of r for nCr: \n");
	scanf("%d",&r);
	if(n<r){
		printf("Invalide number combination");
	}
	else{
		nCr = fact(n)/(fact(r)* fact(n-r));
		printf("The Solution is %f",nCr);
	}
}

int fact(int n)
{ 
  if(n==0 ||n==1)
  {
      return 1;
  }
  int factNm1= fact(n-1);
  int factNm2=fact(n-2);
  int factN;
  factN = factNm1 * factNm2;
  return factN;
}