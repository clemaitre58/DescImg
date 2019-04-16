HEADERS += \
    ../src/common/complex.hpp \
    ../src/common/csv_reader_fft.hpp \
    ../src/common/desc_fourier.hpp \
    ../src/common/fft.hpp \
    ../src/common/type_def.hpp

SOURCES += \
    ../src/common/complex.cc \
    ../src/common/csv_reader_fft.cc \
    ../src/common/desc_fourier.cc \
    ../src/common/fft.cc \
    ../src/tests/unit/common/test_complex.cpp \
    ../src/tests/unit/common/test_csv_reader_fft.cpp \
    ../src/tests/unit/common/test_fft.cpp \
    ../src/tests/tests_all.cpp

INCLUDEPATH += ../src/
