FROM python:3.9

RUN pip install --upgrade pip && \
    pip install pybind11

COPY ./pybind11_demo /src/pybind11_demo

RUN pip install /src/pybind11_demo

WORKDIR /workspace/pybind11_demo

CMD ["/bin/bash"]
