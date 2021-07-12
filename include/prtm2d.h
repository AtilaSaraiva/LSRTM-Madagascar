/* This file is automatically generated. DO NOT EDIT! */

#ifndef _prtm2d_h
#define _prtm2d_h


void step_forward(float **u0, float **u1, float **vv, bool adj);
/*< forward step for wave propagation >*/


void apply_sponge(float **p0);
/*< apply sponge (Gaussian taper) absorbing boundary condition
  L=Gaussian taper ABC; L=L*, L is self-adjoint operator. >*/


void sg_init(int *sxz, int szbeg, int sxbeg, int jsz, int jsx, int ns);
/*< shot/geophone position initialize
  sxz/gxz; szbeg/gzbeg; sxbeg/gxbeg; jsz/jgz; jsx/jgx; ns/ng; >*/


void add_source(int *sxz, float **p, int ns, float *source, bool add);
/*< add seismic sources in grid >*/


void expand2d(float** b, float** a);
/*< expand domain of 'a' to 'b': source(a)-->destination(b) >*/


void window2d(float **a, float **b);
/*< window 'b' to 'a': source(b)-->destination(a) >*/


void prtm2d_init(bool verb_, bool csdgather_, bool fromBoundary_, float dz_, float dx_, float dt_, 
		 float amp, float fm, 
		 int nz_, int nx_, int nb_, int nt_, int ns_, int ng_, 
		 int sxbeg_, int szbeg_, int jsx_, int jsz_, 
		 int gxbeg_, int gzbeg_, int jgx_, int jgz_,
		 float **v0, float *mod_, float *dat_);
/*< allocate variables and initialize parameters >*/


void prtm2d_close();
/*< free allocated variables >*/


void prtm2d_shotwav(int is);
/*< prtm2d shot wavefield generated at front >*/


void prtm2d_lop(bool adj, bool add, int nm, int nd, float *mod, float *dat);
/*< prtm2d linear operator >*/


void prtm2d_adjtest();
/*< prtm2d adjoint test >*/

#endif