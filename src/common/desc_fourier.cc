//  Copyrigth 2018 C Lemaitre

#include "desc_fourier.hpp"


namespace descimag {
namespace descfour {
/*flt_t * desc_fourier1(uint8 ** pImage, const uint16 & width, 
                      const uint16 & heigth) {
	flt_t * coef = nullptr ;

	double* real;
	double* imag;

  descimag::data::Complex ** data = new descimag::data::Complex*[width];
  descimag::data::Complex ** data_res = new descimag::data::Complex*[width];

  for (uint16 i=0; i<width; i++) {
    data[i] = new descimag::data::Complex[heigth];
    data_res[i] = new descimag::data::Complex[heigth];
  }
	
	int p;
	long LargIm,HautIm;
	long l,c,i,j,m,r;
	
  if (heigth!=width) return 0; // si l'image n'est pas carree c'est pas bon

	//collecte des données
	for (l=0;l<HautIm;l++) {
		for (c=0;c<LargIm;c++) {
      data[c][l].set_real(pImage[c][l]);
      data[c][l].set_imag(pImage[c][l]);
		} //c
	} // l

	//  Transform the rows 
	real = (double *)malloc(LargIm * sizeof(double));
	imag = (double *)malloc(LargIm * sizeof(double));


	m=0;
	while((1<<m)<heigth) m++; 
  // TODO : FFT sur les lignes puis recopies sur le buffer d'entree
	for (r=0;r<3;r++)
	{
	for (l=0;l<HautIm;l++) {
    for (c=0;c<LargIm;c++) {
				real[c] = grid[r][c][l].x;
				imag[c] = grid[r][c][l].y;
			}

		//	pfft2D->do_fft(fft,TabData);

			FFT(1,m,real,imag);

			for (c = 0; c <LargIm; c ++)
			{
				grid[r][c][l].x = real[c];
				grid[r][c][l].y = imag[c];
			}

		}
	}

  // Todo : FFT sur les colonnes puis recopie dans le buffer data

	//  Transform the columns
	for (r=0;r<3;r++)
	{	
		for (c=0;c<LargIm;c++)
		{
			for (l=0;l<HautIm;l++) 
			{
	//			TabData[j] = grid[r][j][i].x;
				real[l] = grid[r][c][l].x;
				imag[l] = grid[r][c][l].y;
			}

			FFT(1,m,real,imag);

			for (l = 0; l <HautIm; l ++)
			{
				grid[r][c][l].x = real[l];
				grid[r][c][l].y = imag[l];
			} // ligne

		} // colonne
	} // couleur

	RecentrageGrilleCouleur(grid, HautIm, LargIm);

	double positionpix;
	double positionpix_x;
	double positionpix_y;
	double MaxR,MaxV,MaxB;
	double module;
	int Ray;
	int rmax,lmax;	
	rmax = LargIm/2;
	lmax = HautIm/2;

//	coef = new double[HautIm/2];
	coef = (double*)malloc(m_Npar*sizeof(double));
	coefR = (double*)malloc((lmax)*sizeof(double));
	coefV = (double*)malloc((lmax)*sizeof(double));
	coefB = (double*)malloc((lmax)*sizeof(double));
	long *Circonf=(long * )malloc(lmax*sizeof(long));

	for( i=0;  i<lmax; i++)
	{
		coefR[i] = 0.0;
		coefV[i] = 0.0;
		coefB[i] = 0.0;
		Circonf[i]=0;
	}
	for(l = 0;l<HautIm ;l++)
	{
		for( c = 0;c<LargIm ;c++)
		{
			positionpix_x = c - rmax;
			positionpix_y = l - rmax;

			positionpix_x*=positionpix_x;
			positionpix_y*=positionpix_y;
			positionpix=(int)sqrt(positionpix_x+positionpix_y);
			if(positionpix<rmax && positionpix>0)
			{
				Ray=(int)positionpix;
				coefR[Ray] += _cabs(grid[0][c][l]);
				coefV[Ray] += _cabs(grid[1][c][l]);
				coefB[Ray] += _cabs(grid[2][c][l]);
				Circonf[Ray]++;
			}
		
		} // colonne
	} // ligne
	coefR[0]=_cabs(grid[0][rmax][rmax]);
	coefV[0]=_cabs(grid[1][rmax][rmax]);
	coefB[0]=_cabs(grid[2][rmax][rmax]);
	MaxR=coefR[0];

	MaxV=coefV[0];
	MaxB=coefB[0];
	for( i=1;  i<lmax; i++)
	{
		coefR[i] = coefR[i]/(MaxR*Circonf[i]);
		coefV[i] = coefV[i]/(MaxV*Circonf[i]);
		coefB[i] = coefB[i]/(MaxB*Circonf[i]);
	}


   // recopie sans prendre le premier de chaque composante
	int np=m_Npar/3;
	for( i=0; i<np; i++)
	{
		coef[i]=coefR[i+1];
		coef[i+np]=coefV[i+1];
		coef[i+2*np]=coefB[i+1];
	}

	free(coefR);
	free(coefV);
	free(coefB);



	for(m=0;m<3;m++)
	{
		for(j=0;j<LargIm;j++) 
			free(grid[m][j]);
		free(grid[m]);
	}
	free(grid);

	free(real);
	free(imag);
	free(Circonf);

//	free(TabData);
//	free(fft);
	return coef;


}*/
}  // namespace descfour
}  // namespace descimag
