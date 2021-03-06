#include "to_tex.h"
#include <string>
#include <stdlib.h>
using namespace std;

void create_tex (string file_name, string cadena)
{
//This creates the directory Latex
system("mkdir -p Latex");

ofstream myfile;
string route;
route+="./Latex/";
route+=file_name;
myfile.open (route.c_str());
myfile << "\\documentclass{beamer} \\usetheme[pageofpages=of, alternativetitlepage=true]{Torino}\\usecolortheme{nouvelle} \\usepackage[spanish]{babel} \\usepackage{thumbpdf} \\usepackage{tikz} \\usetikzlibrary{arrows} \\usepackage{ucs} \\usepackage[utf8]{inputenc} \\usepackage{pgf,pgfarrows,pgfnodes,pgfautomata,pgfheaps,pgfshade} \\usepackage{verbatim} \\usepackage{booktabs} \\usepackage{multicol} \\usepackage{url} \\beamersetuncovermixins{\\opaqueness<1>{25}}{\\opaqueness<2->{15}} \\begin{document}\n";
myfile << cadena;
myfile << "\n\\end{document}";
myfile.close();
system("pdflatex -output-directory Latex ./Latex/*.tex");
}


//	Hay que llamar funciones del sistema.
//void delete_tex (string name)
//{
//string line = "rm -rf ";
//string command +=(line +name);
//system(command);
//}
