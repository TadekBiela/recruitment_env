FROM tadekbiela/cpp_development:cpp_development_linux

WORKDIR /usr/src
RUN git clone https://github.com/TadekBiela/recruitment_env.git

ENV XDG_RUNTIME_DIR="/tmp/runtime-root"

WORKDIR /usr/src/recruitment_env/build
RUN cmake ../
RUN cmake --build . --target all

LABEL Name=recruitment_env
