FROM ubuntu:latest

ARG DEBIAN_FRONTEND=nointeractive

ENV TZ=America/Sao_Paulo
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

RUN apt update
RUN apt upgrade -y
RUN apt install -y \
        binutils \
        apt-utils \
        build-essential \
        ca-certificates \
        mc \
        dialog \
        wget \
        curl \
        git \
        nano \
        tzdata \
        software-properties-common \
        unzip \
        lsb-release

RUN bash -c "$(wget https://raw.githubusercontent.com/ohmybash/oh-my-bash/master/tools/install.sh -O -)"

WORKDIR /root/projetos

USER root

