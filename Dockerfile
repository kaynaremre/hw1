FROM gcc:4.9
COPY . /usr/src/hw1
WORKDIR /usr/src/hw1
RUN gcc -s homework1_step2.c
RUN cat a.out.
