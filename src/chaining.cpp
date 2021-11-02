//
// Created by Pavel Kasila on 2.11.21.
//

#include "chaining.h"

chains get_chaining(const std::string& str) {
    int gl_sgl = 0;
    int gl_gl = 0;
    int sgl_sgl = 0;
    int sgl_gl = 0;

    std::string gls = "уеэоаыяюиёУЕЭОАЫЯЮИЁ";
    std::string sgls = "гйцкншщзхждлрпвфчсмтбГЙЦКНШЩЗХЖДЛРПВФЧСМТБ";

    std::string st = str, slv;

    while (st.find_first_of("ЬьЪъ") != std::string::npos)
        st.erase(st.find_first_of("ЬьЪъ"), 1);


    while (st.length() != 0) {

        while (st.find_first_of(" ,.-:") == 0) //
            st.erase(0, 1);                //убираем знаки препинания перед словом

        slv = st.substr(0, st.find_first_of(" ,.-:")); //выделяем слово в переменную slv
        st.erase(0, st.find_first_of(" ,.-:"));   // удаляем слово из строки

        while (slv.length() != 0) {
            if ((slv.find_first_of(gls) == 0) && (slv.find_first_of(sgls) == 1))
                gl_sgl += 1;
            else if ((slv.find_first_of(sgls) == 0) && (slv.find_first_of(gls) == 1))
                sgl_gl += 1;
            else if ((gls.find(slv[0]) != std::string::npos) && (gls.find(slv[1]) != std::string::npos))
                gl_gl += 1;
            else if ((sgls.find(slv[0]) != std::string::npos) && (sgls.find(slv[1]) != std::string::npos))
                sgl_sgl += 1;
            slv.erase(0, 1);
        }
    }

    chains c{};
    c.vowel_vowel = gl_gl;
    c.vowel_consonant = gl_sgl;
    c.consonant_vowel = sgl_gl;
    c.consonant_consonant = sgl_sgl;

    return c;
}