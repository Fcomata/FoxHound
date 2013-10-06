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
myfile << "\\documentclass{beamer} \n \\usetheme[pageofpages=of, alternativetitlepage=true]{Torino} \n \\usecolortheme{nouvelle} \n \\usepackage[spanish]{babel} \n \\usepackage{thumbpdf} \n \\usepackage{tikz} \n \\usetikzlibrary{arrows} \n \\usepackage{ucs} \n \\usepackage[utf8]{inputenc} \n \\usepackage{pgf,pgfarrows,pgfnodes,pgfautomata,pgfheaps,pgfshade} \n \\usepackage{verbatim} \n \\usepackage{booktabs} \n \\usepackage{multicol} \n \\usepackage{url} \n \\beamersetuncovermixins{\\opaqueness<1>{25}}{\\opaqueness<2->{15}} \n \\usetikzlibrary{trees} \n \\begin{document}\n";
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
