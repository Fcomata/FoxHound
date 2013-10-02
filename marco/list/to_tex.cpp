#include "to_tex.h"
#include <string>
using namespace std;

void create_tex (string cadena)
{
ofstream myfile;
myfile.open ("presentation.tex");
myfile << "\\documentclass{beamer} \\usetheme[pageofpages=of, alternativetitlepage=true]{Torino}\\usecolortheme{nouvelle} \\usepackage[spanish]{babel} \\usepackage{thumbpdf} \\usepackage{tikz} \\usetikzlibrary{arrows} \\usepackage{ucs} \\usepackage[utf8]{inputenc} \\usepackage{pgf,pgfarrows,pgfnodes,pgfautomata,pgfheaps,pgfshade} \\usepackage{verbatim} \\usepackage{booktabs} \\usepackage{multicol} \\usepackage{url} \\beamersetuncovermixins{\\opaqueness<1>{25}}{\\opaqueness<2->{15}} \\begin{document}\n";
myfile << cadena;
myfile << "\n\\end{document}";
myfile.close();
}


//	Hay que llamar funciones del sistema.
//void delete_tex (string name)
//{
//string line = "rm -rf ";
//string command +=(line +name);
//system(command);
//}
