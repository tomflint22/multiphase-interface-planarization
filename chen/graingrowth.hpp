// graingrowth.cpp
// Anisotropic phase field grain growth example code
// Questions/comments to gruberja@gmail.com (Jason Gruber)

std::string PROGRAM = "graingrowth";
std::string MESSAGE = "Anisotropic phase field grain growth example code";

typedef MMSP::grid<1,MMSP::sparse<double> > GRID1D;
typedef MMSP::grid<2,MMSP::sparse<double> > GRID2D;
typedef MMSP::grid<3,MMSP::sparse<double> > GRID3D;

