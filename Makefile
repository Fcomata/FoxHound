all :

# build lbrary
	cd ./src && $(MAKE)

# build prereport
#	cd ./doc/project_proposal && $(MAKE)

# build techreport
#	cd ./doc/technical_report && $(MAKE)

# build Doxigen documentation
	cd ./doc && doxygen Doxyfile


clean:

# build lbrary
	cd ./src && $(MAKE) clean

# build prereport
	cd ./doc/project_proposal && $(MAKE) clean

# build techreport
	cd ./doc/technical_report && $(MAKE) clean


