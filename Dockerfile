FROM python:3.9

COPY ./pybind11_demo /src/pybind11_demo

COPY ./setup_vscode_setting.sh /src/pybind11_demo

RUN pip install --upgrade pip && \
    pip install pybind11 && \
    cd /src/pybind11_demo && \
    /bin/bash ./setup_vscode_setting.sh

RUN pip install /src/pybind11_demo

WORKDIR /workspace/pybind11_demo

CMD ["/bin/bash"]
